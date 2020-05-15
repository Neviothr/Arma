class GVAR(r) {
    uniformClass = "rhsgref_uniform_flecktarn_full";
    backpack = "rhs_sidor";
    linkedItems[] = {"CUP_V_B_Eagle_SPC_Rifleman", "rhssaf_helmet_m97_olive_nocamo", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"CUP_arifle_M16A2"};
    magazines[] = {
        LIST_15("CUP_30Rnd_556x45_Stanag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};

class GVAR(g) {
    uniformClass = "rhsgref_uniform_flecktarn_full";
    backpack = "B_Kitbag_cbr";
    linkedItems[] = {"CUP_V_B_Eagle_SPC_Rifleman", "rhssaf_helmet_m97_olive_nocamo_black_ess", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"rhs_weap_m16a4_carryhandle_M203"};
    magazines[] = {
        LIST_15("CUP_30Rnd_556x45_Stanag"),
        LIST_8("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};

class GVAR(rat) {
    uniformClass = "rhsgref_uniform_flecktarn_full";
    backpack = "B_Kitbag_cbr";
    linkedItems[] = {"CUP_V_B_Eagle_SPC_Rifleman", "rhssaf_helmet_m97_olive_nocamo_black_ess_bare", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"CUP_arifle_M16A2", "rhs_weap_rpg7"};
    magazines[] = {
        LIST_15("CUP_30Rnd_556x45_Stanag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        "rhs_rpg7_PG7V_mag",
        "rhs_rpg7_PG7V_mag",
        "rhs_rpg7_OG7V_mag"
    };
};

class GVAR(ar) {
    uniformClass = "rhsgref_uniform_flecktarn_full";
    backpack = "B_Kitbag_cbr";
    linkedItems[] = {"CUP_V_B_Eagle_SPC_Rifleman", "rhssaf_helmet_m97_olive_nocamo_black_ess_bare", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"rhs_weap_m249_pip"};
    magazines[] = {
        LIST_6("rhsusf_100Rnd_556x45_soft_pouch"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
