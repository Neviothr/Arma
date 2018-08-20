#include "script_component.hpp"

#include "XEH_PREP.hpp"

_insertChildren = {
    params ["_target", "_player", "_params"];

    // Create a list of boxes and vehicles within 20m of _target
    private _vehicles = (nearestObjects [_target, ["Tank", "Car", "Ship", "Helicopter", "Plane", "ReammoBox_F"], 20]) select {_x != _target};

    // Add children to this action
    private _actions = [];

    {
        private _childStatement = {
            params ["_target", "_player", "_vehicle"];

            [_target] call FUNC(transferCargo);
        };

        // Get display name of _x
        private _actionText = getText (configfile >> "CfgVehicles" >> typeOf _x >> "displayName");

        // Get display icon of _x
        private _actionIcon = getText (configfile >> "CfgVehicles" >> typeOf _x >> "icon");

        // Create our action
        private _childAction = ["TransferCargoChildAcion", _actionText, _actionIcon, _childStatement, {true}, {}, _x] call ace_interact_menu_fnc_createAction;

        // Push above action to _actions array
        _actions pushBack [_childAction, [], _target]; // New action, it's children, and the action's target
    } forEach _vehicles;

    // Return _actions array
    _actions
};

_cargoAction = [
    "TransferCargo",
    "Transfer Cargo",
    "a3\ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa",
    {},
    {true},
    _insertChildren
] call ace_interact_menu_fnc_createAction;

{
    [_x, 0, ["ACE_MainActions"], _cargoAction, true] call ace_interact_menu_fnc_addActionToClass;
} forEach ["Tank", "Car", "Ship","Helicopter", "Plane", "ReammoBox_F"];
