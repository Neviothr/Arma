#include "script_component.hpp"

if ( 													// Add an addAction only if the follow is true
    	(serverCommandAvailable "#logout") || 			// If the player is an admin
    	(!isMultiplayer) || 							// If gamemode is SP
    	(getPlayerUID player == "76561198141761169") || // If player is mod author
    	(isServer && hasInterface) 						// If player is host on a non-dedicated server
	) then {
	player addAction ["<t color='#228B25'>Debug Menu</t>", "createDialog ""nev_debug_menu"""];
};

_control = findDisplay 46 ctrlCreate ["RscText", -1];
_control ctrlSetPosition [0.967152 * safezoneW + safezoneX, 0.951388 * safezoneH + safezoneY, 0.0352567 * safezoneW, 0.0470196 * safezoneH];
_control ctrlCommit 0;
_control ctrlSetText "AI: 999";

[_control] spawn {
    waitUntil {(_this select 0) ctrlSetText format ["AI: %1", str count (allUnits - allPlayers)]; false};
};