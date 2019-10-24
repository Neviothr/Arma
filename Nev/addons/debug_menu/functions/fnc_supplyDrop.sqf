#include "script_component.hpp"

params ["_player"];

_player setVariable [QGVAR(paradropInProgress), true];

// Randomize wind
[] remoteExec ["setWind [random 359, random 359, false]; 3 setWindDir random 359; 3 setWindStr random 1; 3 setWindForce random 1", 2];

private _position = getPos _player;
_position set [2, 75];

private _parachute = createVehicle ["NonSteerable_Parachute_F", _position, [], 0, "FLY"];
private _ammoBox = createVehicle ["B_supplyCrate_F", [0,0,0], [], 0, "NONE"];

// Make sure our supply crate is empty
clearItemCargoGlobal _ammoBox;
clearMagazineCargoGlobal _ammoBox;
clearWeaponCargoGlobal _ammoBox;
clearBackpackCargoGlobal _ammoBox;

_ammoBox allowDamage false;
_ammoBox attachTo [_parachute, [0, 0, -1.3]];

// Fill supply crate with equipment
// Primary weapon magazines
private _primaryWpn = primaryWeapon _player;

if (primaryWeapon _player != "") then {
	private _primaryMags = [_primaryWpn, true] call CBA_fnc_compatibleMagazines;

	{
		_ammoBox addItemCargoGlobal [_x, 10];
	} forEach _primaryMags;
};

// Secondary magazines
// Singleshot secondary weapons
private _secondaryWpn = secondaryWeapon _player;
private _blackSecondaries = ["", "CUP_launch_M136", "CUP_launch_NLAW", "CUP_launch_RPG18", "CUP_launch_M72A6", "CUP_launch_M72A6_Special", "CUP_launch_M72A6_Used", "rhs_weap_rpg26", "rhs_weap_rshg2", "rhs_weap_M136", "rhs_weap_M136_hedp", "rhs_weap_M136_hp", "rhs_weap_m72a7", "rhs_weap_panzerfaust60", "rhs_weap_rpg75", "rhs_weap_m80"];

if !(_secondaryWpn in _blackSecondaries) then {
	private _secondaryMags = [_secondaryWpn] call CBA_fnc_compatibleMagazines;

	{
		_ammoBox addItemCargoGlobal [_x, 5];
	} forEach _secondaryMags;
} else {
	if (_secondaryWpn != "") then {
		_ammoBox addItemCargoGlobal [_secondaryWpn, 5];
	};
};

// Handgun magazines
// Singleshot handguns
private _handgunWeapon = handgunWeapon _player;
private _blacklistedHandguns = ["", "rhs_weap_rsp30_white", "rhs_weap_rsp30_green", "rhs_weap_rsp30_red", "rhs_weap_tr8"];

if !(handgunWeapon _player in _blacklistedHandguns) then {
	private _handgunMagazines = [_handgunWeapon] call CBA_fnc_compatibleMagazines;

	{
		_ammoBox addItemCargoGlobal [_x, 5];
	} forEach _handgunMagazines;
} else {
	if (_handgunWeapon != "") then {
		_ammoBox addItemCargoGlobal [_handgunWeapon, 5];
	};
};

// Misc items
_ammoBox addItemCargoGlobal ["FirstAidKit", 10];
_ammoBox addItemCargoGlobal ["Medikit", 1];
_ammoBox addItemCargoGlobal ["MiniGrenade", 5];
_ammoBox addItemCargoGlobal ["HandGrenade", 5];

private _smokeShell = selectRandom ["SmokeShellYellow", "SmokeShellRed", "SmokeShellBlue", "SmokeShellGreen", "SmokeShellOrange"];
private _smoke = createVehicle [_smokeShell, [0, 0, 0], [], 0, "NONE"];

_smoke attachTo [_parachute, [0, 0, 0]];

[
	{getPos (_this #0) #2 < 1.5},
	{[(_this #0),(_this #1),(_this #2),(_this #3)] call FUNC(detachCrate);},
	[_ammoBox, _parachute,_smoke, _player],
	45,
	{[(_this #0),(_this #1),(_this #2),(_this #3)] call FUNC(detachCrate);}
] call CBA_fnc_waitUntilAndExecute;
