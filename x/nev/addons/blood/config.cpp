#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "NEV Component - Blood";
        author = "Neviothr";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"nev_main"};
        VERSION_CONFIG;
    };
};

#include "CfgCloudlets.hpp"
#include "CfgEventhandlers.hpp"
#include "CfgSettings.hpp"
#include "ImpactEffectsBlood.hpp"
