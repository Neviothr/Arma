#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "Nev Component - Custom ACE RHS GREF Compact";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "rhsgref_main",
            "rhsgref_c_weapons"
        };
        author = "ACE Team, Neviothr";
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgWeapons.hpp"
