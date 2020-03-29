#include "script_component.hpp"

private _playerLoadout = getUnitLoadout [player, true];
TRACE_1("",_playerLoadout);

{
    _x setUnitLoadout _playerLoadout;
} forEach units group player;
