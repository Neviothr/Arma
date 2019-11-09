#include "script_component.hpp"

params ["_target"];

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

private _notificationText = format ["Transfering cargo from %1 to %2", _vehicle, _target];

[["\a3\ui_f\data\igui\cfg\simpletasks\types\rearm_ca.paa"], [_notificationText]] call CBA_fnc_notify;
