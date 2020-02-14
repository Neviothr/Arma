#include "script_component.hpp"

private _playerLoadout = getUnitLoadout [player, true];

{
    _x setUnitLoadout _playerLoadout;
} forEach units group player;
