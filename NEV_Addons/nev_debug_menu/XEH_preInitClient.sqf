#include "script_component.hpp"

#include "XEH_PREP.hpp"

[
	"Debug Menu",
	"debug_menu_key",
	"Open debug menu",
	{
		if (serverCommandAvailable "#logout" || !isMultiplayer || getPlayerUID player == "76561198141761169" && !dialog) then {
			call FUNC(openDebugMenu)
		};
	},
	""
] call CBA_fnc_addKeybind;