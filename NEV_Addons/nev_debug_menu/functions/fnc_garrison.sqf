#include "script_component.hpp"

{
	[_x, _x, 50, 2, false] call CBA_fnc_taskDefend; // Makes all units garrison buildings with at least 2 valid positions, within 50m
} forEach allUnits; // Run on all units

// Notifiy the user
["nev_notification", ["GARRISON", "All units have been applied with CBA_fnc_taskDefend."]] call BIS_fnc_showNotification;