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

// By using doing this we can create markers at the center of buildings, even if the player is not inside.
private _marker = createMarker ["BuildingMarker" + str random 10000, (nearestBuilding player) modelToWorld [0,0,0]];
_marker setMarkerType "mil_dot";
_marker setMarkerColor "ColorRed";
