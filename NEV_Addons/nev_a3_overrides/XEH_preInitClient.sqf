#include "script_component.hpp"

#include "XEH_PREP.hpp"

diag_log "preInitClient is loading";

// Custom waypoint toggle
[
    QGVAR(doWaypoint),
    "CHECKBOX",
    ["Custom Waypoint", "Toggle custom, distance indicator-less waypoint."],
    "A3 Overrides",
    true
] call CBA_Settings_fnc_init;

diag_log format ["QGVAR(doWaypoint) is %1", QGVAR(doWaypoint)];
diag_log "preInitClient has finished loading";