class CfgWeapons {
    class ItemCore;
    class InventoryOpticsItem_Base_F;
    class Launcher_Base_F;
    class CUP_launch_Javelin: Launcher_Base_F {
        ace_overpressure_angle = 30;
        ace_overpressure_range = 2;
        ace_overpressure_damage = 0.5;
    };

    class CUP_launch_Igla: Launcher_Base_F {
        ace_overpressure_angle = 30;
        ace_overpressure_range = 2;
        ace_overpressure_damage = 0.5;
    };

    class CUP_launch_M47: Launcher_Base_F {
        ace_overpressure_angle = 45;
        ace_overpressure_range = 8;
        ace_overpressure_damage = 0.5;
    };

    class CUP_launch_MAAWS: Launcher_Base_F {
        ace_overpressure_angle = 60;
        ace_overpressure_range = 15;
        ace_overpressure_damage = 0.7;
    };

    class CUP_launch_MAAWS_Scope: CUP_launch_MAAWS {};
    class CUP_launch_Metis: Launcher_Base_F {
        ace_overpressure_angle = 45;
        ace_overpressure_range = 15;
        ace_overpressure_damage = 0.7;
    };

    class CUP_launch_RPG7V: Launcher_Base_F {
        ace_overpressure_angle = 45;
        ace_overpressure_range = 10;
        ace_overpressure_damage = 0.7;
    };

    class CUP_launch_Mk153Mod0: Launcher_Base_F {
        ace_overpressure_angle = 30;
        ace_overpressure_range = 15;
        ace_overpressure_damage = 0.7;
    };

    class CUP_launch_Mk153Mod0_SMAWOptics: CUP_launch_Mk153Mod0 {};
    class CUP_launch_FIM92Stinger: Launcher_Base_F {
        ace_overpressure_angle = 45;
        ace_overpressure_range = 15;
        ace_overpressure_damage = 0.3;
    };

    class CUP_launch_9K32Strela: Launcher_Base_F {
        ace_overpressure_angle = 30;
        ace_overpressure_range = 2;
        ace_overpressure_damage = 0.5;
    };

    class CUP_launch_M136: Launcher_Base_F {
        ace_overpressure_angle = 45;
        ace_overpressure_range = 10;
        ace_overpressure_damage = 0.5;
    };

    class CUP_launch_NLAW: Launcher_Base_F {
        ace_overpressure_angle = 30;
        ace_overpressure_range = 2;
        ace_overpressure_damage = 0.5;
    };

    class CUP_launch_RPG18: Launcher_Base_F {
        ace_overpressure_angle = 40;
        ace_overpressure_range = 15;
        ace_overpressure_damage = 0.5;
    };

    class CUP_launch_M72A6: Launcher_Base_F {
        ace_overpressure_angle = 40;
        ace_overpressure_range = 15;
        ace_overpressure_damage = 0.5;
    };

    class NVGoggles;
    class CUP_NVG_PVS7: NVGoggles {
        modelOptics = "";
        ace_nightvision_border = "z\ace\addons\nightvision\data\nvg_mask_4096.paa";
        ace_nightvision_bluRadius = 0.13;
        ace_nightvision_eyeCups = 1;
        ace_nightvision_generation = 3;
    };

    class CUP_NVG_HMNVS: NVGoggles {
        modelOptics = "";
        ace_nightvision_border = "z\ace\addons\nightvision\data\nvg_mask_4096.paa";
        ace_nightvision_bluRadius = 0.13;
        ace_nightvision_generation = 3;
    };

    class CUP_NVG_PVS14: NVGoggles {
        modelOptics = "";
        ace_nightvision_border = "z\ace\addons\nightvision\data\nvg_mask_4096.paa";
        ace_nightvision_bluRadius = 0.13;
        ace_nightvision_generation = 3;
    };

    class CUP_NVG_GPNVG_black: NVGoggles {
        modelOptics = "";
        ace_nightvision_border = "z\ace\addons\nightvision\data\nvg_mask_quad_4096.paa";
        ace_nightvision_bluRadius = 0.13;
        ace_nightvision_generation = 4;
    };

    class CUP_NVG_GPNVG_tan: NVGoggles {
        modelOptics = "";
        ace_nightvision_border = "z\ace\addons\nightvision\data\nvg_mask_quad_4096.paa";
        ace_nightvision_bluRadius = 0.13;
        ace_nightvision_generation = 4;
    };

    class CUP_NVG_GPNVG_green: NVGoggles {
        modelOptics = "";
        ace_nightvision_border = "z\ace\addons\nightvision\data\nvg_mask_quad_4096.paa";
        ace_nightvision_bluRadius = 0.13;
        ace_nightvision_generation = 4;
    };

    class CUP_NVG_GPNVG_winter: NVGoggles {
        modelOptics = "";
        ace_nightvision_border = "z\ace\addons\nightvision\data\nvg_mask_quad_4096.paa";
        ace_nightvision_bluRadius = 0.13;
        ace_nightvision_generation = 4;
    };

    class CUP_NVG_PVS15_black: NVGoggles {
        modelOptics = "";
        ace_nightvision_border = "z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
        ace_nightvision_bluRadius = 0.13;
        ace_nightvision_generation = 3;
    };

    class CUP_NVG_PVS15_tan: NVGoggles {
        modelOptics = "";
        ace_nightvision_border = "z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
        ace_nightvision_bluRadius = 0.13;
        ace_nightvision_generation = 3;
    };

    class CUP_NVG_PVS15_green: NVGoggles {
        modelOptics = "";
        ace_nightvision_border = "z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
        ace_nightvision_bluRadius = 0.13;
        ace_nightvision_generation = 3;
    };
    
    class CUP_NVG_PVS15_winter: NVGoggles {
        modelOptics = "";
        ace_nightvision_border = "z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
        ace_nightvision_bluRadius = 0.13;
        ace_nightvision_generation = 3;
    };
};
