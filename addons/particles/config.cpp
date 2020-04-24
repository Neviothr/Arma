#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "NEV Component - Particles";
        author = "Neviothr";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"nev_main"};
        VERSION_CONFIG;
    };
};

#include "CfgCloudlets.hpp"
