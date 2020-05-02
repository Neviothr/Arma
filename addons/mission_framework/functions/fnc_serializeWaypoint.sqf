#include "script_component.hpp"

/*
 * Author: Head
 * Serialize waypoints(?)
 *
 * Arguments:
 * 0: Group of units <GROUP>
 * 1: Waypoint index <NUBMER>
 *
 * Return Value:
 * Waypoint <ARRAY>
 *
 * Example:
 * [alpha1, 4] call nev_mission_framework_fnc_serializeWaypoint
 *
 * Public: No
 * Based on:
 * https://github.com/TMF3/TMF/blob/master/addons/common/functions/fn_serializeWaypoint.sqf
*/

params ["_group", "_waypointIndex"];
TRACE_2("",_group,_waypointIndex);

private _way = [];

_way pushBack waypointName [_group, _waypointIndex];
_way pushBack waypointPosition  [_group, _waypointIndex];
_way pushBack waypointType [_group, _waypointIndex];
_way pushBack waypointBehaviour [_group, _waypointIndex];
_way pushBack waypointCombatMode [_group, _waypointIndex];
_way pushBack waypointDescription [_group, _waypointIndex];
_way pushBack waypointFormation [_group, _waypointIndex];
_way pushBack waypointHousePosition [_group, _waypointIndex];
_way pushBack waypointScript [_group, _waypointIndex];
_way pushBack waypointShow [_group, _waypointIndex];
_way pushBack waypointSpeed [_group, _waypointIndex];
_way pushBack waypointTimeout [_group, _waypointIndex];
_way pushBack waypointVisible [_group, _waypointIndex];

TRACE_1("",_way);
_way
