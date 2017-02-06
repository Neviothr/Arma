NEV_fnc_spawnGroup = {
	for "_i" from 1 to 10 do {
		_aiPos = [player, NEV_maxDistance] call CBA_fnc_randPos;
		if (((player distance _aiPos) < NEV_minDistance) || surfaceIsWater _aiPos) exitWith {};
		[_aiPos, NEV_groupSide, NEV_group] call BIS_fnc_spawnGroup;
	};
	call NEV_fnc_aggressiveAI;
}