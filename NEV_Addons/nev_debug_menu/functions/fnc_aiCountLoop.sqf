#include "script_component.hpp"

params ["_display"];

_control = _display displayCtrl 81001;

// AI count loop
[_control] spawn { // Passing _control as array because we can't serialize _control
	// There can be any number of statements in waitUntil
	// The 1st part is the actual code we need to run
	// 2nd part is there to report false to the waitUntil, which expects true
	waitUntil {(_this select 0) ctrlSetText format ["AI %1", str count (allUnits - allPlayers)]; false};
};