class CfgPatches {
	class nev_debugMenu {
 		name = "Mutipurpose Debug Menu";
 		author = "Neviothr";
  		units[] = {};
  		weapons[] = {};
  		requiredVersion = 1.0;
		requiredAddons[] = {"Extended_EventHandlers"};
	};
};

#include "base_defines.hpp"
#include "debug_menu.hpp"
#include "CfgNotifications.hpp"

class Extended_PostInit_EventHandlers {
	nev_debugMenu_Post_Init = "nev_debugMenu_Post_Init_Var = [] execVM ""\nev_debugMenu\init.sqf""";
};