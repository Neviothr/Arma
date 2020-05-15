class GVAR(r) {
    uniformClass = "rhsgref_uniform_ttsko_urban";
    backpack = "B_TacticalPack_blk";
    linkedItems[] = {"V_TacVestIR_blk", "H_MilCap_blue", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"rhs_weap_akm"};
    magazines[] = {
        LIST_8("rhs_30Rnd_762x39mm"),
        LIST_2("rhs_mag_f1"),
        LIST_2("rhs_mag_rdg2_white")
    };
};

class GVAR(g) {
    uniformClass = "rhsgref_uniform_ttsko_urban";
    backpack = "B_TacticalPack_blk";
    linkedItems[] = {"V_TacVestIR_blk", "H_MilCap_blue_black_ess", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"rhs_weap_akms_gp25"};
    magazines[] = {
        LIST_8("rhs_30Rnd_762x39mm"),
        LIST_2("rhs_mag_f1"),
        LIST_2("rhs_mag_rdg2_white"),
        LIST_8("rhs_VOG25"),
        LIST_4("rhs_GRD40_White")
    };
};

class GVAR(rat) {
    uniformClass = "rhsgref_uniform_ttsko_urban";
    backpack = "B_TacticalPack_blk";
    linkedItems[] = {"V_TacVestIR_blk", "H_MilCap_blue_black_ess_bare", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"rhs_weap_akmn", "rhs_weap_rpg7"};
    magazines[] = {
        LIST_8("rhs_30Rnd_762x39mm"),
        LIST_2("rhs_mag_f1"),
        LIST_2("rhs_mag_rdg2_white"),
        LIST_3("rhs_rpg7_PG7V_mag"),
        LIST_2("rhs_rpg7_OG7V_mag")
    };
};

class GVAR(ar) {
    uniformClass = "rhsgref_uniform_ttsko_urban";
    backpack = "B_TacticalPack_blk";
    linkedItems[] = {"V_TacVestIR_blk", "H_MilCap_blue_black_ess_bare", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"rhs_weap_pkm"};
    magazines[] = {
        LIST_5("rhs_100Rnd_762x54mmR"),
        "rhs_mag_f1",
        "rhs_mag_rdg2_white"
    };
};
