#include "script_component.hpp"

private _safePos = (getPosATL player) findEmptyPosition [0, 25, (typeOf player)];
TRACE_1("",_safePos);

if (count _safePos == 3) exitWith {
    _safePos set [2, 0];
    player setPosATL _safePos;
};
