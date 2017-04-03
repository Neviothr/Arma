#include "script_component.hpp"

// Settings.hpp existance & fallback
if (isFilePatchingEnabled) then {
	_fileCheck = "\userconfig\nev_debug_menu\settings.hpp" call FUNC(fileExists); // If filePatch is enabled check if settings.hpp exist

	if (_FileCheck) then {
		// If it does, use the user defined settings
		call compile preprocessFile "\userconfig\nev_debug_menu\settings.hpp";
	} else {
		// If not found, use default settings
		call compile preprocessFile "\@NEV_Addons\settings.hpp";
	};
} else {
	// If filePatching is disabled - use default settings
	call compile preprocessFile "\@NEV_Addons\settings.hpp";
};

// Add an `addAction` if player is admin, if gamemode is SP, or if it's me
// TODO: remove UID check after dedicated WP server is up
if (serverCommandAvailable "#logout" || !(isMultiplayer)) then {
	player addAction ["<t color='#228B25'>Debug Menu</t>", QUOTE(call FUNC(openDebugMenu))];
};