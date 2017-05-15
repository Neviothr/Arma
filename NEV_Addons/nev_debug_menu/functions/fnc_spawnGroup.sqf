#include "script_component.hpp"

private _i = 0; // Private loop number var, so we can hint it later
_spawnedGroups = [];
_codeTargetUnits = [];

// Froup spawning loop
for [{_i = 0}, {_i <= 5}, {_i = _i + 1}] do {
	// Select random pos at a max distance from player
	_aiPos = [player, GVAR(maxDistance)] call CBA_fnc_randPos;

	// Check if pos is too close or if pos is on water, if so exit loop
	if (((player distance _aiPos) < GVAR(minDistance)) || surfaceIsWater _aiPos) exitWith {};

	// If above is false, spawn defined groups
	_dummyGroup = [_aiPos, GVAR(groupSide), GVAR(groupArray)] call BIS_fnc_spawnGroup;

	// Move spawned group into array, for which code will be ran on each element
	_spawnedGroups pushBack _dummyGroup;
};

// Apply code to spawned units
if (GVAR(unitCode) != "") then {
	{
		{
			call compile GVAR(unitCode);
		} forEach units _x;
	} forEach _spawnedGroups;
};

// Hint how many groups were spawned based on number of loops, max is 5
systemChat format ["Created %1 groups", _i];