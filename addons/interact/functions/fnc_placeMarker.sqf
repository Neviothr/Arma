#include "script_component.hpp"

/*
 * Author: Neviothr
 * Create marker on player position.
 *
 * Arguments:
 * None.
 *
 * Return Value:
 * None.
 *
 * Example:
 * call nev_interact_fnc_placeMarker
 *
 * Public: No
*/

private _marker = createMarker ["BuildingMarker" + str random 10000, getPos player];
_marker setMarkerType "mil_dot";
_marker setMarkerColor "ColorRed";
