#include "script_component.hpp"

params [["_unit", objNull, [objNull]]];

if (isNull _unit) exitWith {};

_unit = vehicle _unit;

private _safePos = (getPosATL _unit) findEmptyPosition [0, 25, (typeOf _unit)];

if (count _safePos == 3) exitWith {
    _safePos set [2, 0];
    _unit setPosATL _safePos;
};
