#include "base_defines.hpp"

class NewArmAUI
{
	duration = 99999;
	idd = 912631;
	controls[] = {zeusButton,virtualArsenalButton};
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
		};
		class virtualArsenalButton: RscButton
		{
			text = "Virtual Arsenal";
			x = "SafeZoneX + (315 / 1920) * SafeZoneW";
			y = "SafeZoneY + (210 / 1080) * SafeZoneH";
			w = "(90 / 1920) * SafeZoneW";
			h = "(45.0000000000005 / 1080) * SafeZoneH";
		};
	};
};