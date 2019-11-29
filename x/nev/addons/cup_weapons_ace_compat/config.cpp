#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "NEV Component - Custom CUP Weapons ACE Compat";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "CUP_Weapons_Ammunition",
			"CUP_Weapons_Put",
			"CUP_Weapons_West_Attachments",
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
			"CUP_Weapons_East_Attachments",
			"CUP_Weapons_CZ805",
			"CUP_Weapons_G36",
			"CUP_Weapons_L85",
			"CUP_Weapons_L129",
			"CUP_Weapons_M14",
			"CUP_Weapons_M14_DMR",
			"CUP_Weapons_M16",
			"CUP_Weapons_SCAR",
			"CUP_Weapons_XM8",
			"CUP_Weapons_GrenadeLaunchers"
        };
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
