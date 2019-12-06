class CfgAmmo {
    class Grenade;
    class GrenadeHand: Grenade {};
    class SmokeShell: GrenadeHand {
        SMOKE_CONFIG;
        deflecting = 0;
    };

    class rhs_40mm_smoke_white: SmokeShell {
        SMOKE_CONFIG;
    };

    class SmokeShellRed;
    class rhs_40mm_smoke_red: SmokeShellRed {
        SMOKE_CONFIG;
    };

    class SmokeShellGreen;
    class rhs_40mm_smoke_green: SmokeShellGreen {
        SMOKE_CONFIG;
    };

    class SmokeShellYellow;
    class rhs_40mm_smoke_yellow: SmokeShellYellow {
        SMOKE_CONFIG;
    };

    class rhs_g_vog25;
    class rhs_g_vg40md_white: rhs_g_vog25 {
        SMOKE_CONFIG;
        deflecting = 0;
    };
};
