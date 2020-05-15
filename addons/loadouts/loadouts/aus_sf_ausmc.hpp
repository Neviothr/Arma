class GVAR(r) {
    uniformClass = "rhs_uniform_g3_mc";
    backpack = "";
    linkedItems[] = {"rhsusf_spcs_ocp_rifleman", "rhsusf_opscore_ut_pelt", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"hlc_rifle_auga3_b"};
    magazines[] = {
        LIST_9("hlc_30Rnd_556x45_B_AUG"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};

class GVAR(g) {
    uniformClass = "rhs_uniform_g3_mc";
    backpack = "B_Kitbag_mcamo";
    linkedItems[] = {"rhsusf_spcs_ocp_rifleman", "rhsusf_opscore_ut_pelt_cam", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"hlc_rifle_auga3_GL_B"};
    magazines[] = {
        LIST_9("hlc_30Rnd_556x45_B_AUG"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc"),
        LIST_5("rhs_mag_M441_HE"),
        LIST_4("rhs_mag_m714_White")
    };
};

class GVAR(rat) {
    uniformClass = "rhs_uniform_g3_mc";
    backpack = "";
    linkedItems[] = {"rhsusf_spcs_ocp_rifleman", "rhsusf_opscore_ut_pelt_nsw", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"hlc_rifle_auga3_b", "rhs_weap_m72a7"};
    magazines[] = {
        LIST_9("hlc_30Rnd_556x45_B_AUG"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};

class GVAR(ar) {
    uniformClass = "rhs_uniform_g3_mc";
    backpack = "B_AssaultPack_mcamo";
    linkedItems[] = {"rhsusf_spcs_ocp_rifleman", "rhsusf_opscore_ut_pelt_nsw_cam", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"CUP_lmg_Mk48"};
    magazines[] = {
        LIST_5("CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
