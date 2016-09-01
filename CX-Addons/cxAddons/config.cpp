class CfgPatches
{
	class nev_waypoint
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"Extended_EventHandlers"};

	};
};

class Extended_PostInit_EventHandlers
{
  nev_waypoint_Post_Init = "TAG_myAddon_Post_Init_Var = [] execVM ""\cxAddons\waypointDistance.sqf""";
};
