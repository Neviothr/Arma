#include "script_component.hpp"
/*
 * Author: Tim Beswick, Neviothr
 * Handle spawning of units in zone.
 *
 * Arguments:
 * 0: Zone spawner module logic <OBJECT>
 * 1: Area marker created during zone init <MARKER>
 * 2: Maximum amount of groups within zone at any given time <NUMBER>
 * 3: Total amount of groups that will spawn in this zone <NUMBER>
 * 4: Array of units from which spawned groups will consist of <ARRAY of STRINGS>
 * 5: Side of spawned groups <SIDE>
 *
 * Return Value:
 * None.
 *
 * Example:
 * [zoneModule1, zoneMarker1, 8, 4, ["some_blufor_F"], east] call nev_mission_framework_fnc_endMission
 *
 * Public: No
 * Based on:
 * https://github.com/uksf/modpack/blob/master/addons/mission/functions/fnc_initPatrol.sqf
*/

params ["_logic", "_marker", "_maxGroups", "_groupPoolSize", "_unitArray", "_side"];

_logic setVariable [QGVAR(currentGroupsActive), []];
_logic setVariable [QGVAR(groupPoolSize), _groupPoolSize];

[{
    params ["_args", "_idPFH"];
    _args params ["_logic", "_marker", "_maxGroups", "_unitArray", "_side"];

    private _groupPoolSize = _logic getVariable [QGVAR(groupPoolSize), 0];
    if (_groupPoolSize <= 0) exitWith {[_idPFH] call CBA_fnc_removePerFrameHandler};

    private _currentGroupsActive = _logic getVariable [QGVAR(currentGroupsActive), []];
    _currentGroupsActive = _currentGroupsActive select {({alive _x} count (units _x)) > 0};
    _logic setVariable [QGVAR(currentGroupsActive), _currentGroupsActive];

    if ((count _currentGroupsActive) < _maxGroups) then {

        private _spawnPoint = [_marker] call CBA_fnc_randPosArea;
        if (({_x distance2D _randomSpawn < 300} count (call CBA_fnc_players)) > 0) exitWith {};

        private _group = [_spawnPoint, call compile _side, call compile _unitArray] call BIS_fnc_spawnGroup;

        if (isClass (configFile >> "CfgPatches" >> "lambs_main")) then {
            [_group, sqrt ((worldSize ^ 2) + (worldSize ^ 2))] spawn lambs_wp_fnc_taskRush;
        };

        private _currentGroupsActive = _logic getVariable QGVAR(currentGroupsActive);
        _currentGroupsActive pushBack _group;
        _logic setVariable [QGVAR(currentGroupsActive), _currentGroupsActive];

        private _groupPoolSize = _logic getVariable QGVAR(groupPoolSize);
        _logic setVariable [QGVAR(groupPoolSize), (_groupPoolSize - 1)];
    };
}, 20 + (random 10), [_logic, _marker, _maxGroups, _unitArray, _side]] call CBA_fnc_addPerFrameHandler;
