#include "script_component.hpp"

class CfgPatches {
	class nev_ai {
		name = "A3 AI overrides";
		author = "Neviothr";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"rhsgref_c_airweapons", "rhs_c_heavyweapons", "rhs_c_weapons", "rhsusf_c_heavyweapons", "rhs_c_troops", "rhsusf_c_airweapons", "rhs_c_rva", "rhsgref_c_weapons", "rhsusf_c_weapons", "rhs_cti_insurgents", "rhsgref_c_troops", "rhsusf_c_troops"};
		version = 0.0.1;
		versionStr = "0.0.1";
		versionAr[] = {0, 0, 1};
	};
};

// CBA's versioning system
#include "CfgSettings.hpp"

// Allow AI to use launchers on anything
#include "CfgAmmo.hpp"

// Modified AI skills
#include "CfgAISkill.hpp"