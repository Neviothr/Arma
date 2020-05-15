class GVAR(r) {
    uniformClass = "rhs_uniform_bdu_erdl";
    backpack = "CUP_B_AlicePack_OD";
    linkedItems[] = {"rhsgref_alice_webbing", "rhsusf_ach_helmet_M81", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"rhs_weap_l1a1_wood"};
    magazines[] = {
        LIST_11("rhs_mag_20Rnd_762x51_m80_fnfal"),
        LIST_2("rhs_mag_20Rnd_762x51_m62_fnfal"),
        LIST_2("rhs_grenade_mkii_mag"),
        LIST_2("SmokeShell")
    };
};

class GVAR(g) {
    uniformClass = "rhs_uniform_bdu_erdl";
    backpack = "CUP_B_AlicePack_OD";
    linkedItems[] = {"rhsgref_alice_webbing", "rhsusf_ach_helmet_M81", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"rhs_weap_m79"};
    magazines[] = {
        LIST_8("rhs_mag_M441_HE"),
        LIST_4("rhs_mag_m714_White")
    };
};

class GVAR(rat) {
    uniformClass = "rhs_uniform_bdu_erdl";
    backpack = "CUP_B_AlicePack_Khaki";
    linkedItems[] = {"rhsgref_alice_webbing", "rhs_Booniehat_m81", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"rhs_weap_l1a1_wood", "rhs_weap_m72a7"};
    magazines[] = {
        LIST_11("rhs_mag_20Rnd_762x51_m80_fnfal"),
        LIST_2("rhs_mag_20Rnd_762x51_m62_fnfal"),
        LIST_2("rhs_grenade_mkii_mag"),
        LIST_2("SmokeShell")
    };
};

class GVAR(ar) {
    uniformClass = "rhs_uniform_bdu_erdl";
    backpack = "CUP_B_AlicePack_Khaki";
    linkedItems[] = {"rhsgref_alice_webbing", "rhs_Booniehat_m81", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"CUP_lmg_M60"};
    magazines[] = {
        LIST_4("rhsusf_100Rnd_762x51"),
        LIST_2("rhsusf_100Rnd_762x51_m62_tracer"),
        "rhs_grenade_mkii_mag",
        "SmokeShell"
    };
};
