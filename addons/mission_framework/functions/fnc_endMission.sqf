#include "script_component.hpp"

params ["_logic"];

["nev_mission_framework_notification", [(_logic getVariable "Title"), (_logic getVariable "Description")]] call BIS_fnc_showNotification;

[
    {"end1" call BIS_fnc_endMission},
    [],
    10
] call CBA_fnc_waitAndExecute;
