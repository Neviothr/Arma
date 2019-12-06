#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "NEV Component - AI Counter";
        author = "Neviothr";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"nev_main"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "\x\nev\addons\main\ui\BaseDefines.hpp"
#include "\x\nev\addons\ai_counter\ui\AiCounter.hpp"
