#define COMPONENT enhanced_launchers

#include "\x\nev\addons\main\script_mod.hpp"

// #define DISABLE_COMPILE_CACHE

#include "\x\nev\addons\main\script_macros.hpp"

#define ENHANCED_AI \
    airLock = 1; \
    allowAgainstInfantry = 1; \
    aiAmmoUsageFlags = "64 + 128 + 256 + 512"; \
    cost = 1;

#define ENHANCED_LAUNCHER \
    airLock = 1; \
    allowAgainstInfantry = 1; \
    aiAmmoUsageFlags = "64 + 128 + 256 + 512"; \
    cost = 1; \
    soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 0.85, 500}; \
    whistleDist = 64;
