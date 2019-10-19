class CfgAmmo {
    class BulletBase;
    class ShellBase;

    class B_19mm_HE: BulletBase {
        ENHANCED_IFV
    };

    class B_20mm: BulletBase {
        ENHANCED_IFV
    };

    class B_20mm_AP: BulletBase {
        ENHANCED_IFV
    };

    class B_25mm: BulletBase {
        ENHANCED_IFV
    };

    class B_30mm_AP: BulletBase {
        ENHANCED_IFV
    };

    class B_30mm_APFSDS: B_30mm_AP {
        ENHANCED_IFV
    };

    class B_40mm_APFSDS: B_30mm_APFSDS {
        ENHANCED_IFV
    };

    class Sh_120mm_HE: ShellBase {
        ENHANCED_TANK
    };

    class Sh_120mm_APFSDS: ShellBase {
        ENHANCED_TANK
    };

    class Sh_125mm_HE;
    class Sh_125mm_HEAT: Sh_125mm_HE {
        ENHANCED_TANK
    };

    class Sh_155mm_AMOS: ShellBase {
        ENHANCED_TANK
    };

    class Sh_82mm_AMOS: Sh_155mm_AMOS {
        ENHANCED_TANK
    };

    class CUP_B_19mm_HE: BulletBase {
        ENHANCED_IFV
    };

    class CUP_B_20mm_AP_Tracer_Red: BulletBase {
        ENHANCED_IFV
    };

    class CUP_B_20mm_APHE_Tracer_Red: BulletBase {
        ENHANCED_IFV
    };

    class CUP_B_20mm_API_Tracer_Red: BulletBase {
        ENHANCED_IFV
    };

    class CUP_B_23mm_AA;
    class CUP_B_23mm_AP: CUP_B_23mm_AA {
        ENHANCED_IFV
    };

    class CUP_B_23mm_APHE_No_Tracer: BulletBase {
        ENHANCED_IFV
    };

    class CUP_B_23mm_APHE_Green_Tracer: BulletBase {
        ENHANCED_IFV
    };

    class CUP_B_25mm_APFSDS_White_Tracer: BulletBase {
        ENHANCED_IFV
    };

    class CUP_Sh_120_HE: ShellBase {
        ENHANCED_TANK
    };

    class CUP_Sh_120_SABOT: ShellBase {
        ENHANCED_TANK
    };

    class Sh_120mm_HE_Tracer_Red;
    class CUP_Sh_120mm_HESH_Tracer_Red: Sh_120mm_HE_Tracer_Red {
        ENHANCED_TANK
    };

    class RocketBase;
    class R_PG32V_F: RocketBase {
        ENHANCED_LAUNCHER
    };
    class R_TBG32V_F: R_PG32V_F {
        ENHANCED_LAUNCHER
    };
    class CUP_R_PG7V_AT: RocketBase {
        ENHANCED_AI
    };
    class CUP_R_PG7VL_AT: RocketBase {
        ENHANCED_AI
    };
    class CUP_R_PG7VR_AT: RocketBase {
        ENHANCED_AI
    };
    class CUP_R_PG7VM_AT: RocketBase {
        ENHANCED_AI
    };
    class CUP_R_OG7_AT: RocketBase {
        ENHANCED_AI
    };
    class CUP_R_PG9_AT: RocketBase {
        ENHANCED_AI
    };
    class CUP_R_OG9_HE: CUP_R_PG9_AT {
        ENHANCED_AI
    };
    class CUP_R_SMAW_HEDP: RocketBase {
        ENHANCED_AI
    };
    class CUP_R_SMAW_HEAA: CUP_R_SMAW_HEDP {
        ENHANCED_AI
    };
    class CUP_R_M136_AT: RocketBase {
        ENHANCED_AI
    };
    class CUP_R_MEEWS_HEDP: RocketBase {
        ENHANCED_AI
    };
    class CUP_R_MEEWS_HEAT: CUP_R_MEEWS_HEDP {
        ENHANCED_AI
    };
    class CUP_R_RPG18_AT: RocketBase {
        ENHANCED_AI
    };
    class CUP_R_SMAW_HEDP_N: RocketBase {
        ENHANCED_AI
    };
    class CUP_R_SMAW_HEAA_N: CUP_R_SMAW_HEDP_N {
        ENHANCED_AI
    };
    class CUP_R_M72A6_AT: RocketBase {
        ENHANCED_AI
    };
};
