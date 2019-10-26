#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = "NEV Component - Reload";
		author = "Neviothr";
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"nev_main"};
		VERSION_CONFIG;
	};
};

#include "CfgActions.hpp"
#include "CfgSettings.hpp"
