class CfgPatches
{
	class ace_sys_grenadethrow2
	{
		units[]=
		{
			"ACE_Grenade_Geometry"
		};
		weapons[]={};
		requiredVersion=1.62;
		requiredAddons[]=
		{
			"ace_sys_grenadethrow"
		};
		version="1.14.0.590";
		author[]=
		{
			"Nou"
		};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class ace_sys_grenadethrow2
		{
			list[]=
			{
				"ace_sys_grenadethrow2"
			};
		};
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_sys_grenadethrow2
	{
		clientInit="call ('\x\ace\addons\sys_grenadethrow2\XEH_preClientInit.sqf' call SLX_XEH_COMPILE)";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_sys_grenadethrow2
	{
		clientInit="call ('\x\ace\addons\sys_grenadethrow2\XEH_postClientInit.sqf' call SLX_XEH_COMPILE)";
	};
};
class CfgWeapons
{
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		class ThrowMuzzle: GrenadeLauncher
		{
			reloadTime=1;
			magazineReloadTime=1;
			optics=0;
			scopeWeapon=0;
			scopeMagazine=0;
		};
	};
};
class CfgVehicles
{
	class ACE_Grenade_Geometry;
	class ACE_Grenade_Geometry_Small: ACE_Grenade_Geometry
	{
		model="\x\ace\addons\sys_grenadethrow2\ace_grenade_helper3.p3d";
	};
};
