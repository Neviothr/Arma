class CfgWeapons {
    class NVGoggles;
    class rhs_1PN138: NVGoggles { // Monocular
        modelOptics = "";
        ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_4096.paa";
        ace_nightvision_bluRadius = 0.13;
    };
    class rhs_weap_d81;
    class rhs_weap_2a70: rhs_weap_d81 { // "Low pressure" 100mm cannon
        ace_overpressure_range = 15;
        ace_overpressure_damage = 0.5;
    };
    class cannon_120mm;
    class rhs_weap_2a28_base: cannon_120mm { // "Low pressure"
        ace_overpressure_range = 15;
        ace_overpressure_damage = 0.5;
    };
};
