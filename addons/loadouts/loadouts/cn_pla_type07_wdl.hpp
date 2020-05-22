class GVAR(r) {
    uniformClass = "rhsgref_uniform_woodland";
    backpack = "CUP_B_AlicePack_OD";
    linkedItems[] = {"rhssaf_vest_md12_digital", "rhsgref_helmet_pasgt_woodland", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"arifle_CTAR_blk_F"};
    magazines[] = {
        LIST_10("30Rnd_580x42_Mag_F"),
        LIST_2("30Rnd_580x42_Mag_Tracer_F"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white")
    };
};

class GVAR(g) {
    uniformClass = "rhsgref_uniform_woodland";
    backpack = "CUP_B_AlicePack_OD";
    linkedItems[] = {"rhssaf_vest_md12_digital", "rhsgref_helmet_pasgt_woodland", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"arifle_CTAR_GL_blk_F"};
    magazines[] = {
        LIST_10("30Rnd_580x42_Mag_F"),
        LIST_2("30Rnd_580x42_Mag_Tracer_F"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white"),
        LIST_8("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };
};

class GVAR(rat) {
    uniformClass = "rhsgref_uniform_woodland";
    backpack = "CUP_B_AlicePack_OD";
    linkedItems[] = {"rhssaf_vest_md12_digital", "rhsgref_helmet_pasgt_woodland", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"arifle_CTAR_blk_F", "rhs_weap_rpg26"};
    magazines[] = {
        LIST_10("30Rnd_580x42_Mag_F"),
        LIST_2("30Rnd_580x42_Mag_Tracer_F"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white")
    };
};

class GVAR(ar) {
    uniformClass = "rhsgref_uniform_woodland";
    backpack = "CUP_B_AlicePack_OD";
    linkedItems[] = {"rhssaf_vest_md12_digital", "HELEMT", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"arifle_CTARS_blk_F"};
    magazines[] = {
        LIST_5("100Rnd_580x42_Mag_F"),
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white"
    };
};
