class CfgPatches
{
    class NEV_NVGs
    {
        units[]={};
        weapons[]={};
        requiredVersion=1.0;
        requiredAddons[]={"A3_Weapons_F"};
    };
};

class CfgWeapons
{
    class Binocular;
    class NVGoggles
    {
        class ItemInfo;
    };

    class NEV_PVS14: NVGoggles
    {
        author = "Neviothr";
        modelOptics = "\nev_nvg\onetube";
        displayName = "AN/PVS-14";
        scope = 2;
        scopeCurator = 2;

        class ItemInfo: ItemInfo
        {
            mass = 20;
        };
    };

    class NEV_PVS15: NEV_PVS14
    {
        modelOptics = "\nev_nvg\twotube";
        displayName = "AN/PVS-15";

        class ItemInfo: ItemInfo
        {
            mass = 20;
        };
    };
};