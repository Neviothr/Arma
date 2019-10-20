#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = "NEV Component - AI FSM";
		author = "Neviothr";
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"nev_main"};
		VERSION_CONFIG;
	};
};

#include "CfgFSMs.hpp"
#include "CfgSettings.hpp"
#include "CfgVehicles.hpp"
