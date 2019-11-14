#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "NEV Component - Custom CUP Weapons ACE Compat";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"nev_main"};
        author = "ACE Team, CUP Team";
        VERSION_CONFIG;
        ammo[] = {
            "CUP_TimeBomb_Ammo",
            "CUP_PipeBomb_Ammo",
            "CUP_IED_V1_Ammo"
        };
    };
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
