#include "script_component.hpp"

/*
 * Author: Neviothr
 * Spawn a group of AI.
 *
 * Arguments:
 * 0: Minimum distance for spawning <NUMBER> (default: 250)
 * 1: Maximum distance for spawning (AI will be create between minimum and maxmium distance) <NUMBER> (default: 325)
 * 2: Side <SIDE> (default: civillian)
 * 3: Array of units <ARRAY of STRINGS>
 * 4: Unit code <CODE>
 *
 * Return Value:
 * None.
 *
 * Example:
 * [400, 500, EAST, ["B_Soldier_A_F"], {_ allowDamage false}] call nev_debug_menu_fnc_spawnGroup
 *
 * Public: No
*/

params [
    ["_minDistance", 250, [0]],
    ["_maxDistance", 325, [0]],
    ["_groupSide", civilian, [civilian]],
    ["_groupArray", [], [[]]],
    ["_unitCode", {}, [{}]]
];
TRACE_5("",_minDistance,_maxDistance,_groupSide,_groupArray,_unitCode);

#define UNIT_HEIGHT 1.85

if (_groupArray isEqualTo []) exitWith {LOG("_groupArray is empty")};

// Find a position obstructed from the player's view
private _safePos = [player, _minDistance, _maxDistance, 20, 0, 0, 0, [], [[0, 0], [0, 0]]] call BIS_fnc_findSafePos;

// When BIS_fnc_findSafePos cannot find a suitable position, default map center position is returned, which will be in format [x,y,0].
// Make sure the position isn't the world center
if (_safePos isNotEqualTo [0, 0]) then {
    // Add 2 meters of height into the suitable position, this prevents AI from being created in shallow trenches into which the player can look.
    _safePos set [2, UNIT_HEIGHT];

    // Confirm the position is out of view
    private _intersections = lineIntersectsSurfaces [eyePos player, _safePos, player, objNull];

    if (_intersections isNotEqualTo []) then {
        private _safePosAGL = ASLToAGL _safePos;
        private _group = [_safePosAGL, _groupSide, _groupArray] call BIS_fnc_spawnGroup;

        if (isClass (configFile >> "CfgPatches" >> "lambs_main")) then {
            [_group, sqrt ((worldSize ^ 2) + (worldSize ^ 2))] spawn lambs_wp_fnc_taskRush;
        };

        if (_unitCode isEqualTo {}) then {
            {
                call _unitCode;
            } forEach units _group;
        };
    };
} else {
    WARNING_1("_safePos array contains 3 or more elements, terminating.",_safePos);
};
