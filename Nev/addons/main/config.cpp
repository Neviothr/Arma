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
			"A3_Data_F_Tank_Loadorder",
			"A3_Data_F_Mod_Loadorder",

			// CBA
			"cba_main",

			// RHS
			"rhsgref_c_airweapons",
			"rhs_c_heavyweapons",
			"rhs_c_weapons",
			"rhsusf_c_heavyweapons",
			"rhs_c_rva",
			"rhsgref_c_weapons",
			"rhsusf_c_weapons",
			"rhs_cti_insurgents",
			"rhsgref_c_troops",
			"rhsusf_c_troops",
			"rhs_c_airweapons",
			"rhsusf_c_airweapons",
			"rhs_servicemenu",
			"rhsusf_c_mrzr",

			// CUP Weapons
			"CUP_Weapons_Ammunition",

			// ACE3
			"ace_interaction",
			"ace_interact_menu",
			"ace_common",
			"ace_main",
			"ace_modules",
			"ace_arsenal"
		};
		VERSION_CONFIG;
	};
};

#include "CfgSettings.hpp"
#include "CfgMods.hpp"
