#include "script_component.hpp"

/*
 * Author: Neviothr
 * Restores health or ammo based on passed action type.
 *
 * Arguments:
 * 0: Action type <NUMBER>
 *
 * Return Value:
 * None.
 *
 * Example:
 * [1] call nev_debug_menu_fnc_vehicleActions
 *
 * Public: [Yes/No]
*/

params ["_actionType"];

// Default to player as target if the object under the cursor is not a vehicle.
private _target = [vehicle player, cursorTarget] select (cursorTarget isKindOf "AllVehicles");

TRACE_2("",_actionType,_target);

if (_actionType == 1) then {
    [_target, 1] remoteExec ["setVehicleAmmoDef", _target];
    systemChat format ["[Debug Menu] %1 has been rearmed.", _target];
} else {
    [_target, 0] remoteExec ["setDamage", _target];
    systemChat format ["[Debug Menu] %1 damage set to 0.", _target];
};
