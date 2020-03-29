#include "script_component.hpp"

#include "XEH_PREP.hpp"

// Keybind
[
    "Debug Menu",
    "debug_menu_key",
    "Open debug menu",
    {
        if (hasInterface && !dialog) then {
            createDialog QGVAR(debugMenuDisplay);
        };

        // Check if the AI counter display is shown, if not - load it
        if (isNull (uiNamespace getVariable ["nev_ai_counter_aiCounterDisplay", displayNull])) then {
            QGVAR(aiCounterLayer) cutRsc ["nev_ai_counter_aiCounter", "PLAIN", -1, true];
            LOG("AI Counter display not found. Creating...");
        };
    },
    ""
] call CBA_fnc_addKeybind;

#include "initSettings.sqf"
