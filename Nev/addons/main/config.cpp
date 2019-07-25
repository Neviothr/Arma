#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = "NEV Component - Main";
		author = "Neviothr";
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = { // TODO - add RHS requred addons entries
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
			"rhsusf_c_troops"
		};
		VERSION_CONFIG;
	};
};

#include "CfgSettings.hpp"
#include "CfgMods.hpp"
