class CfgPatches
{
	class nev_waypointReplacement
	{
 		name = "Personal Waypoint Replacement";
 		author = "Neviothr";
  		units[] = {};
  		weapons[] = {};
  		requiredVersion = 1.0;
		requiredAddons[] = {"Extended_EventHandlers"};
	};
};

class Extended_PostInit_EventHandlers
{
	nev_waypointReplacement_Post_Init = "nev_waypointReplacement_Post_Init_Var = [] execVM ""\nev_waypointReplacement\waypointDistance.sqf""";
};