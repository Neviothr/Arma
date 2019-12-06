class CfgWeapons {
    class ItemCore;
    class InventoryOpticsItem_Base_F;
    class Launcher_Base_F;

    /*
    // This would require MOA turrets
    class CUP_optic_AN_PVS_4: ItemCore {
        ACE_ScopeAdjust_Vertical[] = {-12, 50};
        ACE_ScopeAdjust_Horizontal[] = {-20, 20};
        ACE_ScopeAdjust_VerticalIncrement = 0.25;
        ACE_ScopeAdjust_HorizontalIncrement = 0.25;
        ACE_ScopeAdjust_Unit = "MOA";
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class ANPVS4 {
                    discreteDistance[] = {100};
                    discreteDistanceInitIndex = 0;
                };
            };
        };
    };

    // PSOs below are obsolete
    class CUP_optic_PSO_1: ItemCore {
        ACE_ScopeAdjust_Horizontal[] = {-10, 10};
        ACE_ScopeAdjust_HorizontalIncrement = 0.5;
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class PSO {
                    discreteDistance[]={100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000};
                    discreteDistanceInitIndex=4;
                };
            };
        };
    };

    class CUP_optic_PSO_3: ItemCore {
        ACE_ScopeAdjust_Horizontal[] = {-10, 10};
        ACE_ScopeAdjust_HorizontalIncrement = 0.5;
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class PSO {
                    discreteDistance[]={100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000};
                    discreteDistanceInitIndex=4;
                };
            };
        };
    };
    */

    // Non Disposable launchers
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
    class CUP_launch_NLAW_Loaded: Launcher_Base_F {
        ace_overpressure_angle = 30;
        ace_overpressure_range = 2;
        ace_overpressure_damage = 0.5;
        canLock = 1;
    };

    // ACE Night Vision
    class NVGoggles;
    // Source: https://en.wikipedia.org/wiki/AN/PVS-7
    // Quote from source "Generation 3"
    class CUP_NVG_PVS7: NVGoggles {
        modelOptics = "";
        ace_nightvision_border = "z\ace\addons\nightvision\data\nvg_mask_4096.paa";
        ace_nightvision_bluRadius = 0;
        // Should have eye cups, but current ACE3 NVG implementation has UI behind
        // NVG overlay making it completely hidden if eye cups are enabled
        ace_nightvision_eyeCups = 0;
        ace_nightvision_generation = 3;

    };
    // Source: http://www.militarysystems-tech.com/files/militarysystems/supplier_docs/HILSS.pdf
    // Same as PVS-14, quote from source: "...allows users of the HMNVS (ITT AN-PVS14) to use..."
    class CUP_NVG_HMNVS: NVGoggles {
        modelOptics = "";
        ace_nightvision_border = "z\ace\addons\nightvision\data\nvg_mask_4096.paa";
        ace_nightvision_bluRadius = 0.13;
        ace_nightvision_generation = 3;
    };
    // Source: https://en.wikipedia.org/wiki/AN/PVS-14
    // Quote from source "Generation 3B"
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

    //////////////////////////////////////////////
    /* 		ACE Magazines for CUP Weapons		*/
    //////////////////////////////////////////////
    class Rifle_Base_f;
    class CUP_arifle_CZ805_Base: Rifle_Base_F {
        magazines[] += {"ACE_30Rnd_556x45_Stanag_M995_AP_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk318_mag", "ACE_30Rnd_556x45_Stanag_Tracer_Dim"};
    };
    class CUP_srifle_L129A1: Rifle_Base_F {
        magazines[] += {"ACE_20Rnd_762x51_M118LR_Mag", "ACE_20Rnd_762x51_M993_AP_Mag", "ACE_20Rnd_762x51_Mag_SD", "ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_Mag_Tracer_Dim", "ACE_20Rnd_762x51_Mk316_Mod_0_Mag", "ACE_20Rnd_762x51_Mk319_Mod_0_Mag"};
    };
};
