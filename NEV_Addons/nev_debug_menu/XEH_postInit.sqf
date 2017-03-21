#include "script_component.hpp"
#include "\userconfig\nev_debug_menu\settings.hpp"

if (serverCommandAvailable "#logout" || !(isMultiplayer) || (getPlayerUID player == "76561198141761169")) then {
	player addAction ["<t color='#228B25'>Debug Menu</t>", "call fnc_openDebugMenu"];
};