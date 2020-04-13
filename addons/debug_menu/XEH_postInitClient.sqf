#include "script_component.hpp"

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
