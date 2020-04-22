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

// Use the model center of the neareast building for marker creation,
// this allows the player to mark buildings at their center, even from the outside.
private _marker = createMarker ["BuildingMarker" + str random 10000, (nearestBuilding player) modelToWorld [0,0,0]];
_marker setMarkerType "mil_dot";
_marker setMarkerColor "ColorRed";
