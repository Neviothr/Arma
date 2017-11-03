#include "script_component.hpp"

#include "XEH_PREP.hpp"

// Custom waypoint toggle
[
    QGVAR(doWaypoint),
    "CHECKBOX",
    ["Custom Waypoint", "Toggle custom, distance indicator-less waypoint."],
    "A3 Overrides",
    true
] call CBA_Settings_fnc_init;
