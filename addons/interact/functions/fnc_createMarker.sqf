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

// Use the model center of the building the player is looking at for marker loaction,
// this allows the player to mark buildings at their center, even from the outside, and even if the building is enterable.
private _marker = createMarker [str (cursorObject modelToWorld [0,0,0]), cursorObject modelToWorld [0,0,0]];
_marker setMarkerType "mil_dot";
_marker setMarkerColor "ColorGreen";
