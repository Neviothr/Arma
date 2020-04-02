#include "script_component.hpp"

GVAR(safeStartPFH) = nil;

systemChat format ["%1 ready.", side player];
hint "Weapons are live in 5 seconds.";

[
    {
        ["<t color='#ffffff' size = '.45'>Game on!</t>"] spawn BIS_fnc_dynamicText;
        GVAR(gameOn) = true;
    },
    [],
    5
] call CBA_fnc_waitAndExecute;
