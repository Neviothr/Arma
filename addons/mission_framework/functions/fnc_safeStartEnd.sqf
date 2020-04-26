#include "script_component.hpp"

/*
 * Author: Neviothr
 * Handle game-on state, enable AI spawning modules and display text.
 *
 * Arguments:
 * 0: None.
 *
 * Return Value:
 * None.
 *
 * Example:
 * call nev_mission_framework_fnc_safeStartEnd;
 *
 * Public: No
*/

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
    15
] call CBA_fnc_waitAndExecute;
