#include "script_component.hpp"

class CfgPatches {
	class nev_debug_menu {
 		name = "Mutipurpose Debug Menu";
 		author = "Neviothr";
  		units[] = {};
  		weapons[] = {};
  		requiredVersion = 1.0;
		requiredAddons[] = {"Extended_EventHandlers"};
	};
};

#include "CfgNotifications.hpp"
#include "CfgEventHandlers.hpp"
#include "ui\BaseDefines.hpp"
#include "ui\DebugMenu.hpp"