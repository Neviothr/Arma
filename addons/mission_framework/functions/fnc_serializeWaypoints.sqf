#include "script_component.hpp"

params ["_group"];

private _waypoints = [];

{
    _waypoints pushback (_x call FUNC(serializeWaypoint));
} foreach waypoints _group;

_waypoints
