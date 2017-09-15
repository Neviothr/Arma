#include "script_component.hpp"

if ( 													// Add an addAction only if the follow is true
		(serverCommandAvailable "#logout") || 			// If the player is an admin
		(!isMultiplayer) || 							// If gamemode is SP
		(isServer && hasInterface) 						// If player is host on a non-dedicated server
	) then {
	player addAction ["<t color='#228B25'>Debug Menu</t>", "createDialog ""nev_debug_menu"""];

	// Using CBA_fnc_waitUntilAndExecute because we can't suspend this script
	[
		{!isNull (findDisplay 46)}, // Condition, wait for RscDisplayMission
		{
			10 cutRsc ["ai_count", "PLAIN", -1, true]; // Load the display, using layer 10 to aviod issues with mods that use cutRsc (STNVG, etc)
		}
	] call CBA_fnc_waitUntilAndExecute;
};