#include "script_component.hpp"

_objList = [];

{
	_objList pushBack _x;
} forEach nearestObjects [player, ["Tank", "Car", "Ship", "Helicopter", "Plane", "StaticWeapon", "CAManBase"], 50];

hint format ["%1", _objList];