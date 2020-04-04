#include "script_component.hpp"

// Commit b4ac330
class CfgPatches {
    class ADDON {
        name = "NEV Component - Custom ACE RHS AFRF Compat";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "nev_main",
            "rhs_c_weapons",
            "rhs_c_heavyweapons",
            "rhs_c_troops"
        };
        author = "ACE Team";
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgWeapons.hpp"
