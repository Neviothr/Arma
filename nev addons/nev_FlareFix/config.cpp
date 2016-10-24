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
		timeToLive = 120;
		brightness = 4000000;
		intensity  = 500000;
	};
	class F_40mm_White: FlareBase
	{
		timeToLive = 120;
		brightness = 4000000;
		intensity  = 500000;
	};
	class F_20mm_White: FlareBase
	{
		timeToLive = 120;
		brightness = 4000000;
		intensity  = 500000;
	};
	class F_Signal_Green: FlareBase
	{
		timeToLive = 120;
		brightness = 4000000;
		intensity  = 500000;
	};
};
