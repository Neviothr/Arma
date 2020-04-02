#include "script_component.hpp"

if (getMissionConfigValue ["safeStartEnabled", 0] == 1) then {
    LOG("Mission cfg value for SafeStart is 1! Enabling...");

    GVAR(safeStartPFH) = [
        {call FUNC(safeStartNotification)},
        60
    ] call CBA_fnc_addPerFrameHandler;

    [
        {isNil QGVAR(safeStartPFH)},
        {call FUNC(safeStartEnd)}
    ] call CBA_fnc_waitUntilAndExecute;
};
