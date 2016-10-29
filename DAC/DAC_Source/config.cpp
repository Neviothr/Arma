class CfgPatches
{
	class DAC_Source
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_Data_F"};
		requiredVersion = 0.1;
		author = "Silola";
	};
};

class CfgVehicleClasses
{
	class DAC_Source		{displayName = "DAC";};
	class DAC_EUPlants		{displayName = "DAC: EU-Plants";};
	class DAC_EURocks		{displayName = "DAC: EU-Rocks";};
};

class CfgVehicles
{
	class Logic;
	class DAC_Source_Intern : Logic {
	displayName = "DAC_Intern";vehicleClass = "DAC_Source";
	class EventHandlers {Init = "_this execVM ""\DAC_Source\Init_Intern.sqf"" ";};
	};
	class DAC_Source_Extern : Logic {
	displayName = "DAC_Extern";vehicleClass = "DAC_Source";
	class EventHandlers {Init = "_this execVM ""\DAC_Source\Init_Extern.sqf"" ";};
	};
	#include <eu.hpp>
};
