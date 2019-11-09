#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "NEV Component - Difficulty";
        author = "Neviothr";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"nev_main"};
        VERSION_CONFIG;
    };
};

#include "CfgSettings.hpp"
#include "CfgSurfaces.hpp"
