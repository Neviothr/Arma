class GVAR(r) {
    uniformClass = "rhs_uniform_g3_mc";
    backpack = "";
    linkedItems[] = {"rhsusf_mbav_rifleman", "rhsusf_opscore_ut_pelt", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"rhs_weap_hk416d10_LMT"};
    magazines[] = {
        LIST_8("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};

class GVAR(g) {
    uniformClass = "rhs_uniform_g3_mc";
    backpack = "B_Kitbag_cbr";
    linkedItems[] = {"rhsusf_mbav_rifleman", "rhsusf_opscore_ut_pelt_cam", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"rhs_weap_hk416d145_m320"};
    magazines[] = {
        LIST_8("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc"),
        LIST_5("rhs_mag_M441_HE"),
        LIST_4("rhs_mag_m714_White")
    };
};

class GVAR(rat) {
    uniformClass = "rhs_uniform_g3_mc";
    backpack = "";
    linkedItems[] = {"rhsusf_mbav_rifleman", "rhsusf_opscore_paint_pelt_nsw", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"rhs_weap_hk416d10_LMT", "rhs_weap_M136"};
    magazines[] = {
        LIST_8("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};

class GVAR(ar) {
    uniformClass = "rhs_uniform_g3_mc";
    backpack = "B_Kitbag_cbr";
    linkedItems[] = {"rhsusf_mbav_rifleman", "rhsusf_opscore_paint_pelt_nsw_cam", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"rhs_weap_m249_pip_S_para"};
    magazines[] = {
        LIST_4("rhsusf_200rnd_556x45_mixed_box"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
