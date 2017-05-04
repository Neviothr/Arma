#include "script_component.hpp"

// Add an `addAction` if admin or if SP
if (serverCommandAvailable "#logout" || !isMultiplayer || getPlayerUID player == "76561198141761169") then {
	player addAction ["<t color='#228B25'>Debug Menu</t>", QUOTE(call FUNC(openDebugMenu))];
};