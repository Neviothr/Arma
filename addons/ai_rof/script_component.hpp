#define COMPONENT ai_rof

#include "\x\nev\addons\main\script_mod.hpp"

#include "\x\nev\addons\main\script_macros.hpp"

# define AI_ROF(baseMode) \
        class baseMode; \
        modes[] += {"NEV_FullAuto"}; \
        class NEV_FullAuto: ##baseMode { \
            aiRateOfFire = 0.1; \
            aiRateOfFireDistance = 5000; \
            minRange = 0; \
            minRangeProbab = 1; \
            midRange = 500; \
            midRangeProbab = 1; \
            maxRange = 1000; \
            maxRangeProbab = 1; \
            burst = 10; \
            burstRangeMax = 15; \
            showToPlayer = false; \
            aiDispersionCoefX = 20.0; \
            aiDispersionCoefY = 20.0 ;\
            aiRateOfFireDispersion = 1; \
        }
