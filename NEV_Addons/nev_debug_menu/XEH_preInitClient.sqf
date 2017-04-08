#include "script_component.hpp"

#include "XEH_PREP.hpp"

[
	"Debug Menu",
	"debug_menu_key",
	"Open debug menu",
	{if (serverCommandAvailable "#logout" || !isMultiplayer && !dialog) then {call FUNC(openDebugMenu)};},
	""
] call CBA_fnc_addKeybind;