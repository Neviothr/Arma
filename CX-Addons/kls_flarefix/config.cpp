/*
 * See issue 0018397 - "Flares are useless":
 *
 * http://feedback.arma3.com/view.php?id=18397
 *
 */
class CfgPatches
{
	class KLS_FlareFix
	{
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

