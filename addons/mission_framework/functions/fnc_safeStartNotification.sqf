#include "script_component.hpp"

if (isNil QGVAR(safeStartPFH)) exitWith {};

if (isNil QGVAR(safeStartCounter)) then {
    GVAR(safeStartCounter) = 0;
};

switch (GVAR(safeStartCounter)) do {
    case 0: {
        systemChat "[SafeStart] AI spawning modules on hold, waiting for admin to trigger start (briefing stage started).";
        hint "[SafeStart] AI spawning modules on hold, waiting for admin to trigger start (briefing stage started).";
    };

    case 1: {
        systemChat "[SafeStart] AI spawning modules on hold, waiting for admin to trigger start (1 minute since briefing stage started).";
        hint "[SafeStart] AI spawning modules on hold, waiting for admin to trigger start (1 minute since briefing stage started).";
    };

    default {
        systemChat format ["[SafeStart] AI spawning modules on hold, waiting for admin to trigger start (%1 minutes since briefing stage started).", GVAR(safeStartCounter)];
        hint format ["[SafeStart] AI spawning modules on hold, waiting for admin to trigger start (%1 minutes since briefing stage started).", GVAR(safeStartCounter)];
    };
};

INC(GVAR(safeStartCounter));
