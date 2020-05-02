#include "script_component.hpp"
/*
 * Author: Neviothr
 * Display mission ending notification with text based on module input, and terminate the mission after a short while.
 *
 * Arguments:
 * 0: Mission ending module <OBJECT>
 *
 * Return Value:
 * None.
 *
 * Example:
 * [myEndGameModule] call nev_mission_framework_fnc_endMission
 *
 * Public: No
*/

params ["_logic"];

["nev_mission_framework_notification", [(_logic getVariable "Title"), (_logic getVariable "Description")]] call BIS_fnc_showNotification;

[
    {"end1" call BIS_fnc_endMission},
    [],
    10
] call CBA_fnc_waitAndExecute;
