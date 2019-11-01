#include "script_component.hpp"

private _sides = [];

{
	private _side = side _x;

	if ((str _side != "civ") || (str _side != "logic")) then {
		_sides pushBackUnique _side;
	};
} forEach allUnits;

_sides
