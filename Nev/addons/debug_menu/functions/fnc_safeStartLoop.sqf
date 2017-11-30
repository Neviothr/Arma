#include "script_component.hpp"

// Run the loop only on the server
if (!isServer) exitWith {};

// Redundant sleep to give everything a second to settle
sleep 2;

GVAR(safeStartLoop) = 1;
publicVariable QGVAR(safeStartLoop);
"SafeStart has been enabled by admin!" remoteExec ["hint", [0, -2] select isMultiplayer];

while {GVAR(isSafeStart)} do {
	// If safeStart has been terminated by admin, simply exit
	if (!GVAR(isSafeStart)) exitWith {};
	uisleep 60;
	if (!GVAR(isSafeStart)) exitWith {};

	// Formatted messages telling the players how many minutes have passed since briefing stage was started
	format ["Weapons are cold, wait for admin to trigger start. (%1 minute%2 since briefing stage started)", GVAR(safeStartLoop), ["", "s"] select (GVAR(safeStartLoop) > 1)] remoteExec ["hint", [0, -2] select isMultiplayer];
	format ["[SafeStart] Weapons are cold, wait for admin to trigger start. (%1 minute%2 since briefing stage started)", GVAR(safeStartLoop), ["", "s"] select (GVAR(safeStartLoop) > 1)] remoteExec ["systemChat", [0, -2] select isMultiplayer];

	// Increase the timer by one
	GVAR(safeStartLoop) = GVAR(safeStartLoop) + 1;
	publicVariable QGVAR(safeStartLoop);
};

// Once safeStart has been terminated by admin, disable the safeties
if (!GVAR(isSafeStart)) then {
	// Broadcast message to players
	"Weapons are live in 5 seconds." remoteExec ["hint", [0, -2] select isMultiplayer];
	uisleep 5;
	[["Game on!", "PLAIN"]] remoteExec ["titleText", [0, -2] select isMultiplayer];

	// Remotely execute script to disable safety for all selectable units
	[false] remoteExec [QFUNC(safety), playableUnits + switchableUnits];

	uisleep 30;

	[] remoteExec [QFUNC(missionInfo), [0, -2] select isMultiplayer];
};
