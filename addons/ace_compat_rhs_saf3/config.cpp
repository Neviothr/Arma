#include "script_component.hpp"

// Commit cf732c1
class CfgPatches {
    class ADDON {
        name = "NEV Component - Custom ACE RHS USF Compat";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "nev_main",
            "rhsusf_c_weapons",
            "rhsusf_c_heavyweapons",
            "rhsusf_c_statics",
            "rhsusf_c_troops"
        };
        author = "ACE Team";
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
