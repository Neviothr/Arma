#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = "NEV Component - AI Dispersion";
		author = "Neviothr";
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"nev_main"};
		VERSION_CONFIG;
	};
};

#include "CfgBrains.hpp"
#include "CfgSettings.hpp"
