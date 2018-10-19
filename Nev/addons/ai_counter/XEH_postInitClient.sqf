#include "script_component.hpp"

if (!hasInterface) exitWith {};

if (IS_ADMIN || (!isMultiplayer) || (isServer && hasInterface)) then {
	// Using CBA_fnc_waitUntilAndExecute because we can't suspend this script
	[
		{!isNull (findDisplay 46)}, // Condition, wait for RscDisplayMission
		{QGVAR(aiCounterLayer) cutRsc [QGVAR(aiCounter), "PLAIN", -1, true]}
	] call CBA_fnc_waitUntilAndExecute;
};
