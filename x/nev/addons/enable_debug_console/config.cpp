#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "NEV Component - Enable Debug Console";
        author = "Neviothr";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"nev_main"};
        VERSION_CONFIG;
    };
};

enableDebugConsole = 2;
enableTargetDebug = 1;

#include "CfgSettings.hpp"
