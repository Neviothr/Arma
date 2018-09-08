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

#include "CfgSettings.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
