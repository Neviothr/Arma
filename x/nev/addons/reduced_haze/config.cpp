#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "NEV Component - Reduced Haze";
        author = "Neviothr";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"nev_main"};
        VERSION_CONFIG;
    };
};

#include "CfgSettings.hpp"
#include "CfgWorlds.hpp"
