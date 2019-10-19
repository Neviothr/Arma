#include "script_component.hpp"

enableCamShake true;

{
    [
        _x,
        "Killed",
        {call FUNC(explosionShake)}
    ] call CBA_fnc_addClassEventHandler
} forEach ["Car", "Tank"];
