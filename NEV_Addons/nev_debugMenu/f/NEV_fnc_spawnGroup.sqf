NEV_fnc_spawnGroup = {
	for "_i" from 1 to 10 do {
		_aiPos = [player, 325] call CBA_fnc_randPos;
		if (((player distance _aiPos) < 250) || surfaceIsWater _aiPos) exitWith {};
		[_aiPos, NEV_groupSide, NEV_group] call BIS_fnc_spawnGroup;
	};
	call NEV_fnc_aggressiveAI;
}