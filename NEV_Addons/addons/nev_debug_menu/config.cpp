#include "script_component.hpp"

class CfgPatches {
    class nev_debug_menu {
        name = "Mutipurpose Debug Menu";
        author = "Neviothr & jameslkingsley"; // https://github.com/jameslkingsley
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"nev_main"};
        version = 1.6.7;
        versionStr = "1.6.7";
        versionAr[] = {1, 6, 7};
    };
};

#include "CfgSettings.hpp"
#include "CfgNotifications.hpp"
#include "CfgEventHandlers.hpp"
#include "\x\nev_addons\addons\nev_debug_menu\ui\BaseDefines.hpp"
#include "\x\nev_addons\addons\nev_debug_menu\ui\DebugMenu.hpp"
#include "\x\nev_addons\addons\nev_debug_menu\ui\AiCount.hpp"