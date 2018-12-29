#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "Nev Component - Custom ACE RHS GREF Compat";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"nev_main"};
        author = "ACE Team, Neviothr";
        VERSION_CONFIG;
    };
};

#include "CfgSettings.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
