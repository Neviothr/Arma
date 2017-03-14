#include "script_component.hpp"

_i = 0;
for [{_i = 0}, {_i <= 5}, {_i = _i + 1}] do {
	_aiPos = [player, GVAR(maxDistance)] call CBA_fnc_randPos;
	if (((player distance _aiPos) < GVAR(minDistance)) || surfaceIsWater _aiPos) exitWith {};
	[_aiPos, GVAR(groupSide), GVAR(group)] call BIS_fnc_spawnGroup;
};

systemChat format ["Created %1 groups", _i];
FUNC(aggressiveAI);