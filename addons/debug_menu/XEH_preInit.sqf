#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

addMissionEventHandler ["Loaded", {
    LOG("Loaded EH fired, disabling weather control sliders.");
    GVAR(disableWeatherSliders) = true;
}];

ADDON = true;
