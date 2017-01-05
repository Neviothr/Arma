class CfgPatches
{
	class ace_sys_recoildust
	{
		units[]={};
		requiredVersion=1.62;
		requiredAddons[]=
		{
			"Extended_EventHandlers",
			"ace_main",
			"CAWeapons",
			"CAWeapons2"
		};
		version="1.14.0.576";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_sys_recoildust
	{
		clientInit="call ('\x\ace\addons\sys_recoildust\XEH_preClientInit.sqf' call SLX_XEH_COMPILE)";
	};
};
class Extended_FiredBIS_EventHandlers
{
	class CAManBase
	{
		class ace_sys_recoildust
		{
			clientFiredBis="_this call ace_sys_recoildust_fnc_fired";
		};
	};
};
