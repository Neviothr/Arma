class GVAR(r) {
    uniformClass = "CUP_U_CRYE_MCAM_NP2_Full";
    backpack = "B_Kitbag_cbr";
    linkedItems[] = {"CUP_V_B_Eagle_SPC_Empty", "CUP_H_OpsCore_Covered_MCAM", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"hlc_rifle_aug"};
    magazines[] = {
        LIST_15("hlc_30Rnd_556x45_B_AUG"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};

class GVAR(g) {
    uniformClass = "CUP_U_CRYE_MCAM_NP2_Full";
    backpack = "B_Kitbag_cbr";
    linkedItems[] = {"CUP_V_B_Eagle_SPC_Empty", "CUP_H_OpsCore_Covered_MCAM", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"hlc_rifle_auga3_GL_B"};
    magazines[] = {
        LIST_15("hlc_30Rnd_556x45_B_AUG"),
        LIST_5("1Rnd_HE_Grenade_shell"),
        LIST_3("1Rnd_Smoke_Grenade_shell"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};

class GVAR(rat) {
    uniformClass = "CUP_U_CRYE_MCAM_NP2_Full";
    backpack = "B_Kitbag_cbr";
    linkedItems[] = {"CUP_V_B_Eagle_SPC_Empty", "CUP_H_OpsCore_Covered_MCAM", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"hlc_rifle_aug", "rhs_weap_M136"};
    magazines[] = {
        LIST_15("hlc_30Rnd_556x45_B_AUG"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};

class GVAR(ar) {
    uniformClass = "CUP_U_CRYE_MCAM_NP2_Full";
    backpack = "B_Kitbag_cbr";
    linkedItems[] = {"CUP_V_B_Eagle_SPC_AR", "CUP_H_OpsCore_Covered_MCAM", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"rhs_weap_m249_pip_S", "rhsusf_weap_m9"};
    magazines[] = {
        LIST_6("rhsusf_100Rnd_556x45_soft_pouch"),
        "HandGrenade",
        "SmokeShell",
        LIST_4("rhsusf_mag_15Rnd_9x19_FMJ")
    };
};
