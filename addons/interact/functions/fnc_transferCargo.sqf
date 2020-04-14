#include "script_component.hpp"

/*
 * Author: Neviothr
 * Move inventory content from one vehicle to another.
 *
 * Arguments:
 * 0: The first argument <STRING>
 *
 * Return Value:
 * Vehicle to move cargo from <OBJECT>
 *
 * Example:
 * [truck] call nev_interact_fnc_transferCargo
 *
 * Public: No
*/

params ["_target"];
TRACE_1("",_target);

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
