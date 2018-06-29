// https://github.com/Cyruz143/ark_inhouse/blob/b518abcd442a589f789d4c1272aeea486224be80/addons/ark_ai_dispersion/CfgWeapons.hpp
class CfgWeapons {
    class Default;
    class RifleCore;
    class Launcher;
    class Rifle: RifleCore {
        AI_DISPERSION
    };
    class Launcher_Base_F: Launcher {
        AI_DISPERSION
    };
    class MGunCore: Default {
        MGUN_DISPERSION
    };
    class GrenadeLauncher: Default {
        NADE_DISPERSION
    };
    class Throw: GrenadeLauncher {
        class ThrowMuzzle: GrenadeLauncher {
            NADE_DISPERSION
        };
    };
};
