#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "NEV Component - Main";
        author = "Neviothr";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        // List used ACE modules
        // https://community.bistudio.com/wiki/configSourceAddonList
        requiredAddons[] = {
            "ace_advanced_fatigue",
            "ace_advanced_throwing",
            "ace_ai",
            "ace_aircraft",
            "ace_arsenal",
            "ace_ballistics",
            "ace_common",
            "ace_dragging",
            "ace_explosives",
            "ace_frag",
            "ace_hitreactions",
            "ace_interact_menu",
            "ace_interaction",
            "ace_magazinerepack",
            "ace_main",
            "ace_missionmodules",
            "ace_modules",
            "ace_movement",
            "ace_nightvision",
            "ace_noidle",
            "ace_noradio",
            "ace_norearm",
            "ace_nouniformrestrictions",
            "ace_optionsmenu",
            "ace_overpressure",
            "ace_quickmount",
            "ace_thermals",
            "ace_tracers",
            "ace_ui",
            "ace_weaponselect",
            "ace_zeus"
        };
        VERSION_CONFIG;
    };
};

#include "CfgMods.hpp"
