#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

// Take ground weapon action
["WeaponHolderSimulated", "InitPost", {
    private _takeWeaponAction = [
        QGVAR(takeWeapon),
        "Take Weapon",
        "\A3\ui_f\data\igui\cfg\actions\take_ca.paa",
        {_player action ["TakeWeapon", _target, weaponCargo _target select 0]},
        {1 == count weaponCargo _target},
        nil,
        nil,
        nil,
        nil,
        nil,
        {
            params ["_target", "", "", "_actionData"];

            _actionData set [1, format ["Take %1", getText (configfile >> "CfgWeapons" >> weaponCargo _target select 0 >> "displayName")]];
        }
    ] call ace_interact_menu_fnc_createAction;

    [_this select 0, 0, ["ACE_MainActions"], _takeWeaponAction, true] call ace_interact_menu_fnc_addActionToObject;
}] call CBA_fnc_addClassEventHandler;

ADDON = true;
