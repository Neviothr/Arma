#include "script_component.hpp"

params [
	["_minDistance", 250, [0]],
	["_maxDistance", 325, [0]],
	["_groupSide", civilian, [civilian]],
	["_groupArray", [], [[]]],
	["_unitCode", "", [""]]
];

private _spawnedGroups = [];
private _codeTargetUnits = [];

// Group spawning loop
for "_i" from 0 to 5 step 1 do {
	// Select random pos
	private _aiPos = [player, _minDistance, _maxDistance, 20, 0, 0, 0, [], []] call BIS_fnc_findSafePos;

	// Because lineIntercets needs ASL
	_aiPos pushBack (getTerrainHeightASL _aiPos + 1.85);

	// Check if the player sees the position
	private _intersections = lineIntersectsSurfaces [eyePos player, _aiPos, player, objNull];

	// Convert AGL
	_aiPos = ASLToAGL _aiPos;

	// Spawn defined groups if there are intersections
	if !(_intersections isEqualTo []) then {
		private _dummyGroup = [_aiPos, _groupSide, _groupArray] call BIS_fnc_spawnGroup;

		// Move spawned group into array, for which code will be ran on each element
		_spawnedGroups pushBack _dummyGroup;
	};
};

// Apply code to spawned units
if (_unitCode != "") then {
	{
		{
			call compile _unitCode; // Unstring the string
		} forEach units _x;
	} forEach _spawnedGroups;
};
