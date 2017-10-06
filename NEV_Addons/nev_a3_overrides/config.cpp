#include "script_component.hpp"

class CfgPatches {
	class nev_a3_overrides {
		name = "A3 Vanilla Overrides";
		author = "Neviothr";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"asdg_jointmuzzles", "asdg_jointrails", "cba_accessory", "cba_ai", "cba_arrays", "cba_common", "cba_diagnostic", "cba_ee", "cba_events", "Extended_EventHandlers", "cba_hashes", "cba_help", "cba_jr", "cba_jr_prep", "cba_keybinding", "cba_main", "cba_main_a3", "cba_modules", "cba_music", "cba_network", "cba_settings", "cba_statemachine", "cba_strings", "cba_ui", "cba_ui_helper", "cba_vectors", "cba_versioning", "cba_xeh", "cba_xeh_a3"};
		version = 1.4.8;
		versionStr = "1.4.8";
		versionAr[] = {1 ,4, 8};
	};
};

// CBA's versioning system
#include "CfgSettings.hpp"

// Waypoint replacement
#include "CfgEventhandlers.hpp"

// Brighter flares, reduce UGL round bounce
#include "CfgAmmo.hpp"

// Brighter flashlight
#include "CfgWeapons.hpp"

// Less explosive aircrafts
#include "CfgVehicles.hpp"