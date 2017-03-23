#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

[
	"Debug Menu",
	"debug_menu_key",
	"Open debug menu",
	{call FUNC(openDebugMenu)},
	""
] call CBA_fnc_addKeybind;

ADDON = true;