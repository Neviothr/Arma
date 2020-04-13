// Extracted and edited from:
// https://steamcommunity.com/sharedfiles/filedetails/?id=549676314
class CfgWeapons
{
    class Launcher_Base_F;
    //Ace Javelin :
    class CUP_launch_Javelin: Launcher_Base_F {
        ace_overpressure_angle = 30;
        ace_overpressure_range = 2;
        ace_overpressure_damage = 0.5;
    };

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
    };


    // ACE Night Vision
    class NVGoggles;
    // Source: https://en.wikipedia.org/wiki/AN/PVS-7
    // Quote from source "Generation 3"
    class CUP_NVG_PVS7: NVGoggles
    {
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
    class CUP_NVG_HMNVS: NVGoggles
    {
        modelOptics = "";
        ace_nightvision_border = "z\ace\addons\nightvision\data\nvg_mask_4096.paa";
        ace_nightvision_bluRadius = 0.13;
        ace_nightvision_generation = 3;
    };
    // Source: https://en.wikipedia.org/wiki/AN/PVS-14
    // Quote from source "Generation 3B"
    class CUP_NVG_PVS14: NVGoggles
    {
        modelOptics = "";
        ace_nightvision_border = "z\ace\addons\nightvision\data\nvg_mask_4096.paa";
        ace_nightvision_bluRadius = 0.13;
        ace_nightvision_generation = 3;
    };

    class CUP_NVG_GPNVG_black : NVGoggles
    {
        modelOptics = "";
        ace_nightvision_border = "z\ace\addons\nightvision\data\nvg_mask_quad_4096.paa";
        ace_nightvision_bluRadius = 0.13;
        ace_nightvision_generation = 4;
    };
    class CUP_NVG_GPNVG_tan : NVGoggles
    {
        modelOptics = "";
        ace_nightvision_border = "z\ace\addons\nightvision\data\nvg_mask_quad_4096.paa";
        ace_nightvision_bluRadius = 0.13;
        ace_nightvision_generation = 4;
    };
    class CUP_NVG_GPNVG_green : NVGoggles
    {
        modelOptics = "";
        ace_nightvision_border = "z\ace\addons\nightvision\data\nvg_mask_quad_4096.paa";
        ace_nightvision_bluRadius = 0.13;
        ace_nightvision_generation = 4;
    };
    class CUP_NVG_GPNVG_winter : NVGoggles
    {
        modelOptics = "";
        ace_nightvision_border = "z\ace\addons\nightvision\data\nvg_mask_quad_4096.paa";
        ace_nightvision_bluRadius = 0.13;
        ace_nightvision_generation = 4;
    };

    class CUP_NVG_PVS15_black : NVGoggles
    {
        modelOptics = "";
        ace_nightvision_border = "z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
        ace_nightvision_bluRadius = 0.13;
        ace_nightvision_generation = 3;
    };
    class CUP_NVG_PVS15_tan : NVGoggles
    {
        modelOptics = "";
        ace_nightvision_border = "z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
        ace_nightvision_bluRadius = 0.13;
        ace_nightvision_generation = 3;
    };
    class CUP_NVG_PVS15_green : NVGoggles
    {
        modelOptics = "";
        ace_nightvision_border = "z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
        ace_nightvision_bluRadius = 0.13;
        ace_nightvision_generation = 3;
    };
    class CUP_NVG_PVS15_winter : NVGoggles
    {
        modelOptics = "";
        ace_nightvision_border = "z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
        ace_nightvision_bluRadius = 0.13;
        ace_nightvision_generation = 3;
    };
};
