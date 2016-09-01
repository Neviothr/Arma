class CfgPatches
{
	class nev_soldier
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Characters_F"};
	};
};
class CfgVehicleClasses
{
	class universal_soldier
	{
		displayName="Neviothr's Universal Soldier";
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class Nev_Soldier_blufor: B_Soldier_base_F
	{
		author = "Neviothr";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		displayName = "Universal Soldier";
		cost = 10000000;
		camouflage = 10000000;
		threat[] = {1, 1, 1};
		canDeactivateMines = true;
		engineer = true;
		attendant = 1;
		vehicleClass = "universal_soldier";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		accuracy = 0.0000001;
		audible = 1;
	};

	class O_Soldier_base_F;
	class nev_Soldier_opfor: O_Soldier_base_F
	{
		author = "Neviothr";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		displayName = "Universal Soldier";
		cost = 10000000;
		camouflage = 10000000;
		threat[] = {1, 1, 1};
		canDeactivateMines = true;
		engineer = true;
		attendant = 1;
		vehicleClass = "universal_soldier";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		accuracy = 0.0000001;
		audible = 1;
	};

	class I_Soldier_base_F;
	class nev_Soldier_independent: I_Soldier_base_F
	{
		author = "Neviothr";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		displayName = "Universal Soldier";
		cost = 10000000;
		camouflage = 10000000;
		threat[] = {1, 1, 1};
		canDeactivateMines = true;
		engineer = true;
		attendant = 1;
		vehicleClass = "universal_soldier";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		accuracy = 0.0000001;
		audible = 1;
	};
};
