#include "script_component.hpp"

hint "AI modules are live in 5 seconds.";

[
    {
        hint "";
        titleText ["Game on!", "PLAIN"];
        systemChat "[SafeStart] AI modules are live.";
        GVAR(gameOn) = true;
    },
    [],
    5
] call CBA_fnc_waitAndExecute;

[
    {call FUNC(dynamicGameOnText)},
    [],
    10
] call CBA_fnc_waitAndExecute;
