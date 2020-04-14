#include "script_component.hpp"

/*
 * Author: Neviothr
 * Create an array of child cargo transfer actions based on neareast vehicles to target vehicle.
 *
 * Arguments:
 * 0: Vehicle, center point around which vehicles and boxes will be searched for <OBJECT>
 *
 * Return Value:
 * Array of child actions to add to main action.
 *
 * Example:
 * [truck] call nev_interact_fnc_addCargoActions
 *
 * Public: No
*/

params ["_target"];

// Get a list of vehicles and ammo boxes within 20m of target vehicle.
private _vehicles = (nearestObjects [_target, ["Tank", "Car", "Ship", "Helicopter", "Plane", "ReammoBox_F"], 20]) select {_x != _target};
private _actions = [];

TRACE_2("",_target,_vehicles);

// Create a unique action for every found vehicle.
{
    // Statement to be executed when action is used.
    private _childStatement = {
        params ["_target", "", "_vehicle"];

        [_target] call FUNC(transferCargo);
    };

    // Text and icon based on vehicle type.
    private _actionText = getText (configfile >> "CfgVehicles" >> typeOf _x >> "displayName");
    private _actionIcon = _x call FUNC(getIcon);
    TRACE_2("",_actionText,_actionIcon);

    // Complete action with above arguments.
    private _childAction = [QGVAR(caroActionChild), _actionText, _actionIcon, _childStatement, {true}, {}, _x] call ace_interact_menu_fnc_createAction;

    _actions pushBack [_childAction, [], _target];
} forEach _vehicles;

TRACE_1("",_actions);
_actions
