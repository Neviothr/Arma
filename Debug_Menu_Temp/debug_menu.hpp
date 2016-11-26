#include "base_defines.hpp"

class NewArmAUI
{
	duration = 99999;
	idd = 912631;
	class controls
	{
		class zeusButton: RscButton
		{
			text = "Open Zeus";
			x = "SafeZoneX + (315 / 1920) * SafeZoneW";
			y = "SafeZoneY + (150 / 1080) * SafeZoneH";
			w = "(90 / 1920) * SafeZoneW";
			h = "(45 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; execVM ""NEV_fnc_openZeus.sqf""";
		};
		class virtualArsenalButton: RscButton
		{
			text = "Virtual arsenal";
			x = "SafeZoneX + (315 / 1920) * SafeZoneW";
			y = "SafeZoneY + (210 / 1080) * SafeZoneH";
			w = "(90 / 1920) * SafeZoneW";
			h = "(45 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; [""Open"",true] spawn BIS_fnc_arsenal";
		};
		class teleportButton: RscButton
		{
			text = "Teleport";
			x = "SafeZoneX + (315 / 1920) * SafeZoneW";
			y = "SafeZoneY + (270 / 1080) * SafeZoneH";
			w = "(90 / 1920) * SafeZoneW";
			h = "(45 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; execVM ""NEV_fnc_teleport.sqf""";
		};
		class debugConsoleButton: RscButton
		{
			text = "Debug console";
			x = "SafeZoneX + (315 / 1920) * SafeZoneW";
			y = "SafeZoneY + (330 / 1080) * SafeZoneH";
			w = "(90 / 1920) * SafeZoneW";
			h = "(45 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; createDialog ""RscDisplayDebugPublic""";
		};
		class addUnitsToZeusButton: RscButton
		{
			text = "Add units";
			x = "SafeZoneX + (315 / 1920) * SafeZoneW";
			y = "SafeZoneY + (390 / 1080) * SafeZoneH";
			w = "(90 / 1920) * SafeZoneW";
			h = "(45 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "execVM ""NEV_fnc_addUnitsToZeus.sqf""";
		};
	};
};