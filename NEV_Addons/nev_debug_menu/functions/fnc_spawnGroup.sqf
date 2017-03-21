#include "script_component.hpp"

private _i = 0;

for [{_i = 0}, {_i <= 5}, {_i = _i + 1}] do {
	_aiPos = [player, NEV_maxDistance] call CBA_fnc_randPos;
	if (((player distance _aiPos) < NEV_minDistance) || surfaceIsWater _aiPos) exitWith {};
	[_aiPos, NEV_groupSide, NEV_group] call BIS_fnc_spawnGroup;
};
systemChat format ["Created %1 groups", _i];
call fnc_aggressiveAI;