/*
 * Name: TMF_common_fnc_serializeWaypoint
 * Author: Head
 *
 * Arguments:
 * _this: Waypoint
 *
 * Return:
 * array: waypoint data
 *
 * https://raw.githubusercontent.com/TMF3/TMF/591ed940fc43466e6599fd53bd4ad8df03e133dc/addons/common/functions/fnc_serializeWaypoint.sqf
 */
private _way = [
    waypointName _this,
    waypointPosition  _this,
    waypointType _this,
    waypointBehaviour _this,
    waypointCombatMode _this,
    waypointDescription _this,
    waypointFormation _this,
    waypointHousePosition _this,
    waypointScript _this,
    waypointSpeed _this,
    waypointTimeout _this,
    waypointVisible _this,
    waypointCompletionRadius _this,
    waypointStatements _this,
    waypointAttachedObject _this,
    waypointAttachedVehicle _this
];

_way
