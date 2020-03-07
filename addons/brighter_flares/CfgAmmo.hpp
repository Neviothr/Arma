class CfgAmmo {
    class GrenadeCore;
    class FlareCore: GrenadeCore {};
    class FlareBase: FlareCore {};
    class F_40mm_White: FlareBase {
        BRIGHTER_FLARE;
    };

    class F_40mm_Green: F_40mm_White {
        BRIGHTER_FLARE;
    };

    class F_40mm_Red: F_40mm_White {
        BRIGHTER_FLARE;
    };

    class F_40mm_Yellow: F_40mm_White {
        BRIGHTER_FLARE;
    };

    class F_20mm_White: FlareBase {
        BRIGHTER_FLARE;
    };

    class F_20mm_Green: F_20mm_White {
        BRIGHTER_FLARE;
    };

    class F_20mm_Red: F_20mm_White {
        BRIGHTER_FLARE;
    };

    class F_20mm_Yellow: F_20mm_White {
        BRIGHTER_FLARE;
    };

    class F_40mm_Cir: F_40mm_White {
        BRIGHTER_FLARE;
    };

    class rhsusf_40mm_white: F_40mm_White {
        BRIGHTER_FLARE;
    };

    class rhsusf_40mm_green: F_40mm_Green {
        BRIGHTER_FLARE;
    };

    class rhsusf_40mm_red: F_40mm_Red {
        BRIGHTER_FLARE;
    };

    class CUP_F_40mm_Star_White: F_40mm_White {
        BRIGHTER_FLARE;
    };

    class CUP_F_40mm_Star_Green: CUP_F_40mm_Star_White {
        BRIGHTER_FLARE;
    };

    class CUP_F_40mm_Star_Red: CUP_F_40mm_Star_White {
        BRIGHTER_FLARE;
    };

    class CUP_Sub_F_40mm_StarCluster_White: F_40mm_White {
        BRIGHTER_FLARE;
    };

    class CUP_Sub_F_40mm_StarCluster_Green: F_40mm_White {
        BRIGHTER_FLARE;
    };

    class CUP_Sub_F_40mm_StarCluster_Red: F_40mm_White {
        BRIGHTER_FLARE;
    };
	class Flare_82mm_AMOS_White: FlareCore {
        BRIGHTER_FLARE;
    };
	class CUP_Sh_122_ILLUM: Flare_82mm_AMOS_White {
        BRIGHTER_FLARE;
    };
	class CUP_Sh_105_ILLUM: Flare_82mm_AMOS_White {
        BRIGHTER_FLARE;
    };
	class rhs_ammo_3WS23: Flare_82mm_AMOS_White {
        BRIGHTER_FLARE;
    };
	class rhs_ammo_s463: Flare_82mm_AMOS_White {
        BRIGHTER_FLARE;
    };
	class rhs_ammo_3vs25m: Flare_82mm_AMOS_White {
        BRIGHTER_FLARE;
    };
    class rhs_ammo_rdg2_white;
	class rhs_ammo_nspn_yellow: rhs_ammo_rdg2_white {
        BRIGHTER_FLARE;
    };
	class rhs_ammo_m314_ilum: Flare_82mm_AMOS_White {
        BRIGHTER_FLARE;
    };
};
