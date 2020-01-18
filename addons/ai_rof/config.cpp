#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "NEV Component - AI ROF";
        author = "Neviothr";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "nev_main",
            "CUP_Weapons_AA12",
            "CUP_Weapons_AK",
            "CUP_Weapons_Bizon",
            "CUP_Weapons_Bren2",
            "CUP_Weapons_EVO",
            "CUP_Weapons_FNFAL",
            "CUP_Weapons_G3",
            "CUP_Weapons_G36",
            "CUP_Weapons_GROZA",
            "CUP_Weapons_HK416",
            "CUP_Weapons_L85",
            "CUP_Weapons_M14",
            "CUP_Weapons_M14_DMR",
            "CUP_Weapons_M16",
            "CUP_Weapons_M240",
            "CUP_Weapons_M249",
            "CUP_Weapons_M60E4",
            "CUP_Weapons_Mac10",
            "CUP_Weapons_MG3",
            "CUP_Weapons_MicroUzi",
            "CUP_Weapons_Mk48",
            "CUP_Weapons_MP5",
            "CUP_Weapons_MP7",
            "CUP_Weapons_PK",
            "CUP_Weapons_Sa58",
            "CUP_Weapons_SA61",
            "CUP_Weapons_SCAR",
            "CUP_Weapons_Steyr",
            "CUP_Weapons_TEC9",
            "CUP_Weapons_UK59",
            "CUP_Weapons_VSS",
            "CUP_Weapons_X95",
            "CUP_Weapons_XM8",
            "CUP_WaterVehicles_Weapons",
            "CUP_Weapons_VehicleWeapons",
            "CUP_Weapons_DynamicLoadout",
            "rhs_c_heavyweapons",
            "rhs_c_weapons",
            "rhsgref_c_weapons",
            "rhssaf_c_weapons",
            "rhsusf_c_heavyweapons",
            "rhsusf_c_weapons"
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
