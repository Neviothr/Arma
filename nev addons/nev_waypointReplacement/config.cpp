class CfgPatches
{
	class nev_waypointReplacement
	{
		name = "Personal Waypoint Replacement";
		author = "Neviothr";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Weapons_F"};

	};
};

class CfgFunctions
{
	class nev
	{
		class waypoint
		{
			class replacement_init
			{
				file = "nev_waypointReplacement\waypointDistance.sqf";
				preInit = 1;
			};
		};
	};
};
