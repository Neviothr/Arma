class CfgPatches
{
	class 7R1P0D_nvg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"Extended_EventHandlers"};

	};
};

class Extended_PostInit_EventHandlers
{
  7R1P0D_nvg_Post_Init = "7R1P0D_nvg_Post_Init_Var = [] execVM ""\7R1P0D_nvg\NVscript.sqf""";
};
