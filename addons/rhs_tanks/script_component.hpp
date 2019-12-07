#define COMPONENT rhs_tanks

#include "\x\nev\addons\main\script_mod.hpp"

#include "\x\nev\addons\main\script_macros.hpp"

#define SERVO_SOUND class Turrets: Turrets { \
    class MainTurret: MainTurret { \
        soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner", 0.31622776, 1.0, 30}; \
    }; \
}
