#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

["Debug Menu", QGVAR(debugMenuDisplay)] call CBA_fnc_addPauseMenuOption;

ADDON = true;
