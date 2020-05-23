class GVAR(r) {
    uniformClass = "rhs_uniform_g3_mc";
    backpack = "";
    linkedItems[] = {"rhsusf_iotv_ocp_Rifleman", "CUP_H_BAF_MTP_Mk7", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"rhs_weap_hk416d145_grip3"};
    magazines[] = {
        LIST_8("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};

class GVAR(g) {
    uniformClass = "rhs_uniform_g3_mc";
    backpack = "";
    linkedItems[] = {"rhsusf_iotv_ocp_Grenadier", "CUP_H_BAF_MTP_Mk7", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"rhs_weap_hk416d145_m320"};
    magazines[] = {
        LIST_8("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"),
        LIST_3("rhs_mag_M433_HEDP"),
        LIST_3("rhs_mag_m714_White")
    };
};

class GVAR(rat) {
    uniformClass = "rhs_uniform_g3_mc";
    backpack = "";
    linkedItems[] = {"rhsusf_iotv_ocp_Rifleman", "CUP_H_BAF_MTP_Mk7", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"rhs_weap_hk416d145_grip3", "rhs_weap_M136"};
    magazines[] = {
        LIST_8("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};

class GVAR(ar) {
    uniformClass = "rhs_uniform_g3_mc";
    backpack = "B_Kitbag_mcamo";
    linkedItems[] = {"rhsusf_iotv_ocp_SAW", "CUP_H_BAF_MTP_Mk7", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"CUP_lmg_M60E4", "CUP_hgun_Duty"};
    magazines[] = {
        LIST_4("CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc",
        LIST_2("16Rnd_9x21_Mag"),
    };
};
