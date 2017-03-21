#include "script_component.hpp"

{
	[_x, _x, 50, 2, false] call CBA_fnc_taskDefend;
} forEach allUnits;

["nev_notification", ["GARRISON", "All units have been applied with CBA_fnc_taskDefend."]] call BIS_fnc_showNotification;