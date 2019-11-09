#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "NEV Component - Sticky RHS Smoke";
        author = "Neviothr";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"nev_main"};
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgSettings.hpp"
