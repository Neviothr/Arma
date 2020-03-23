#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "NEV Component - Sticky Smoke";
        author = "Neviothr";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "nev_main",
            "rhsusf_c_weapons"
        };
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
