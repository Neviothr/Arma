#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "Mutipurpose Debug Menu";
        author = "Neviothr";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"nev_main"};
        VERSION_CONFIG;
    };
};

delete enableDebugConsole;
enableDebugConsole[] = {"76561198141761169"};

#include "CfgSettings.hpp"
#include "CfgNotifications.hpp"
#include "CfgEventHandlers.hpp"
#include "\x\nev\addons\debug_menu\ui\BaseDefines.hpp"
#include "\x\nev\addons\debug_menu\ui\DebugMenu.hpp"
#include "\x\nev\addons\debug_menu\ui\AiCount.hpp"
