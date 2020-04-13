#include "script_component.hpp"

/*
 * Author: Neviothr
 * Copy the player's loadout to all units of his group.
 *
 * Arguments:
 * None.
 *
 * Return Value:
 * None.
 *
 * Example:
 * call nev_debug_menu_fnc_propagateKit
 *
 * Public: No
*/

private _playerLoadout = getUnitLoadout [player, true];

{
    _x setUnitLoadout _playerLoadout;
} forEach units group player;
