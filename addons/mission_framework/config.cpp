#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "NEV Component - Mission Framework";
        author = "Neviothr";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"nev_main"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgNotifications.hpp"
#include "CfgVehicles.hpp"
