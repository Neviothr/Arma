#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

// Add a keybind that only works if the player is an admin, gamemode is SP, or player is me
// TODO: remove UID check after dedicated WP server is up
[
	"Debug Menu",
	"debug_menu_key",
	"Open debug menu",
	{if (serverCommandAvailable "#logout" || !(isMultiplayer) || getPlayerUID player == "76561198141761169") then {call FUNC(openDebugMenu)};},
	""
] call CBA_fnc_addKeybind;

ADDON = true;