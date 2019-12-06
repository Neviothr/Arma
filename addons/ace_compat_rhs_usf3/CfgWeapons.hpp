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
