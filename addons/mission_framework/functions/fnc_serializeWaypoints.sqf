#include "script_component.hpp"

/*
 * Author: Head
 * Serialize a group's waypoints.
 *
 * Arguments:
 * 0: Group of units <GROUP>
 *
 * Return Value:
 * Array of waypoints in arrays <ARRAY of ARRAYS>
 *
 * Example:
 * [charlie2] call nev_mission_framework_fnc_serializeWaypoints
 *
 * Public: No
 * Based on:
 * https://github.com/TMF3/TMF/blob/master/addons/common/functions/fn_serializeWaypoints.sqf
*/

params ["_group"];
TRACE_1("",_group);

private _waypoints = (waypoints _group) apply {_x call FUNC(serializeWaypoint)};

TRACE_1("",_waypoints);
_waypoints
