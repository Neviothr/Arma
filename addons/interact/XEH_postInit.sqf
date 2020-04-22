#include "script_component.hpp"

// https://github.com/acemod/ACE3/pull/6029/files#diff-b895d761960809ce11f4d98a410188aa
// add "Take _weapon_" action to dropped weapons
private _action = [
    // action display name will be overwritten in modifier function
    QGVAR(takeWeapon), "take", "\A3\ui_f\data\igui\cfg\actions\take_ca.paa",
    {_player action ["TakeWeapon", _target, weaponCargo _target select 0]},
    {1 == count weaponCargo _target},
    nil, nil, nil, nil, nil,
    {
        params ["_target", "", "", "_actionData"];
        _actionData set [1, format [localize "Take Bag", getText (configfile >> "CfgWeapons" >> weaponCargo _target select 0 >> "displayName")]];
    }
] call ace_interact_menu_fnc_createAction;
{
    [_x, 0, ["ACE_MainActions"], _action, true] call  ace_interact_menu_fnc_addActionToClass;
} forEach ["WeaponHolder", "WeaponHolderSimulated"];
