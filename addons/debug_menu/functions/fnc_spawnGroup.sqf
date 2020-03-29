#include "script_component.hpp"

params [
    ["_minDistance", 250, [0]],
    ["_maxDistance", 325, [0]],
    ["_groupSide", civilian, [civilian]],
    ["_groupArray", [], [[]]],
    ["_unitCode", "", [""]]
];

private _spawnedGroups = [];

for "_i" from 0 to 5 step 1 do {
    private _aiPos = [player, _minDistance, _maxDistance, 20, 0, 0, 0, [], []] call BIS_fnc_findSafePos;

    if ((count _aiPos) > 2) exitWith {};

    _aiPos pushBack (getTerrainHeightASL _aiPos + 1.85);

    private _intersections = lineIntersectsSurfaces [eyePos player, _aiPos, player, objNull];
    _aiPos = ASLToAGL _aiPos;

    if !(_intersections isEqualTo []) then {
        private _dummyGroup = [_aiPos, _groupSide, _groupArray] call BIS_fnc_spawnGroup;

        _spawnedGroups pushBack _dummyGroup;

        if (isClass (configFile >> "CfgPatches" >> "lambs_main")) then {
            [_dummyGroup, 5000] spawn lambs_wp_fnc_taskRush;
        };
    };
};

if (_unitCode != "") then {
    {
        {
            call compile _unitCode; // Unstring the string
        } forEach units _x;
    } forEach _spawnedGroups;
};
