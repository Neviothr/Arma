class GVAR(r) {
    uniformClass = "rhsgref_uniform_ttsko_mountain";
    backpack = "rhs_sidor";
    linkedItems[] = {"rhs_6b5", "rhs_ssh68", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"rhs_weap_savz58p"};
    magazines[] = {
        LIST_7("rhs_30Rnd_762x39mm_Savz58"),
        LIST_2("rhs_30Rnd_762x39mm_Savz58_tracer"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white")
    };
};

class GVAR(g) {
    uniformClass = "rhsgref_uniform_ttsko_forest";
    backpack = "rhsgref_ttsko_alicepack";
    linkedItems[] = {"rhs_6b5_sniper", "bear_ssh68", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"rhs_weap_akm_gp25"};
    magazines[] = {
        LIST_7("rhs_30Rnd_762x39mm"),
        LIST_2("rhs_30Rnd_762x39mm_tracer"),
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white",
        LIST_6("rhs_VOG25"),
        LIST_4("rhs_GRD40_White")
    };
};

class GVAR(rat) {
    uniformClass = "rhsgref_uniform_ttsko_forest";
    backpack = "rhs_sidor";
    linkedItems[] = {"rhs_6b5_khaki", "bear_ssh68_olive", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"rhs_weap_savz58p", "rhs_weap_rpg75"};
    magazines[] = {
        LIST_7("rhs_30Rnd_762x39mm_Savz58"),
        LIST_2("rhs_30Rnd_762x39mm_Savz58_tracer"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white")
    };
};

class GVAR(ar) {
    uniformClass = "rhsgref_uniform_ttsko_forest";
    backpack = "rhs_sidor";
    linkedItems[] = {"rhs_6b5_ttsko", "bear_ssh68_olive", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"CUP_lmg_UK59"};
    magazines[] = {
        LIST_6("CUP_50Rnd_UK59_762x54R_Tracer"),
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white"
    };
};
