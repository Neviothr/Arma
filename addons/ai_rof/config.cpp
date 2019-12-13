#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "NEV Component - AI ROF";
        author = "Neviothr";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "nev_main"
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
