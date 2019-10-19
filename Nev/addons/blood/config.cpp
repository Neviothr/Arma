#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = "NEV Component - Blood";
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
#include "CfgCloudlets.hpp"
#include "ImpactEffectsBlood.hpp"
