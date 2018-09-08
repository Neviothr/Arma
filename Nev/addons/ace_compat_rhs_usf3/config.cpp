#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "Nev Component - Custom ACE RHS USF Compact";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "rhsusf_c_weapons",
            "rhsusf_c_troops",
            "rhsusf_c_m1a1",
            "rhsusf_c_m1a2",
            "RHS_US_A2_AirImport",
            "rhsusf_c_m109",
            "rhsusf_c_HEMTT_A4",
            "rhsusf_c_hmmwv",
            "rhsusf_c_rg33",
            "rhsusf_c_fmtv",
            "rhsusf_c_m113",
            "RHS_US_A2Port_Armor",
            "rhsusf_c_melb"
        };
        author = "ACE Team, Neviothr";
        VERSION_CONFIG;
    };
};

#include "CfgSettings.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
