#define COMPONENT ai_rof

#include "\x\nev\addons\main\script_mod.hpp"

#define DEBUG_MODE_FULL

#include "\x\nev\addons\main\script_macros.hpp"

#define AI_ROF(baseMode) \
        class baseMode; \
        class NEV_FullAuto: baseMode { \
            aiRateOfFire = 0.5; \
            aiRateOfFireDistance = 50; \
            minRange = 0; \
            minRangeProbab = 1; \
            midRange = 500; \
            midRangeProbab = 1; \
            maxRange = 1000; \
            maxRangeProbab = 1; \
            burst = 3; \
            burstRangeMax = 5; \
            showToPlayer = 0; \
            aiRateOfFireDispersion = 0; \
            aiBurstTerminable = false; \
            aiDispersionCoefX = 75.0; \
            aiDispersionCoefY = 75.0; \
        }; \
        aiDispersionCoefX = 75.0; \
        aiDispersionCoefY = 75.0

#define AI_DISPERSION \
    aiDispersionCoefX = 75.0; \
    aiDispersionCoefY = 75.0

#define AI_VEHICLE_DISPERSION \
    aiDispersionCoefX = 75.0; \
    aiDispersionCoefY = 75.0
