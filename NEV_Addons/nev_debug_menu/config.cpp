#include "script_component.hpp"

class CfgPatches {
    class nev_debug_menu {
        name = "Mutipurpose Debug Menu";
        author = "Neviothr & jameslkingsley"; // https://github.com/jameslkingsley
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"asdg_jointmuzzles", "asdg_jointrails", "cba_accessory", "cba_ai", "cba_arrays", "cba_common", "cba_diagnostic", "cba_ee", "cba_events", "Extended_EventHandlers", "cba_hashes", "cba_help", "cba_jr", "cba_jr_prep", "cba_keybinding", "cba_main", "cba_main_a3", "cba_modules", "cba_music", "cba_network", "cba_settings", "cba_statemachine", "cba_strings", "cba_ui", "cba_ui_helper", "cba_vectors", "cba_versioning", "cba_xeh", "cba_xeh_a3"};
        version = 1.6.6;
        versionStr = "1.6.6";
        versionAr[] = {1, 6, 6};
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