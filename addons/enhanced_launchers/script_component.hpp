#define COMPONENT enhanced_launchers

#include "\x\nev\addons\main\script_mod.hpp"

#define DEBUG_MODE_FULL

#include "\x\nev\addons\main\script_macros.hpp"

#define ENHANCED_LAUNCHER_AMMO \
    airLock = 1; \
    allowAgainstInfantry = 1; \
    aiAmmoUsageFlags = "64 + 128 + 256 + 512"; \
    cost = 0.1; \
    soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 0.85, 500}; \
    whistleDist = 64
