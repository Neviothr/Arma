class CfgPatches
{
    class cx_nvg
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

    class cx_pvs14: NVGoggles
    {
        author = "cx64";
        modelOptics = "\cx_nvg\onetube";
        displayName = "PVS-14";
        scope = 2;
        scopeCurator = 2;

        class ItemInfo: ItemInfo
        {
            mass = 1;
        };
    };

    class cx_pvs15: cx_pvs14
    {
        author = "cx64";
        modelOptics = "\cx_nvg\twotube";
        displayName = "PVS-15";
        scope = 2;
        scopeCurator = 2;

        class ItemInfo: ItemInfo
        {
            mass = 1;
        };
    };
};
