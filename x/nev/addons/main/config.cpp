#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "NEV Component - Main";
        author = "Neviothr";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            // Vanilla
            "A3_Data_F_Enoch_Loadorder",
            "A3_Data_F_Mod_Loadorder",

            // CBA
            "cba_main",

            // CUP Weapons
            "CUP_Weapons_Ammunition",
            "CUP_Weapons_Put",
            "CUP_Weapons_Javelin",
            "CUP_Weapons_M136",
            "CUP_Weapons_M47",
            "CUP_Weapons_MAAWS",
            "CUP_Weapons_IGLA",
            "CUP_Weapons_SMAW",
            "CUP_Weapons_RPG7",
            "CUP_Weapons_RPG18",
            "CUP_Weapons_NLAW",
            "CUP_Weapons_NVG",
            "CUP_Weapons_Strela_2",
            "CUP_Weapons_VehicleWeapons",

            // ACE3
            "ace_interaction",
            "ace_interact_menu",
            "ace_common",
            "ace_main",
            "ace_modules",
            "ace_arsenal",
            "ace_explosives",

            // RHS
            "rhs_c_weapons",
            "rhs_c_heavyweapons",
            "rhs_c_troops",
            "rhsgref_c_weapons",
            "rhsusf_c_weapons",
            "rhsusf_c_statics",
            "rhsusf_c_troops",

            // CUP Terrain
            "CUP_Afghan_Config",
            "CUP_Bohemia_Config",
            "CUP_Bootcamp_acr_Config",
            "CUP_Chernarus_Config",
            "CUP_Desert2_Config",
            "CUP_Desert_Config",
            "CUP_Desert_e_Config",
            "CUP_Provinggrounds_pmc_Config",
            "CUP_Sara_Config",
            "CUP_Sara_dbe1_Config",
            "CUP_Saralite_Config",
            "CUP_Shapur_baf_Config",
            "CUP_Takistan_Config",
            "CUP_Utes_Config",
            "CUP_Zargabad_Config",
            "CUP_Terrains_Abel",
            "CUP_Terrains_Cain",
            "CUP_Terrains_Eden",
            "CUP_Intro_Config",
            "CUP_Terrains_Noe"
        };
        VERSION_CONFIG;
    };
};

#include "CfgMods.hpp"
#include "CfgSettings.hpp"
