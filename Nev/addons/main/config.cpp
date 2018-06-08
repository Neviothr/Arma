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

			// CBA
			"asdg_jointmuzzles",
			"asdg_jointrails",
			"cba_accessory",
			"cba_ai",
			"cba_arrays",
			"cba_common",
			"cba_diagnostic",
			"cba_ee",
			"cba_events",
			"Extended_EventHandlers",
			"cba_hashes",
			"cba_help",
			"cba_jr",
			"cba_jr_prep",
			"cba_keybinding",
			"cba_main",
			"cba_main_a3",
			"cba_modules",
			"cba_music",
			"cba_network",
			"cba_settings",
			"cba_statemachine",
			"cba_strings",
			"cba_ui",
			"cba_ui_helper",
			"cba_vectors",
			"cba_versioning",
			"cba_xeh",
			"cba_xeh_a3",

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
