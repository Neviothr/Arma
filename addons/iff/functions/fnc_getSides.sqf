#include "script_component.hpp"

private _sides = allUnits apply {side _x};
_sides arrayIntersect _sides;
_sides deleteAt (_sides findIf {str _x == "CIV"});

_sides
