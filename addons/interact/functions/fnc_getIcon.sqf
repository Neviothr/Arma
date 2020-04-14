#include "script_component.hpp"

/*
 * Author: Neviothr
 * Get the icon of a vehicle.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * Icon path <STRING>
 *
 * Example:
 * [truck] call nev_interact_fnc_getIcon
 *
 * Public: No
*/

params ["_vehicle"];

private _actionIcon = getText (configfile >> "CfgVehicles" >> typeOf _vehicle >> "icon");

// Use an emtpy string (default action icon) if no icon is found in config.
if (_actionIcon find "\" == -1) then {
    _actionIcon = "";
};

_actionIcon
