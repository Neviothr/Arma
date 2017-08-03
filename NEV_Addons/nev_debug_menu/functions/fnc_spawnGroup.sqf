#include "script_component.hpp"

_spawnedGroups = [];
_codeTargetUnits = [];

// Group spawning loop
for "_i" from 0 to 5 step 1 do {
	// Select random pos
	_aiPos = [player, GVAR(minDistance), GVAR(maxDistance), 20, 0, 0, 0, [], []] call BIS_fnc_findSafePos;

	// Because lineIntercets needs ASL
	_aiPos pushBack (getTerrainHeightASL _aiPos + 1.85);

	// Check if the player sees the position
	_intersections = lineIntersectsSurfaces [eyePos player, _aiPos, player, objNull];

	// Convert AGL
	_aiPos = ASLToAGL _aiPos;

	// Spawn defined groups if there are intersections
	if !(_intersections isEqualTo []) then {
		_dummyGroup = [_aiPos, GVAR(groupSide), GVAR(groupArray)] call BIS_fnc_spawnGroup;

		// Move spawned group into array, for which code will be ran on each element
		_spawnedGroups pushBack _dummyGroup;
	};
};

// Apply code to spawned units
if (GVAR(unitCode) != "") then {
	{
		{
			call compile GVAR(unitCode);
		} forEach units _x;
	} forEach _spawnedGroups;
};