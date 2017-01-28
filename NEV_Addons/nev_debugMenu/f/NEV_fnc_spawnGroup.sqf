NEV_fnc_spawnGroup = {
	_aiPos = [player, 325] call CBA_fnc_randPos;
	if ((player distance _aiPos) < 250) exitWith {};
	[_aiPos, NEV_groupSide, NEV_group] call BIS_fnc_spawnGroup
}