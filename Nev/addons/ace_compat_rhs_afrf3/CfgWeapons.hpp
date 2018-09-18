class CfgWeapons {
    class NVGoggles;
    class rhs_1PN138: NVGoggles { // Monocular
        modelOptics = "";
        ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_4096.paa";
        ace_nightvision_bluRadius = 0.13;
    };

    class hgun_Rook40_F;
    class rhs_weap_pya: hgun_Rook40_F {
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 111.76;
    };
    class Pistol_Base_F;
    class rhs_weap_makarov_pm: rhs_weap_pya {
        ACE_barrelTwist = 240.03;
        ACE_barrelLength = 93.472;
    };
    class rhs_weap_ak74m_Base_F;
    class rhs_weap_ak74m: rhs_weap_ak74m_Base_F {
        ACE_barrelTwist = 199.898;
        ACE_barrelLength = 414.02;
    };
    class rhs_weap_akm: rhs_weap_ak74m {
        ACE_barrelTwist = 199.898;
        ACE_barrelLength = 414.02;
    };
    class rhs_weap_aks74;
    class rhs_weap_aks74u: rhs_weap_aks74 {
        ACE_barrelTwist = 160.02;
        ACE_barrelLength = 210.82;
    };
    class rhs_weap_svd: rhs_weap_ak74m {
        ACE_barrelTwist = 238.76;
        ACE_barrelLength = 619.76;
    };
    class rhs_weap_svdp;
    class rhs_weap_svds: rhs_weap_svdp {
        ACE_barrelTwist = 238.76;
        ACE_barrelLength = 563.88;
    };
    class rhs_pkp_base;
    class rhs_weap_pkp: rhs_pkp_base {
        ACE_barrelTwist = 240.03;
        ACE_barrelLength = 657.86;
    };
    class rhs_weap_pkm: rhs_weap_pkp {
        ACE_barrelTwist = 240.03;
        ACE_barrelLength = 645.16;
    };
    class rhs_weap_rpk74: rhs_weap_pkp {
        ACE_barrelTwist = 195.072;
        ACE_barrelLength = 589.28;
    };
    class rhs_weap_orsis_Base_F;
    class rhs_weap_t5000: rhs_weap_orsis_Base_F { // http://en.orsis.com/production/catalog/19046/
        ACE_barrelTwist = 254.0; // 1:10"
        ACE_barrelLength = 698.5; // 27.5"
    };
};
