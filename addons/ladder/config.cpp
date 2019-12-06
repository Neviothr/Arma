#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "NEV Component - Ladder";
        author = "Neviothr";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"nev_main"};
        VERSION_CONFIG;
    };
};

#include "CfgMovesBasic.hpp"
#include "CfgAnimation.hpp"
