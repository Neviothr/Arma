#include "base_defines.hpp"

class RscTitles
{
	class NewArmAUI
	{
		duration = 99999;
		movingEnable = false;
		enableSimulation = false;
		idd = -1;
		class controls
		{
			class MyRscPicture : RscPicture
			{
				x = "SafeZoneX + (300 / 1920) * SafeZoneW";
				y = "SafeZoneY + (135 / 1080) * SafeZoneH";
				w = "(1200 / 1920) * SafeZoneW";
				h = "(720 / 1080) * SafeZoneH";
			};
			class MyRscButton : RscButton
			{
				text = "Zeus";
				x = "SafeZoneX + (315 / 1920) * SafeZoneW";
				y = "SafeZoneY + (150 / 1080) * SafeZoneH";
				w = "(90 / 1920) * SafeZoneW";
				h = "(44.9999999999999 / 1080) * SafeZoneH";
			};
			class MyRscButton2 : RscButton
			{
				text = "Virtual Arsenal";
				x = "SafeZoneX + (315 / 1920) * SafeZoneW";
				y = "SafeZoneY + (210 / 1080) * SafeZoneH";
				w = "(90 / 1920) * SafeZoneW";
				h = "(45.0000000000005 / 1080) * SafeZoneH";
			};
		};
	};
};