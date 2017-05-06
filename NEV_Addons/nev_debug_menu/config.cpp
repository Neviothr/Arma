#include "script_component.hpp"

class CfgPatches {
	class nev_debug_menu {
		name = "Mutipurpose Debug Menu";
		author = "Neviothr";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"Extended_EventHandlers"};
		version = 1.5.1;
		versionStr = "1.5.1";
		versionAr[] = {1, 5, 1};
	};
};

#include "CfgSettings.hpp"
#include "CfgNotifications.hpp"
#include "CfgEventHandlers.hpp"
#include "ui\BaseDefines.hpp"
#include "ui\DebugMenu.hpp"