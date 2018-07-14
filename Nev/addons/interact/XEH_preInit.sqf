#include "script_component.hpp"

_insertChildren = {
    params ["_target", "_player", "_params"];

    // Create a list of boxes and vehicles within 20m of _target
    private _vehicles = (nearestObjects [_target, ["LandVehicle", "ThingX"], 20]) select {_x != _target};

    // Add children to this action
    private _actions = [];

    {
        private _childStatement = {
            params ["_target", "_player", "_vehicle"];

            private _items = [];
            private _backpacks = [];

            _items = magazineCargo _target;
            _items append weaponCargo _target;
            _backpacks = backpackCargo _target;

            clearWeaponCargoGlobal _target;
            clearMagazineCargoGlobal _target;
            clearBackpackCargoGlobal _target;

            {
                _vehicle addItemCargoGlobal [_x, 1];
            } forEach _items;

            {
                _vehicle addBackpackCargoGlobal [_x, 1];
            } forEach _backpacks;
        };

        // Get display name of _x
        private _actionText = getText (configfile >> "CfgVehicles" >> typeOf _x >> "displayName");

        // Create our action
        private _action = ["TransferCargoChildAcion", _actionText, "", _childStatement, {true}, {}, _x] call ace_interact_menu_fnc_createAction;

        // Push above action to _actions array
        _actions pushBack [_action, [], _target]; // New action, it's children, and the action's target
    } forEach _vehicles;

    // Return _actions array
    _actions
};

_action = [
    "TransferCargo",
    "Transfer Cargo",
    "a3\ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa",
    {},
    {true},
    _insertChildren
] call ace_interact_menu_fnc_createAction;

["LandVehicle", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
["ThingX", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
