class CfgWeapons {
    class NVGoggles;
    class rhsusf_ANPVS_14: NVGoggles { // Monocular
        modelOptics = "";
        ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_4096.paa";
        ace_nightvision_bluRadius = 0.13;
    };
    class rhsusf_ANPVS_15: rhsusf_ANPVS_14 { // Binocular (same as base)
        modelOptics = "";
        ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
        ace_nightvision_bluRadius = 0.15;
    };

    class Rifle_Base_F;
    class srifle_EBR_F;
    class launch_O_Titan_F;
    class UGL_F;

    class GM6_base_F;
    class rhs_weap_M107_Base_F: GM6_base_F {
        ACE_barrelTwist = 381.0;
        ACE_barrelLength = 736.6;
    };
    class rhs_weap_XM2010_Base_F: Rifle_Base_F {
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 609.6;
    };
    class rhs_weap_m24sws: rhs_weap_XM2010_Base_F {
        ACE_barrelTwist = 285.75;
        ACE_barrelLength = 609.6;
    };
    class rhs_weap_m40a5: rhs_weap_XM2010_Base_F {
        ACE_barrelTwist = 304.8; // 1:12"
        ACE_barrelLength = 635.0; // 25"
    };
    class arifle_MX_Base_F;
    class rhs_weap_m4_Base: arifle_MX_Base_F {
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 368.3;
    };
    class rhs_weap_m4a1;
    class rhs_weap_hk416d10: rhs_weap_m4a1 {
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 254;
    };
    class rhs_weap_hk416d145: rhs_weap_hk416d10 {
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 368.3;
    };
    class rhs_weap_m27iar: rhs_weap_m4a1 {
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 419.1;
    };
    class rhs_weap_m4a1_blockII;
    class rhs_weap_mk18: rhs_weap_m4a1_blockII {
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 261.62;
    };
    class rhs_weap_m16a4: rhs_weap_m4_Base {
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 508.0;
    };
    class rhs_weap_lmg_minimi_railed; // Rifle_Base_F - scope = private;
    class rhs_weap_m249_pip_S: rhs_weap_lmg_minimi_railed {
        ACE_barrelLength = 348;
        ACE_barrelTwist = 177.8;
    };
    class rhs_weap_m249_pip_L: rhs_weap_lmg_minimi_railed {
        ACE_barrelLength = 464.8;
        ACE_barrelTwist = 177.8;
    };
    class rhs_weap_m240_base; // Rifle_Long_Base_F
    class rhs_weap_m240B: rhs_weap_m240_base {
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 629.92;
    };
    class rhs_weap_m14ebrri: srifle_EBR_F {
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 558.8;
    };
    class rhs_weap_sr25: rhs_weap_m14ebrri {
        ACE_barrelTwist = 285.75;
        ACE_barrelLength = 609.6;
    };
    class rhs_weap_sr25_ec: rhs_weap_sr25 {
        ACE_barrelTwist = 285.75;
        ACE_barrelLength = 508.0;
    };
    class rhs_weap_M590_5RD: Rifle_Base_F {
        ACE_barrelTwist = 0.0;
        ACE_twistDirection = 0;
        ACE_barrelLength = 469.9;
    };
    class rhs_weap_M590_8RD: rhs_weap_M590_5RD {
        ACE_barrelTwist = 0.0;
        ACE_twistDirection = 0;
        ACE_barrelLength = 508.0;
    };
    class SMG_02_base_F;
    class rhsusf_weap_MP7A1_base_f: SMG_02_base_F {
        ACE_barrelTwist = 160.0;
        ACE_barrelLength = 180.0;
    };
    // RHS pistols
    class hgun_ACPC2_F;
    class rhsusf_weap_m1911a1: hgun_ACPC2_F {
        ACE_barrelTwist = 406.4;
        ACE_barrelLength = 127.0;
    };
    class hgun_P07_F;
    class rhsusf_weap_glock17g4: hgun_P07_F {
        ACE_barrelTwist = 248.92;
        ACE_barrelLength = 114.046;
    };
    class rhsusf_weap_m9: rhsusf_weap_glock17g4 {
        ACE_barrelTwist = 248.92;
        ACE_barrelLength = 124.46;
    };

    class Launcher_Base_F;
    class rhs_weap_smaw: Launcher_Base_F {
        ace_reloadlaunchers_enabled = 1;
        ace_overpressure_angle = 45;
    };
    class rhs_weap_maaws: Launcher_Base_F {
        ace_reloadlaunchers_enabled = 1;
        ace_overpressure_range = 15;
        ace_overpressure_angle = 70;
        ace_overpressure_damage = 0.75;
    };
};
