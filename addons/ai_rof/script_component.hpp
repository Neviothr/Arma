#define COMPONENT ai_rof

#include "\x\nev\addons\main\script_mod.hpp"

#include "\x\nev\addons\main\script_macros.hpp"

# define AI_ROF(baseMode) \
        class baseMode; \
        class NEV_FullAuto: ##baseMode { \
            aiRateOfFire = 0.1; \
            aiRateOfFireDistance = 5000; \
            minRange = 0; \
            minRangeProbab = 1; \
            midRange = 500; \
            midRangeProbab = 1; \
            maxRange = 1000; \
            maxRangeProbab = 1; \
            burst = 5; \
            burstRangeMax = 10; \
            showToPlayer = 0; \
            aiDispersionCoefX = 30.0; \
            aiDispersionCoefY = 30.0; \
            aiRateOfFireDispersion = 5; \
            aiBurstTerminable = false; \
            dispersion = 0.004; \
        }

# define AI_VEHICLE_ROF(baseMode) \
        class baseMode; \
        class NEV_FullAuto: ##baseMode { \
            aiRateOfFire = 0.1; \
            aiRateOfFireDistance = 5000; \
            minRange = 0; \
            minRangeProbab = 1; \
            midRange = 500; \
            midRangeProbab = 1; \
            maxRange = 1000; \
            maxRangeProbab = 1; \
            burst = 25; \
            burstRangeMax = 50; \
            showToPlayer = 0; \
            aiRateOfFireDispersion = 5; \
            aiBurstTerminable = false; \
            dispersion = 0.016; \
        }; \
        aiDispersionCoefX = 50.0; \
        aiDispersionCoefY = 50.0
