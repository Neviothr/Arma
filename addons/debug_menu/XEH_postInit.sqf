#include "script_component.hpp"

// Assume that all dead units and vehicle wrecks at mission start are part of the scenario design,
// create a list of these so we can later ignore them when deleting dead units and wrecks during the mission.
GVAR(deadOnStart) = allDead;

if (hasInterface) then {
    player addAction [
        "<t color = '#228B25'>Debug Menu",
        {
            createDialog QGVAR(debugMenuDisplay);

            // Check if the AI counter display is shown, if not - load it.
            if (isNull (uiNamespace getVariable ["nev_ai_counter_aiCounterDisplay", displayNull])) then {
                QGVAR(aiCounterLayer) cutRsc ["nev_ai_counter_aiCounter", "PLAIN", -1, true];
            };
        }
    ];
};
