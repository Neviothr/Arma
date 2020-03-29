#include "script_component.hpp"

private _sides = [];

{
    private _side = side group _x;

    if (str _side in ["WEST", "EAST", "GUER"]) then {
        _sides pushBackUnique _side;
    };
} forEach allUnits;

TRACE_1("",_sides);
_sides
