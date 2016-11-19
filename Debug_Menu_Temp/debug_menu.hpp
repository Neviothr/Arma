#include "base_defines.hpp"

class NewArmAUI
{
	duration = 99999;
	idd = 912631;
	class controls
	{
		class zeusButton: RscButton
		{
			text = "Zeus";
			x = "SafeZoneX + (315 / 1920) * SafeZoneW";
			y = "SafeZoneY + (150 / 1080) * SafeZoneH";
			w = "(90 / 1920) * SafeZoneW";
			h = "(44.9999999999999 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; execVM ""NEV_fnc_openZeus.sqf""";
		};
		class virtualArsenalButton: RscButton
		{
			text = "Virtual Arsenal";
			x = "SafeZoneX + (315 / 1920) * SafeZoneW";
			y = "SafeZoneY + (210 / 1080) * SafeZoneH";
			w = "(90 / 1920) * SafeZoneW";
			h = "(45.0000000000005 / 1080) * SafeZoneH";
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
			text = "Debug Console";
			x = "SafeZoneX + (315 / 1920) * SafeZoneW";
			y = "SafeZoneY + (329.999999999999 / 1080) * SafeZoneH";
			w = "(90 / 1920) * SafeZoneW";
			h = "(45.0000000000005 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; createDialog ""RscDisplayDebugPublic""";
		};
		class roundTypeList: RscCombo
		{
			text = "Round Type";
			x = "SafeZoneX + (435 / 1920) * SafeZoneW";
			y = "SafeZoneY + (150 / 1080) * SafeZoneH";
			w = "(105 / 1920) * SafeZoneW";
			h = "(44.9999999999999 / 1080) * SafeZoneH";
		};
		class roundCountList: RscCombo
		{
			text = "Round Count";
			x = "SafeZoneX + (435 / 1920) * SafeZoneW";
			y = "SafeZoneY + (210 / 1080) * SafeZoneH";
			w = "(105 / 1920) * SafeZoneW";
			h = "(45.0000000000005 / 1080) * SafeZoneH";
		};
		class roundSpreadList: RscCombo
		{
			text = "Round Spread";
			x = "SafeZoneX + (435 / 1920) * SafeZoneW";
			y = "SafeZoneY + (270 / 1080) * SafeZoneH";
			w = "(105 / 1920) * SafeZoneW";
			h = "(45 / 1080) * SafeZoneH";
		};
		class callFireMissionButton: RscButton
		{
			text = "Call Fire Mission";
			x = "SafeZoneX + (429.166666666667 / 1920) * SafeZoneW";
			y = "SafeZoneY + (330.866666666667 / 1080) * SafeZoneH";
			w = "(109 / 1920) * SafeZoneW";
			h = "(46 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
		};
	};
};