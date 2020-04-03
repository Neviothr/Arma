#include "script_component.hpp"

hint "AI modules are live in 5 seconds.";

[
    {
        hint "";
        ["<t color='#ffffff' size = '.45'>Game on!</t>"] spawn BIS_fnc_dynamicText;
        systemChat "[SafeStart] AI modules are live.";
        GVAR(gameOn) = true;
    },
    [],
    5
] call CBA_fnc_waitAndExecute;
