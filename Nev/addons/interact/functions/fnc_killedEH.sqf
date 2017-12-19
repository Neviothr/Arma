#include "script_component.hpp"

params ["_unit"];

private _itemTypeWeaponList = ["AssaultRifle", "GrenadeLauncher", "MachineGun", "Shotgun", "Rifle", "SubmachineGun", "SniperRifle"];

{
    private _actionName = str floor random 1000000; // TODO - Proper identifer
    private _actionText = "Take " + getText (configFile >> "CfgWeapons" >> _x >> "displayName");
    private _icon = if ((_x call BIS_fnc_itemType select 1) in _itemTypeWeaponList) then {
        "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\PrimaryWeapon_ca.paa";
    } else {
        if ((_x call BIS_fnc_itemType select 1) isEqualTo "Handgun") then {
            "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Handgun_ca.paa";
        } else {
            "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\SecondaryWeapon_ca.paa";
        };
    };
    private _statement = if (_icon isEqualTo "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Handgun_ca.paa") then {
        {_player action ['TakeWeapon', _target, _x]};
    } else {
        compile format ["_player action ['TakeWeapon', (nearestObject [_target, 'WeaponHolderSimulated']), %1]", str _x];
    };
    private _condition = {true};
    private _modiferFnc = {
        params ["_target", "_player", "_params", "_actionData"];

        private _primaryWeapon = primaryWeapon _player;
        private _secondaryWeapon = secondaryWeapon _player;
        private _handgunWeapon = handgunWeapon _player;

        if (_icon isEqualTo "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\PrimaryWeapon_ca.paa") then {
            _actionData set [1, "Take " + getText (configFile >> "CfgWeapons" >> _primaryWeapon >> "displayName")];
            _actionData set [3, {_player action ['TakeWeapon', (nearestObject [_target, 'WeaponHolderSimulated']), _primaryWeapon]}];
        };

        if (_icon isEqualTo "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Handgun_ca.paa") then {
            _actionData set [1, "Take " + getText (configFile >> "CfgWeapons" >> _handgunWeapon >> "displayName")];
            _actionData set [3, {_player action ['TakeWeapon', _target, _handgunWeapon]}];
        };

        if (_icon isEqualTo "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\SecondaryWeapon_ca.paa") then {
            _actionData set [1, "Take " + getText (configFile >> "CfgWeapons" >> _secondaryWeapon >> "displayName")];
            _actionData set [3, {_player action ['TakeWeapon', (nearestObject [_target, 'WeaponHolderSimulated']), _secondaryWeapon]}];
        };
    };

    private _weaponAction = [
        _actionName,
        _actionText,
        _icon,
        _statement,
        _condition,
        {},
        [_icon],
        [0,0,0],
        2,
        [false, false, false, false, false],
        _modiferFnc
    ] call ace_interact_menu_fnc_createAction;

    [_unit, 0, ["ACE_MainActions", QGVAR(inventoryAction)], _weaponAction] call ace_interact_menu_fnc_addActionToObject;
} forEach weapons _unit;
