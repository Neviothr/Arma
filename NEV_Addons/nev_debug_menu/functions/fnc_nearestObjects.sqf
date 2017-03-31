#include "script_component.hpp"

private _objList = []; // Create empty array

{
	_objList pushBack _x; // Insert currect element into above array
} forEach nearestObjects [player, ["Tank", "Car", "Ship", "Helicopter", "Plane", "StaticWeapon", "CAManBase"], 50]; // Should be all needed object types within 50m

// Return
hint format ["%1", _objList];