#include "script_component.hpp"

GVAR(gameOn) = false; // Needed for CBA_fnc_waitUntilAndExecute's condition in fnc_waveInit.

if (getMissionConfigValue ["safeStartEnabled", 0] == 1) then {
    LOG("Mission cfg value for SafeStart is 1 - enabling");

    GVAR(safeStartPFH) = [
        {call FUNC(safeStartNotification)},
        60
    ] call CBA_fnc_addPerFrameHandler;

    [
        {isNil QGVAR(safeStartPFH)},
        {call FUNC(safeStartEnd)}
    ] call CBA_fnc_waitUntilAndExecute;
};
