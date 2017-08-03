#include "script_component.hpp"

params ["_display"];

_control = _display displayCtrl 81001;

// AI count loop
[_control] spawn { // Passing _control as array because we can't serialize _control (or something)
	// Basically, this waitUntil is 2 parts, sperated by a semi-colon
	// (There can be any number of statements in waitUntil)
	// The 1st part is the actual code we need to run
	// 2nd part is there to report false to the waitUntil, which expect true
	// Because of the above, the waitUntil block runs again on the next frame, updating our AI count, and returning false
	// The last statement of a block is it's return
	waitUntil {(_this select 0) ctrlSetText format ["AI %1", str count (allUnits - allPlayers)]; false};
};