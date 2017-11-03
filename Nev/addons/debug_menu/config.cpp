#include "script_component.hpp"

class CfgPatches {
    class debug_menu {
        name = "Mutipurpose Debug Menu";
        author = "Neviothr";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"main"};
        version = 1.6.7;
        versionStr = "1.6.7";
        versionAr[] = {1, 6, 7};
    };
};

#include "CfgSettings.hpp"
#include "CfgNotifications.hpp"
#include "CfgEventHandlers.hpp"
#include "\x\nev\addons\debug_menu\ui\BaseDefines.hpp"
#include "\x\nev\addons\debug_menu\ui\DebugMenu.hpp"
#include "\x\nev\addons\debug_menu\ui\AiCount.hpp"
