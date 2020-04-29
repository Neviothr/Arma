#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "NEV Component - 3den Compositions";
        author = "Neviothr";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"nev_main"};
        VERSION_CONFIG;
    };
};

#include "CfgGroups.hpp"
