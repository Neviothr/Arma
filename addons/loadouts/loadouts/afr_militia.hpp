class GVAR(r) {
    uniformClass = "U_C_Poor_1";
    backpack = "";
    linkedItems[] = {"usm_headwrap_blk", "rhsgref_chicom", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"rhs_weap_akm"};
    magazines[] = {
        LIST_9("rhs_30Rnd_762x39mm"),
        LIST_2("rhs_30Rnd_762x39mm_tracer"),
        "rhs_grenade_nbhgr39_mag"
    };
};

class GVAR(g) {
    uniformClass = "U_I_C_Soldier_Bandit_1_F";
    backpack = "";
    linkedItems[] = {"usm_headwrap_odg2", "CUP_V_OI_TKI_Jacket2_02", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"rhs_weap_akms_gp25"};
    magazines[] = {
        LIST_9("rhs_30Rnd_762x39mm"),
        LIST_2("rhs_30Rnd_762x39mm_tracer"),
        "rhs_grenade_nbhgr39_mag",
        LIST_6("rhs_VOG25")
    };
};

class GVAR(rat) {
    uniformClass = "U_C_Poloshirt_salmon";
    backpack = "rhs_rpg";
    linkedItems[] = {"usm_headwrap_tan", "rhsgref_chicom", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"rhs_weap_akmn", "rhs_weap_rpg7"};
    magazines[] = {
        LIST_9("rhs_30Rnd_762x39mm"),
        LIST_2("rhs_30Rnd_762x39mm_tracer"),
        "rhs_grenade_nbhgr39_mag",
        "rhs_rpg7_PG7V_mag"
    };
};

class GVAR(ar) {
    uniformClass = "U_C_Man_casual_4_F";
    backpack = "";
    linkedItems[] = {"usm_headwrap_tgrstp", "CUP_V_OI_TKI_Jacket2_05", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"CUP_arifle_RPK74"};
    magazines[] = {
        LIST_10("CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M")
    };
};
