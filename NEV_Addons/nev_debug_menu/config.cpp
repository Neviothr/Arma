#include "script_component.hpp"

class CfgPatches {
    class nev_debug_menu {
        name = "Mutipurpose Debug Menu";
        author = "Neviothr & jameslkingsley"; // https://github.com/jameslkingsley
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"Extended_EventHandlers"};
        version = 1.6.5;
        versionStr = "1.6.5";
        versionAr[] = {1, 6, 5};
    };
};

// To whitelist users, the existing entry has to be changed to an array entry, this is done by using delete
delete enableDebugConsole;
enableDebugConsole[] = {"76561198141761169"};

#include "CfgSettings.hpp"
#include "CfgNotifications.hpp"
#include "CfgEventHandlers.hpp"
#include "ui\BaseDefines.hpp"
#include "ui\DebugMenu.hpp"
#include "ui\AiCount.hpp"