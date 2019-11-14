#define COMPONENT ai_tanks

#include "\x\nev\addons\main\script_mod.hpp"

// #define DISABLE_COMPILE_CACHE

#include "\x\nev\addons\main\script_macros.hpp"

#define ENHANCED_IFV \
    allowAgainstInfantry = 1; \
    aiAmmoUsageFlags = "64 + 128 + 256 + 512"; \
    cost = 1

#define ENHANCED_TANK \
    allowAgainstInfantry = 1; \
    aiAmmoUsageFlags = "64 + 128 + 256 + 512"; \
    cost = 1

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
    }
