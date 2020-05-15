class GVAR(rifleman) {
    uniformClass = "U_C_Poor_1";
    backpack = "B_FieldPack_blk";
    linkedItems[] = {"CUP_I_B_PMC_Unit_13", "V_TacVest_blk", "H_ShemagOpen_tan", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"rhs_weap_akm"};
    magazines[] = {
        LIST_7("rhs_30Rnd_762x39mm"),
        LIST_2("rhs_30Rnd_762x39mm_tracer"),
        "rhs_mag_f1",
        "rhs_mag_rdg2_white"
    };
};

class GVAR(g) {
    uniformClass = "U_I_C_Soldier_Bandit_1_F";
    backpack = "B_FieldPack_blk";
    linkedItems[] = {"CUP_U_B_BDUv2_roll2_dirty_desert", "V_I_G_resistanceLeader_F", "CUP_H_PMC_Cap_Back_Grey", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"rhs_weap_akm_gp25"};
    magazines[] = {
        LIST_6("rhs_30Rnd_762x39mm"),
        LIST_2("rhs_30Rnd_762x39mm_tracer"),
        LIST_2("rhs_mag_rdg2_white"),
        LIST_4("rhs_VOG25"),
        LIST_2("rhs_GRD40_White")
    };
};

class GVAR(rat) {
    uniformClass = "U_I_L_Uniform_01_tshirt_sport_F";
    backpack = "rhs_rpg";
    linkedItems[] = {"usm_headwrap_tan", "V_TacVest_brn", "CUP_H_TKI_Lungee_05", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"rhs_weap_akmn", "rhs_weap_rpg7"};
    magazines[] = {
        LIST_7("rhs_30Rnd_762x39mm"),
        LIST_2("rhs_30Rnd_762x39mm_tracer"),
        "rhs_mag_f1",
        "rhs_mag_rdg2_white",
        LIST_2("rhs_rpg7_PG7V_mag")
    };
};

class GVAR(ar) {
    uniformClass = "CUP_I_B_PARA_Unit_10";
    backpack = "bear_sidor_tan";
    linkedItems[] = {"usm_headwrap_tgrstp", "rhsgref_chicom", "CUP_H_TKI_SkullCap_05", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"CUP_arifle_RPK74"};
    magazines[] = {
         LIST_10("CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"),
        "rhs_mag_f1",
        "rhs_mag_rdg2_white"
    };
};
