#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "NEV Component - Custom ACE RHS AFRF Compat";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"nev_main"};
        author = "ACE Team, Neviothr";
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgSettings.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
