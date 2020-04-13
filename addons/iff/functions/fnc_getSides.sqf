#include "script_component.hpp"

/*
 * Author: Neviothr
 * Get a list of all scenario unit sides.
 *
 * Arguments:
 * None.
 *
 * Return Value:
 * Array of sides <ARRAY of SIDES>
 *
 * Example:
 * call nev_iff_fnc_getSides
 *
 * Public: No
*/

private _sides = allUnits apply {side _x};
_sides = _sides arrayIntersect _sides;
_sides deleteAt (_sides findIf {str _x == "CIV"});

_sides
