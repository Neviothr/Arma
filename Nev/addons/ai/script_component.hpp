#define COMPONENT ai

#include "\x\nev\addons\main\script_mod.hpp"
#include "\x\nev\addons\main\script_macros.hpp"

#define ENHANCED_ROCKET \
	airLock = 1; \
	allowAgainstInfantry = 1; \
	aiAmmoUsageFlags = "64 + 128 + 256 + 512"; \
	cost = 1;

#define AI_DISPERSION \
    aiDispersionCoefX = 15; \
    aiDispersionCoefY = 16;

#define MGUN_DISPERSION \
    aiDispersionCoefX = 20; \
    aiDispersionCoefY = 21;

#define NADE_DISPERSION \
    aiDispersionCoefX = 25; \
    aiDispersionCoefY = 26;
