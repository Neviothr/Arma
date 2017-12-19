// https://github.com/Cyruz143/ark_inhouse/blob/c4dbf8d547e6d4bc5d4062157c452b34a10938e5/ark_ai_dispersion/CfgWeapons.hpp
class CfgWeapons {
    class Default;
    class RifleCore;
    class Launcher;
    class GrenadeLauncher: Default {
        aiDispersionCoefX = 15;
        aiDispersionCoefY = 16;
    };

    class Throw: GrenadeLauncher {
        class ThrowMuzzle: GrenadeLauncher {
            aiDispersionCoefX = 15;
            aiDispersionCoefY = 16;
        };
    };

    class Rifle: RifleCore {
        aiDispersionCoefX = 15;
        aiDispersionCoefY = 16;
    };

    class Launcher_Base_F: Launcher {
        aiDispersionCoefX = 15;
        aiDispersionCoefY = 16;
    };
};
