#include "BIS_AddonInfo.hpp"

class CfgPatches 
{
	class VCOM_AI 
	{
		units[] = {};
		weapons[] = {}; 
		requiredAddons[] = {};	
		author[]= {"Dominic Smith"}; 		
	};
};

class CfgFunctions
{
	class VCOM
	{
		class VCOM_Initialization
		{
			class Init
			{
				file = "\vcomai\init.sqf";
				preInit = 1;
			};
		};

	};
};
