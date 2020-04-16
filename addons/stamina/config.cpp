#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "NEV Component - Stamina";
        author = "Neviothr";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "nev_main",
            "cba_cache_disable"
        };
        VERSION_CONFIG;
    };
};

#include "CfgEventhandlers.hpp"
