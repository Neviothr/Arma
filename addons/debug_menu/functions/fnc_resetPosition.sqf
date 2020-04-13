#include "script_component.hpp"

/*
 * Author: Neviothr
 * Teleport player to nearest safe position.
 *
 * Arguments:
 * None.
 *
 * Return Value:
 * None.
 *
 * Example:
 * call nev_debug_menu_fnc_resetPosition
 *
 * Public: No
*/

private _safePos = (getPosATL player) findEmptyPosition [0, 25, (typeOf player)];

if (count _safePos == 3) exitWith {
    _safePos set [2, 0];
    player setPosATL _safePos;
};
