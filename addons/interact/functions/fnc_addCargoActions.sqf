#include "script_component.hpp"

params ["_target", "_player", "_params"];


private _vehicles = (nearestObjects [_target, ["Tank", "Car", "Ship", "Helicopter", "Plane", "ReammoBox_F"], 20]) select {_x != _target};
private _actions = [];

{
    private _childStatement = {
        params ["_target", "_player", "_vehicle"];

        [_target] call FUNC(transferCargo);
    };

    private _actionText = getText (configfile >> "CfgVehicles" >> typeOf _x >> "displayName");
    private _actionIcon = _x call FUNC(getIcon);
    private _childAction = [QGVAR(caroActionChild), _actionText, _actionIcon, _childStatement, {true}, {}, _x] call ace_interact_menu_fnc_createAction;

    _actions pushBack [_childAction, [], _target];
} forEach _vehicles;

_actions
