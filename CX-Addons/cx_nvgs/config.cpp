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
		displayName = "Custom NVGs";
		modelOptics="\cx_nvg\twotube";
		Scope=2;
		ScopeCurator=2;
		class ItemInfo
		{
			mass = 1;
		};
	};
};
