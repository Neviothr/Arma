#include "base_defines.hpp"

class NewArmAUI
{
	duration = 99999;
	idd = 17000;
	class controls
	{
		// A button to open Zeus
		class zeusButton: RscButton
		{
			text = "Open Zeus";
			x = "SafeZoneX + (315 / 1920) * SafeZoneW";
			y = "SafeZoneY + (150 / 1080) * SafeZoneH";
			w = "(90 / 1920) * SafeZoneW";
			h = "(45 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; execVM ""\f\NEV_fnc_openZeus.sqf""";
		};

		// A button to open the virtual aresnal
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

		// A button to use a teleportion function
		class teleportButton: RscButton
		{
			text = "Teleport";
			x = "SafeZoneX + (315 / 1920) * SafeZoneW";
			y = "SafeZoneY + (270 / 1080) * SafeZoneH";
			w = "(90 / 1920) * SafeZoneW";
			h = "(45 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; execVM ""\f\NEV_fnc_teleport.sqf""";
		};

		// A button to open the BI debug console
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

		// A button to add all units and vehicles to Zeus
		class addUnitsToZeusButton: RscButton
		{
			text = "Add to zeus";
			x = "SafeZoneX + (315 / 1920) * SafeZoneW";
			y = "SafeZoneY + (390 / 1080) * SafeZoneH";
			w = "(90 / 1920) * SafeZoneW";
			h = "(45 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; execVM ""\f\NEV_fnc_addUnitsToZeus.sqf""";
		};

		// A slider to change time of day
		class timeSlider: RscSlider
		{
		    idc = 17001;
		    x = "SafeZoneX + (450 / 1920) * SafeZoneW";
			y = "SafeZoneY + (155 / 1080) * SafeZoneH";
		    w = 0.2;
		    h = 0.03;
		    type = CT_SLIDER;
		    style = SL_HORZ;
		    onSliderPosChanged = "hint format[""%1"",_this];";
		};

		// A slider to change day
		class daySlider: RscSlider
		{
		    idc = 17002;
		    x = "SafeZoneX + (450 / 1920) * SafeZoneW";
			y = "SafeZoneY + (190 / 1080) * SafeZoneH";
		    w = 0.2;
		    h = 0.03;
		    type = CT_SLIDER;
		    style = SL_HORZ;
		    onSliderPosChanged = "hint format[""%1"",_this];";
		};

		// A slider to change month
		class monthSlider: RscSlider
		{
		    idc = 17003;
		    x = "SafeZoneX + (450 / 1920) * SafeZoneW";
			y = "SafeZoneY + (225 / 1080) * SafeZoneH";
		    w = 0.2;
		    h = 0.03;
		    type = CT_SLIDER;
		    style = SL_HORZ;
		    onSliderPosChanged = "hint format[""%1"",_this];";
		};

		// A slider to change year
		class yearSlider: RscSlider
		{
		    idc = 17004;
		    x = "SafeZoneX + (450 / 1920) * SafeZoneW";
			y = "SafeZoneY + (260 / 1080) * SafeZoneH";
		    w = 0.2;
		    h = 0.03;
		    type = CT_SLIDER;
		    style = SL_HORZ;
		    onSliderPosChanged = "hint format[""%1"",_this];";
		};

		// A slider to change overcast/cloud cover
		class cloudSlider: RscSlider
		{
		    idc = 17005;
		    x = "SafeZoneX + (450 / 1920) * SafeZoneW";
			y = "SafeZoneY + (295 / 1080) * SafeZoneH";
		    w = 0.2;
		    h = 0.03;
		    type = CT_SLIDER;
		    style = SL_HORZ;
		    onSliderPosChanged = "hint format[""%1"",_this];";
		};

		// A slider to change lightning frequancy
		class lightningSlider: RscSlider
		{
		    idc = 17006;
		    x = "SafeZoneX + (450 / 1920) * SafeZoneW";
			y = "SafeZoneY + (330 / 1080) * SafeZoneH";
		    w = 0.2;
		    h = 0.03;
		    type = CT_SLIDER;
		    style = SL_HORZ;
		    onSliderPosChanged = "hint format[""%1"",_this];";
		};

		// A slider to change wind speed
		class windSlider: RscSlider
		{
		    idc = 17007;
		    x = "SafeZoneX + (450 / 1920) * SafeZoneW";
			y = "SafeZoneY + (365 / 1080) * SafeZoneH";
		    w = 0.2;
		    h = 0.03;
		    type = CT_SLIDER;
		    style = SL_HORZ;
		    onSliderPosChanged = "hint format[""%1"",_this];";
		};

		// A silder to change fog effects
		class fogSlider: RscSlider
		{
		    idc = 17008;
		    x = "SafeZoneX + (450 / 1920) * SafeZoneW";
			y = "SafeZoneY + (400 / 1080) * SafeZoneH";
		    w = 0.2;
		    h = 0.03;
		    type = CT_SLIDER;
		    style = SL_HORZ;
		    onSliderPosChanged = "hint format[""%1"",_this];";
		};

		// A silder to change wave strength
		class waveSlider: RscSlider
		{
		    idc = 17009;
		    x = "SafeZoneX + (450 / 1920) * SafeZoneW";
			y = "SafeZoneY + (435 / 1080) * SafeZoneH";
		    w = 0.2;
		    h = 0.03;
		    type = CT_SLIDER;
		    style = SL_HORZ;
		    onSliderPosChanged = "hint format[""%1"",_this];";
		};
	};
};