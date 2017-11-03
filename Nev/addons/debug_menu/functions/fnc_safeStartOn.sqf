#include "script_component.hpp"

// Make sure the block is ran on an actual unit, not the server or a HC
if (hasInterface) then {
	GVAR(isSafeStart) = true; // Declare a var that is used as a loop condition
	publicVariable QGVAR(isSafeStart);

	// TODO: use `forspec` loop?
	private _safeStartLoop = 1; // Declare a private var which indicates the current loop / minutes since SafeStart was enabled

	// Add a `fired` EH which deletes the projectile upon firing
	GVAR(ssDelManProj) = player addEventHandler ["Fired", {deleteVehicle (_this select 6);}];

	// Check if unit is in a vehicle, if so - apply above EH to vehicle
	if (vehicle player != player && {player in [gunner vehicle player, driver vehicle player, commander vehicle player]}) then {
		GVAR(ssDelVehProj) = [(vehicle player), (vehicle player) addEventHandler ["Fired", {deleteVehicle (_this select 6);}]];
	};

	// Disable unit / vehicle damage
	vehicle player allowDamage false;

	// SafeStart loop
	while {GVAR(isSafeStart)} do {
		// Needed so the loop doesn't return `hint` and `systemChat` messages as soon as SafeStart is enabled
		uiSleep 60;

		 // Last check before `hint` and `systemChat` messages, here in case SafeStart is disabled during the `uiSleep` timer
		if !(GVAR(isSafeStart)) exitWith {};

		// Formatted `hint` and `systemChat` messages telling the players how many minutes have passed since briefing stage was started
		hint format ["Weapons are cold, wait for admin to trigger start. (%1 minute(s) since briefing stage started)", _safeStartLoop];
		systemChat format ["[SafeStart] Weapons are cold, wait for admin to trigger start. (%1 minute(s) since briefing stage started)", _safeStartLoop];

		// Increment loop by 1
		// TODO: use `forspec` loop?
		INC(_safeStartLoop);
	};
};
