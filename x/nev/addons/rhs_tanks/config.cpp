#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "NEV Component - RHS Turret Servo Sound";
        author = "Neviothr";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"nev_main"};
        VERSION_CONFIG;
    };
};

#include "CfgSoundShaders.hpp"
#include "CfgVehicles.hpp"
