#include "BIS_AddonInfo.hpp"
class CfgPatches 
{
	class CH_brightNights
	{
		units[]={};
		weapons[]={};
		requiredAddons[]={};
		author="Champ";
	};
};
class CfgFunctions
{
	class CH
	{
		tag = "CH";
		class brightNights
		{
			file = "\CH_brightNights\functions";
			class brightNights {postInit = 1;};
		};
	};
};
