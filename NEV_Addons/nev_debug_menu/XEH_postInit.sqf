#include "script_component.hpp"
#include "\userconfig\nev_debug_menu\settings.hpp"

if (serverCommandAvailable "#logout" || !(isMultiplayer)) then {
	player addAction ["<t color='#228B25'>Debug Menu</t>", QUOTE(call FUNC(openDebugMenu))];
};