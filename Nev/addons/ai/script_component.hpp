#define COMPONENT ai

#include "\x\nev\addons\main\script_mod.hpp"
#include "\x\nev\addons\main\script_macros.hpp"

// Macro by jameslkingsley
// https://github.com/ARCOMM/ARC_AI/blob/master/addons/arc_ai_client_launchers/macros.hpp
#define PROTO(CNAME) \
    class ##CNAME##

#define LAUNCHER(CNAME, PNAME) \
    class ##CNAME##: ##PNAME## { \
        airLock = 1; \
        allowAgainstInfantry = 1; \
        aiAmmoUsageFlags = "64 + 128 + 256 + 512"; \
        soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 6, 0.85, 500}; \
        whistleDist = 32; \
        cost = 1; \
    }
