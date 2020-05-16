class GVAR(r) {
    uniformClass = "CUP_U_B_GER_Fleck_Crye";
    backpack = "CUP_B_GER_Medic_FLecktarn";
    linkedItems[] = {"CUP_V_B_GER_Armatus_BB_Fleck", "CUP_H_OpsCore_Tan_SF", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"CUP_arifle_G36C_VFG_wdl"};
    magazines[] = {
        LIST_7("rhssaf_30rnd_556x45_TDIM_G36"),
        LIST_2("rhssaf_30rnd_556x45_Tracers_G36"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};

class GVAR(g) {
    uniformClass = "CUP_U_B_GER_Fleck_Crye";
    backpack = "CUP_B_GER_Medic_FLecktarn";
    linkedItems[] = {"CUP_V_B_GER_Armatus_Fleck", "CUP_H_OpsCore_Grey_SF", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"CUP_arifle_G36K_RIS_AG36_wdl"};
    magazines[] = {
        LIST_7("rhssaf_30rnd_556x45_TDIM_G36"),
        LIST_2("rhssaf_30rnd_556x45_Tracers_G36"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc"),
        LIST_8("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };
};

class GVAR(rat) {
    uniformClass = "CUP_U_B_GER_Fleck_Crye";
    backpack = "CUP_B_GER_Medic_FLecktarn";
    linkedItems[] = {"CUP_V_B_GER_Carrier_Vest", "CUP_H_OpsCore_Covered_Fleck_SF", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"CUP_arifle_G36C_VFG_wdl", "rhs_weap_M136"};
    magazines[] = {
        LIST_7("rhssaf_30rnd_556x45_TDIM_G36"),
        LIST_2("rhssaf_30rnd_556x45_Tracers_G36"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};

class GVAR(ar) {
    uniformClass = "CUP_U_B_GER_Fleck_Crye";
    backpack = "CUP_B_GER_Pack_Flecktarn";
    linkedItems[] = {"CUP_V_B_GER_Carrier_Vest", "CUP_H_OpsCore_Covered_Fleck_SF", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"CUP_lmg_MG3_rail"};
    magazines[] = {
        LIST_5("CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
