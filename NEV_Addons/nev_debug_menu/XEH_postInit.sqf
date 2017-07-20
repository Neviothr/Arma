#include "script_component.hpp"

if ( 													// Add an addAction only if the follow is true
		(serverCommandAvailable "#logout") || 			// If the player is an admin
		(!isMultiplayer) || 							// If gamemode is SP
		(getPlayerUID player == "76561198141761169") || // If player is mod author
		(isServer && hasInterface) 						// If player is host on a non-dedicated server
	) then {
	player addAction ["<t color='#228B25'>Debug Menu</t>", "createDialog ""nev_debug_menu"""];
};

// Using CBA_fnc_waitUntilAndExecute because we can't suspend this script
[
	{!isNull (findDisplay 46)}, // Condition, wait for RscDisplayMission
	{
		// Doing this with a script instead of a config because it's easier
		// Create display
		_control = findDisplay 46 ctrlCreate ["RscText", -1];

		// Set it's pos
		_control ctrlSetPosition [0.967152 * safezoneW + safezoneX, 0.951388 * safezoneH + safezoneY, 0.0352567 * safezoneW, 0.0470196 * safezoneH];
		_control ctrlCommit 0; // Controls animation, 0 will move display to above pos right away

		// AI count loop
		[_control] spawn { // Passing _control as array because we can't serialize _control (or something)
			// Basically, this waitUntil is 2 parts, sperated by a semi-colon
			// (There can be any number of statements in waitUntil)
			// The 1st part is the actual code we need to run
			// 2nd part is there to report false to the waitUntil, which expect true
			// Because of the above, the waitUntil block runs again on the next frame, updating our AI count, and returning false
			// The last statement of a block is it's return
			waitUntil {(_this select 0) ctrlSetText format ["AI: %1", str count (allUnits - allPlayers)]; false};
		};
	}
] call CBA_fnc_waitUntilAndExecute;