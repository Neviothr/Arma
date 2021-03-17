#define COMPONENT brighter_flares

#include "\x\nev\addons\main\script_mod.hpp"

#define DEBUG_MODE_FULL

#include "\x\nev\addons\main\script_macros.hpp"

#define BRIGHTER_FLARE \
    timeToLive = 60; \
    intensity  = 2500000; \
    coefGravity = 0.25; \
    affectedByWind = true;
