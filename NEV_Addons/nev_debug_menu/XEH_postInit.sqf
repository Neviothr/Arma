#include "script_component.hpp"

// Add an `addAction`
// Only if - player is an admin, game is in SP, player is Neviothr, player is host on a non-dedicated server
if (((serverCommandAvailable "#logout") || (!isMultiplayer) || (getPlayerUID player == "76561198141761169") || (isServer && hasInterface)) && !dialog) then {
	player addAction ["<t color='#228B25'>Debug Menu</t>", QUOTE(call FUNC(openDebugMenu))];
};