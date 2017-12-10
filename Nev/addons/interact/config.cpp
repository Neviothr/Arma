#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "Nev Interact";
        author = "Neviothr";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"nev_main"};
        VERSION_CONFIG;
    };
};

#include "CfgEventhandlers.hpp"
#include "CfgSettings.hpp"
#include "CfgVehicles.hpp"
