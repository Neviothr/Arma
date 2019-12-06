#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

["Debug Menu", QGVAR(debugMenuDisplay)] call CBA_fnc_addPauseMenuOption;

ADDON = true;
