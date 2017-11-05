#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = "A3 Vanilla Overrides";
		author = "Neviothr";
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"nev_main"};
		VERSION_CONFIG;
	};
};

#include "CfgSettings.hpp"
#include "CfgEventhandlers.hpp"
#include "CfgAmmo.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgFontFamilies.hpp"
