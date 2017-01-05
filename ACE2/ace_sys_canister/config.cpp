class CfgPatches
{
	class ace_sys_canister
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.62;
		requiredAddons[]=
		{
			"Extended_EventHandlers",
			"ace_c_vehicle",
			"ace_main"
		};
		version="1.14.0.581";
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class ace_sys_canister
		{
			list[]=
			{
				"ace_sys_canister"
			};
		};
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_sys_canister
	{
		init="call ('\x\ace\addons\sys_canister\XEH_preInit.sqf' call SLX_XEH_COMPILE)";
	};
};
class Extended_FiredBIS_EventHandlers
{
	class M1A1
	{
		ace_sys_canister="if (local (_this select 0) && {(isNumber (configFile >> 'CfgAmmo' >> (_this select 4) >> 'ACE_DISP'))} && {(!isNull (_this select 6))}) then {_this call ace_sys_canister_fnc_fired}";
	};
	class T72_Base
	{
		ace_sys_canister="if (local (_this select 0) && {(isNumber (configFile >> 'CfgAmmo' >> (_this select 4) >> 'ACE_DISP'))} && {(!isNull (_this select 6))}) then {_this call ace_sys_canister_fnc_fired}";
	};
	class T90
	{
		ace_sys_canister="if (local (_this select 0) && {(isNumber (configFile >> 'CfgAmmo' >> (_this select 4) >> 'ACE_DISP'))} && {(!isNull (_this select 6))}) then {_this call ace_sys_canister_fnc_fired}";
	};
};
class CfgAmmo
{
	class BulletBase;
	class ACE_M1028_Pellet: BulletBase
	{
		model="\x\ace\addons\sys_canister\ace_canister.p3d";
		ACE_DISP=30;
		ACE_PELLETCOUNT=100;
	};
};
