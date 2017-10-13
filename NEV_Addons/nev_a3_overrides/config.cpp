#include "script_component.hpp"

class CfgPatches {
	class nev_a3_overrides {
		name = "A3 Vanilla Overrides";
		author = "Neviothr";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"asdg_jointmuzzles", "asdg_jointrails", "cba_accessory", "cba_ai", "cba_arrays", "cba_common", "cba_diagnostic", "cba_ee", "cba_events", "Extended_EventHandlers", "cba_hashes", "cba_help", "cba_jr", "cba_jr_prep", "cba_keybinding", "cba_main", "cba_main_a3", "cba_modules", "cba_music", "cba_network", "cba_settings", "cba_statemachine", "cba_strings", "cba_ui", "cba_ui_helper", "cba_vectors", "cba_versioning", "cba_xeh", "cba_xeh_a3", "A3_Data_F", "A3_Weapons_F", "A3_sounds_f", "A3_Characters_F"};
		version = 1.4.9;
		versionStr = "1.4.9";
		versionAr[] = {1 ,4, 9};
	};
};

#include "CfgSettings.hpp"
#include "CfgEventhandlers.hpp"
#include "CfgAmmo.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"