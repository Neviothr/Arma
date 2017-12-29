#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = "NEV Component - AI";
		author = "Neviothr";
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"nev_main"};
		VERSION_CONFIG;
	};
};

#include "CfgSettings.hpp"
#include "CfgAmmo.hpp"
#include "CfgAISkill.hpp"
#include "CfgSurfaces.hpp"
#include "CfgWeapons.hpp"
