#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "NEV Component - RHS Turret Servo Sound";
        author = "Neviothr";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "nev_main",
            "rhs_c_tanks",
            "rhs_c_vehiclesounds",
            "rhsgref_c_vehicles_ret",
            "rhs_c_t72",
            "rhs_c_sprut",
            "rhsusf_c_m1a1",
            "rhsusf_c_m1a2"
        };
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
