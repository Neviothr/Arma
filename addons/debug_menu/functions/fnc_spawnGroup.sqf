#include "script_component.hpp"

params [
    ["_minDistance", 250, [0]],
    ["_maxDistance", 325, [0]],
    ["_groupSide", civilian, [civilian]],
    ["_groupArray", [], [[]]],
    ["_unitCode", "", [""]]
];

private _spawnedGroups = [];

for "_i" from 0 to 2 step 1 do {
    private _aiPos = [player, _minDistance, _maxDistance, 20, 0, 0, 0, [], []] call BIS_fnc_findSafePos;
    _aiPos pushBack (getTerrainHeightASL _aiPos + 1.85);

    private _intersections = lineIntersectsSurfaces [eyePos player, _aiPos, player, objNull];
    _aiPos = ASLToAGL _aiPos;

    if !(_intersections isEqualTo []) then {
        private _dummyGroup = [_aiPos, call compile _groupSide, _groupArray] call BIS_fnc_spawnGroup;

        _spawnedGroups pushBack _dummyGroup;
        [_dummyGroup, 1000] spawn lambs_wp_fnc_taskRush;
    };
};

if (_unitCode != "") then {
    {
        {
            call compile _unitCode; // Unstring the string
        } forEach units _x;
    } forEach _spawnedGroups;
};
