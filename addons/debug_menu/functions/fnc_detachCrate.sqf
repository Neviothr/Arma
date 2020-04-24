#include "script_component.hpp"

/*
 * Author: Cyruz143, Neviothr
 * Detach ammo crate from parashute, create marker on ammo box based on settings.
 *
 * Arguments:
 * 0: Ammo box <OBJECT>
 * 1: Parashute <OBJECT>
 *
 * Return Value:
 * None.
 *
 * Example:
 * private _parachute = createVehicle ["NonSteerable_Parachute_F", _position, [], 0, "FLY"];
 * private _ammoBox = createVehicle ["Box_Syndicate_Ammo_F", [0, 0, 0], [], 0, "NONE"];
 * [_ammoBox, _parachute] call nev_debug_menu_fnc_detachCrate
 *
 * Public: No
 * https://github.com/Cyruz143/ark_inhouse/blob/28c17291b4bfe4bf9d10eb6c0e443b612879794e/addons/ark_admin_tools/client_postinit.sqf
*/

params ["_ammoBox", "_parachute"];
TRACE_2("",_ammoBox,_parachute);

detach _ammoBox;
[{deleteVehicle (_this #0)}, [_parachute]] call CBA_fnc_execNextFrame;

// Don't create maker if debug menu map centering is disabled, to prevent player from using it to orient.
if !(GVAR(mapCentering)) then {
    private _ammoBoxMarker = createMarker [str (_ammoBox modelToWorld [0,0,0]), _ammoBox];
    _ammoBoxMarker setMarkerColor "ColorWEST";
    _ammoBoxMarker setMarkerShape "ELLIPSE";
    _ammoBoxMarker setMarkerBrush "Solid";
    _ammoBoxMarker setMarkerSize [5, 5];
};
