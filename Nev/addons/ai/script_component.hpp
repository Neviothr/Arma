#define COMPONENT ai

#include "\x\nev\addons\main\script_mod.hpp"
#include "\x\nev\addons\main\script_macros.hpp"

#define RIFLE_DISPERSION \
    aiDispersionCoefX = 15; \
    aiDispersionCoefY = 16;

#define MGUN_DISPERSION \
    aiDispersionCoefX = 20; \
    aiDispersionCoefY = 21;

#define NADE_DISPERSION \
    aiDispersionCoefX = 25; \
    aiDispersionCoefY = 26;

#define ENHANCED_IFV \
    allowAgainstInfantry = 1; \
    aiAmmoUsageFlags = "64 + 128 + 256 + 512"; \
    cost = 5;

#define ENHANCED_TANK \
    allowAgainstInfantry = 1; \
    aiAmmoUsageFlags = "64 + 128 + 256 + 512"; \
    cost = 3;

#define ENHANCED_MODES \
    class player; \
    class close: player { \
        minRangeProbab = 0.85; \
    }; \
    class short: close { \
        minRangeProbab = 0.85; \
    }; \
    class medium: close { \
        minRangeProbab = 0.85; \
    };

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
    whistleDist = 32;
