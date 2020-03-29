#include "script_component.hpp"

params ["_group"];
TRACE_1("",_group);

private _waypoints = [];

{
    _waypoints pushback (_x call FUNC(serializeWaypoint));
} foreach waypoints _group;

TRACE_1("",_waypoints);
_waypoints
