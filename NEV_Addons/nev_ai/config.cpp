#include "script_component.hpp"

class CfgPatches {
	class nev_ai {
		name = "A3 AI overrides";
		author = "Neviothr & Jameslkingsley"; // https://github.com/jameslkingsley
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"asdg_jointmuzzles", "asdg_jointrails", "cba_accessory", "cba_ai", "cba_arrays", "cba_common", "cba_diagnostic", "cba_ee", "cba_events", "Extended_EventHandlers", "cba_hashes", "cba_help", "cba_jr", "cba_jr_prep", "cba_keybinding", "cba_main", "cba_main_a3", "cba_modules", "cba_music", "cba_network", "cba_settings", "cba_statemachine", "cba_strings", "cba_ui", "cba_ui_helper", "cba_vectors", "cba_versioning", "cba_xeh", "cba_xeh_a3", "rhsgref_c_airweapons", "rhs_c_heavyweapons", "rhs_c_weapons", "rhsusf_c_heavyweapons", "rhs_c_rva", "rhsgref_c_weapons", "rhsusf_c_weapons", "rhs_cti_insurgents", "rhsgref_c_troops", "rhsusf_c_troops", "rhs_c_airweapons", "rhsusf_c_airweapons", "rhs_servicemenu"};
		version = 0.0.5;
		versionStr = "0.0.5";
		versionAr[] = {0, 0, 5};
	};
};

#include "CfgSettings.hpp"
#include "CfgAmmo.hpp"
#include "CfgAISkill.hpp"
#include "CfgSurfaces.hpp"