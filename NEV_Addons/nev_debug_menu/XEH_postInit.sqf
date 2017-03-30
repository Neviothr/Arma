#include "script_component.hpp"

if (isFilePatchingEnabled) then {
	_fileCheck = "\userconfig\nev_debug_menu\settings.hpp" call FUNC(fileExists);

	if (_FileCheck) then {
		call compile preprocessFile "\userconfig\nev_debug_menu\settings.hpp" // User defined settings
	} else {
		call compile preprocessFile "\@NEV_Addons\settings.hpp" // Default settings if settings.hpp is not found
	};
} else {
	call compile preprocessFile "\@NEV_Addons\settings.hpp" // Default settings if filePatching is disabled
};

if (serverCommandAvailable "#logout" || !(isMultiplayer) || getPlayerUID player == "76561198141761169") then {
	player addAction ["<t color='#228B25'>Debug Menu</t>", QUOTE(call FUNC(openDebugMenu))];
};