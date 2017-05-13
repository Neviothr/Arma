#include "script_component.hpp"

if ( 													// Add an addAction only if the follow is true
    	(serverCommandAvailable "#logout") || 			// If the player is an admin
    	(!isMultiplayer) || 							// If gamemode is SP
    	(getPlayerUID player == "76561198141761169") || // If player is mod author
    	(isServer && hasInterface) 						// If player is host on a non-dedicated server
	) then {
	player addAction ["<t color='#228B25'>Debug Menu</t>", "createDialog ""nev_debug_menu"""];
};