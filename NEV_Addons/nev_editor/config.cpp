#include "script_component.hpp"

class CfgPatches {
	class nev_editor {
		name = "A3 editor additions";
		author = "Neviothr & Cptnnick"; // https://github.com/cptnnick
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"rhsgref_c_airweapons", "rhs_c_heavyweapons", "rhs_c_weapons", "rhsusf_c_heavyweapons", "rhs_c_troops", "rhsusf_c_airweapons", "rhs_c_rva", "rhsgref_c_weapons", "rhsusf_c_weapons", "rhs_cti_insurgents", "rhsgref_c_troops", "rhsusf_c_troops"};
		version = 0.0.1;
		versionStr = "0.0.1";
		versionAr[] = {0, 0, 1};
	};
};

#include "CfgSettings.hpp"
#include "CfgVehicles.hpp"
#include "Cfg3DEN.hpp"