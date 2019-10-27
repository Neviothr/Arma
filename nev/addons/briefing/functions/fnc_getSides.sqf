#include "script_component.hpp"

private _sides = [];

{
	_sides pushBackUnique side _x;
} forEach allUnits;

_sides
