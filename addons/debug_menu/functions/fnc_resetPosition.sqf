#include "script_component.hpp"

params [["_unit", objNull, [objNull]]];
TRACE_1("",_unit);

if (isNull _unit) exitWith {};

_unit = vehicle _unit;

private _safePos = (getPosATL _unit) findEmptyPosition [0, 25, (typeOf _unit)];
TRACE_1("",_safePos);

if (count _safePos == 3) exitWith {
    _safePos set [2, 0];
    _unit setPosATL _safePos;
};
