class CfgPatches
{
	class nev_flareFix
	{
		name = "Neviothr's Brighter Flares";
		author = "Neviothr";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_Weapons_F"};
	};
};

class CfgAmmo
{
	class FlareCore;
	class FlareBase;
	class Flare_82mm_AMOS_White: FlareCore
	{
		timeToLive = 35;
		brightness = 4000;
		intensity  = 5000000;
	};
	class F_40mm_White: FlareBase
	{
		timeToLive = 35;
		brightness = 4000;
		intensity  = 5000000;
	};
	class F_20mm_White: FlareBase
	{
		timeToLive = 35;
		brightness = 4000; // 8 (1250:1)
		intensity  = 5000000; // 10000
	};
	class F_Signal_Green: FlareBase
	{
		timeToLive = 35;
		brightness = 4000;
		intensity  = 5000000;
	};
};
