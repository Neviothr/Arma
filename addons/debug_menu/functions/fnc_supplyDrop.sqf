#include "script_component.hpp"

/*
 * Author: Neviothr
 * Spawn a supply drop which contents are based on the player's weapons.
 *
 * Arguments:
 * None.
 *
 * Return Value:
 * None.
 *
 * Example:
 * call nev_debug_menu_fnc_supplyDrop
 *
 * Public: No
*/

#define BLACKLISTED_LAUNCHERS ["", "CUP_launch_M136", "CUP_launch_NLAW", "CUP_launch_RPG18", "CUP_launch_M72A6", "CUP_launch_M72A6_Special", "CUP_launch_M72A6_Used", "rhs_weap_rpg26", "rhs_weap_rshg2", "rhs_weap_M136", "rhs_weap_M136_hedp", "rhs_weap_M136_hp", "rhs_weap_m72a7", "rhs_weap_panzerfaust60", "rhs_weap_rpg75", "rhs_weap_m80"]
#define BLACKLISTED_HANDGUNS ["", "rhs_weap_rsp30_white", "rhs_weap_rsp30_green", "rhs_weap_rsp30_red", "rhs_weap_tr8"]
// Randomize wind, this allows the supply crate to drift while falling, forcing the player to reach it, instead of having it drop straight on him.
[] remoteExec ["setWind [random 359, random 359, false]; 3 setWindDir random 359; 3 setWindStr random 1; 3 setWindForce random 1", 2];

// Choose a random location around the player, 75m high, at which the crate will spawn.
private _position = player getPos [100 * sqrt random 1, random 360];
_position set [2, 75];
TRACE_1("",_position);

private _parachute = createVehicle ["NonSteerable_Parachute_F", _position, [], 0, "FLY"];
private _ammoBox = createVehicle ["Box_Syndicate_Ammo_F", [0, 0, 0], [], 0, "NONE"];

clearItemCargoGlobal _ammoBox;
clearMagazineCargoGlobal _ammoBox;
clearWeaponCargoGlobal _ammoBox;
clearBackpackCargoGlobal _ammoBox;

_ammoBox allowDamage false;
_ammoBox attachTo [_parachute, [0, 0, -1.3]];

// Add 90 magazines compatible with the player's rifle, 5 random types, 15 of each.
private _primaryWpn = primaryWeapon player;
TRACE_1("",_primaryWpn);

if (_primaryWpn != "") then {
    private _primaryMags = [_primaryWpn, false] call CBA_fnc_compatibleMagazines;
    TRACE_1("",_primaryMags);

    for "_i" from 0 to 5 do {
        private _selectedPrimaryMag = _primaryMags select (floor (random ((count _primaryMags) - 1)));
        TRACE_1("",_selectedPrimaryMag);

        _ammoBox addItemCargoGlobal [_selectedPrimaryMag, 15];
    };
};

// Add 60 magazines compatible with the player's launcher, 5 random types, 15 of each.
// If no launcher is found, add 15 launcher of the currently equiped type.
private _secondaryWpn = secondaryWeapon player;
TRACE_1("",_secondaryWpn);

if !(_secondaryWpn in BLACKLISTED_LAUNCHERS) then {
    private _secondaryMags = [_secondaryWpn, false] call CBA_fnc_compatibleMagazines;
    TRACE_1("",_secondaryMags);

    for "_i" from 0 to 5 do {
        private _selectedSecondaryMag = _secondaryMags select (floor (random ((count _secondaryMags) - 1)));
        TRACE_1("",_selectedSecondaryMag);

        _ammoBox addItemCargoGlobal [_selectedSecondaryMag, 10];
    };
} else {
    if (_secondaryWpn != "") then {
        _ammoBox addItemCargoGlobal [_secondaryWpn, 15];
    };
};


// Add 60 magazines compatible with the player's handgun, 5 random types, 15 of each.
// If the "handgun" is an RHS, single use flare or periscope - add 15 of the same type to the crate.
private _handgunWeapon = handgunWeapon player;
TRACE_1("",_handgunWeapon);

if !(_handgunWeapon in BLACKLISTED_HANDGUNS) then {
    private _handgunMagazines = [_handgunWeapon, false] call CBA_fnc_compatibleMagazines;
    TRACE_1("",_handgunMagazines);

    for "_i" from 0 to 5 do {
        private _selectedhandgunMag = _handgunMagazines select (floor (random ((count _handgunMagazines) - 1)));
        TRACE_1("",_selectedhandgunMag);

        _ammoBox addItemCargoGlobal [_selectedhandgunMag, 10];
    };
} else {
    if (_handgunWeapon != "") then {
        _ammoBox addItemCargoGlobal [_handgunWeapon, 15];
    };
};

{
    _ammoBox addItemCargoGlobal [_x, 30];
} forEach [
    "FirstAidKit",
    "rhs_mag_m67", "rhs_weap_m72a7",
    "Chemlight_blue", "rhs_mag_an_m8hc", "rhs_mag_an_m14_th3", "rhs_grenade_m15_mag",
    "DemoCharge_Remote_Mag", "SatchelCharge_Remote_Mag", "ACE_Clacker",
    "UGL_FlareWhite_F", "1Rnd_HE_Grenade_shell", "CUP_1Rnd_HEDP_M203"
];

private _smokeShell = selectRandom ["SmokeShellYellow", "SmokeShellRed", "SmokeShellBlue", "SmokeShellGreen", "SmokeShellOrange"];
private _smoke = createVehicle [_smokeShell, [0, 0, 0], [], 0, "NONE"];

_smoke attachTo [_parachute, [0, 0, 0]];

[
    {getPos (_this #0) #2 < 1.5},
    {[(_this #0),(_this #1)] call FUNC(detachCrate);},
    [_ammoBox, _parachute],
    45,
    {[(_this #0),(_this #1)] call FUNC(detachCrate);}
] call CBA_fnc_waitUntilAndExecute;

[["\a3\ui_f_orange\data\cfgtasktypes\airdrop_ca.paa"], ["Supply drop incoming."]] call CBA_fnc_notify;
