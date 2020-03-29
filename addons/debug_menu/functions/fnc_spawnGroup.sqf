#include "script_component.hpp"

params [
    ["_minDistance", 250, [0]],
    ["_maxDistance", 325, [0]],
    ["_groupSide", civilian, [civilian]],
    ["_groupArray", [], [[]]],
    ["_unitCode", {}, [{}]]
];
TRACE_5("",_minDistance,_maxDistance,_groupSide,_groupArray,_unitCode);

if (_groupArray isEqualTo []) exitWith {LOG("_groupArray is empty")};

private _spawnedGroups = [];

for "_i" from 0 to 5 step 1 do {
    private _safePos = [player, _minDistance, _maxDistance, 20, 0, 0, 0, [], []] call BIS_fnc_findSafePos;
    if ((count _safePos) > 2) exitWith {WARNING_1("_safePos array contains 3 or more elements, terminating.",_safePos)};

    _safePos pushBack (getTerrainHeightASL _aiPos + 1.85);

    private _intersections = lineIntersectsSurfaces [eyePos player, _aiPos, player, objNull];

    if !(_intersections isEqualTo []) then {
        private _safePosAGL = ASLToAGL _safePos;
        private _group = [_safePosAGL, _groupSide, _groupArray] call BIS_fnc_spawnGroup;

        if (isClass (configFile >> "CfgPatches" >> "lambs_main")) then {
            [_group, 5000] spawn lambs_wp_fnc_taskRush;
        };

        if (_unitCode != {}) then {
            {
                call _unitCode;
            } forEach units _group;
        };
    };
};
