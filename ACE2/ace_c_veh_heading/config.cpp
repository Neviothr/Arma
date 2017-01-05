class CfgPatches
{
	class ace_c_veh_heading
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.59;
		requiredAddons[]=
		{
			"ace_main",
			"ace_c_vehicle"
		};
		author[]=
		{
			"zGuba"
		};
		version="1.12.1.510";
	};
};
class RscText;
class RscIGText;
class RscIGProgress;
class RscEdit;
class RscIGUIText;
class RscIGUIValue;
class RscListBox;
class RscPicture;
class RscInGameUI
{
	class RscUnitInfo;
	class UnitInfoShip: RscUnitInfo
	{
		movingEnable=0;
		controls[]=
		{
			"CA_Weapon",
			"CA_Mode",
			"CA_Ammo",
			"CA_ValueFuelBackground",
			"CA_ValueFuel",
			"CA_GunnerWeapon",
			"CA_SpeedBackground",
			"CA_TextSpeed",
			"CA_Speed",
			"CA_ValueArmor",
			"CA_TextFlares",
			"CA_TextFlaresMode",
			"CA_HeadingBackground",
			"CA_Heading"
		};
		class Background: RscText
		{
			idc=124;
			style=128;
			x=0;
			y=0.138;
			w=0.33000001;
			h=0.090000004;
			text="";
			colorBackground[]={0.2,0.15000001,0.1,0.80000001};
			colorText[]={0,0,0,0};
			font="TahomaB";
			sizeEx=0;
			fixedWidth=0;
		};
		class Background2: RscText
		{
			idc=124;
			style=128;
			x=0.67000002;
			y=0.138;
			w=0.33000001;
			h=0.090000004;
			text="";
			colorBackground[]={0.2,0.15000001,0.1,0.80000001};
			colorText[]={0,0,0,0};
			font="TahomaB";
			sizeEx=0;
			fixedWidth=0;
		};
		class Speed: RscIGText
		{
			idc=121;
			x=0.0049999999;
			y=0.145;
			w=0.2;
			text="ERROR - replace";
		};
		class Alt: RscIGText
		{
			idc=122;
			style="0x01+0x100";
			x=0.16;
			y=0.145;
			w=0.16;
			text="ERROR - replace";
		};
		class TextArmor: RscIGText
		{
			x=0.68000001;
			y=0.145;
			w=0.19;
			text="$STR_DN_ARMOR";
		};
		class ValueArmor: RscIGText
		{
			idc=111;
			x=0.81999999;
			y=0.155;
			w=0.16500001;
			h=0.025;
		};
		class TextFuel: RscIGText
		{
			x=0.68000001;
			y=0.185;
			w=0.19;
			text="$STR_DN_FUEL";
		};
		class ValueFuel: RscIGProgress
		{
			idc=113;
			x=0.81999999;
			y=0.19;
			w=0.16500001;
			h=0.025;
		};
		class Weapon: RscIGText
		{
			idc=118;
			x=0.0049999999;
			y=0.185;
			w=0.25;
			text="ERROR - replace";
		};
		class Ammo: RscIGText
		{
			idc=119;
			style="0x01 + 0x100";
			x=0.17;
			y=0.19;
			w=0.15000001;
			text="ERROR - replace";
		};
		class Heading: RscIGText
		{
			idc=148;
			style="0x00  + 0x100";
			x=0.017000001;
			y=0.0099999998;
			w=0.17;
		};
		class CA_HeadingBackground: RscEdit
		{
			idc=-1;
			sizeEx=0.034000002;
			colorBackground[]={0,0,0,0};
			colorText[]={0.40000001,0.67449999,0.2784,1};
			colorSelection[]={0,0,0,0};
			style="0x02 + 0x40";
			type=0;
			x=0.46900001;
			y="0.017 + SafeZoneY";
			w=0.061000001;
			h=0.033;
		};
		class CA_Heading: RscIGUIValue
		{
			idc=148;
			style=2;
			x=0.44999999;
			y="0.015 + SafeZoneY";
			w=0.1;
		};
		idd=300;
		updateWidthByWeapon=0;
		updateHeightByCrew=0;
		updateWidthByCrew=0;
		class CA_Mode: RscIGUIText
		{
			idc=149;
			style=0;
			x="(SafeZoneW + SafeZoneX) - (1 - 0.761)";
			y="0.054 + SafeZoneY";
			w=0.214;
			h=0.039000001;
		};
		class CA_Ammo: RscIGUIValue
		{
			idc=119;
			style=1;
			x="(SafeZoneW + SafeZoneX) - (1 - 0.761)";
			y="0.054 + SafeZoneY";
			w=0.214;
			h=0.039000001;
		};
		class CA_Weapon: RscIGUIText
		{
			idc=118;
			style=0;
			x="(SafeZoneW + SafeZoneX) - (1 - 0.761)";
			y="0.015 + SafeZoneY";
			w=0.214;
			h=0.039000001;
		};
		class CA_GunnerWeapon: RscIGUIText
		{
			idc=150;
			style=0;
			x="(SafeZoneW + SafeZoneX) - (1 - 0.761)";
			y="0.132 + SafeZoneY";
			w=0.214;
			h=0.039000001;
			SizeEx=0.034000002;
		};
		class CA_SpeedBackground: RscEdit
		{
			idc=-1;
			sizeEx=0.034000002;
			colorBackground[]={0,0,0,0};
			colorText[]={0.40000001,0.67449999,0.2784,1};
			colorSelection[]={0,0,0,0};
			style="0x02 + 0x40";
			shadow=2;
			type=0;
			x=0.31400001;
			y="0.017 + SafeZoneY";
			w=0.059999999;
			h=0.033;
		};
		class CA_TextSpeed: RscIGUIText
		{
			style=0;
			x=0.257;
			y="0.015 + SafeZoneY";
			w=0.12;
			text="SPD";
		};
		class CA_Speed: RscIGUIValue
		{
			idc=121;
			style=1;
			x=0.257;
			y="0.015 + SafeZoneY";
			w=0.12;
		};
		class CA_ValueFuelBackground: RscPicture
		{
			idc=-1;
			shadow=2;
			x="0.018 + SafeZoneX";
			y="0.01 + SafeZoneY";
			w=0.019607799;
			h=0.20915;
			colorText[]={0.40000001,0.67449999,0.2784,1};
			text="\ca\ui\data\ui_fuel_background.paa";
		};
		class CA_ValueFuel: RscIGProgress
		{
			idc=113;
			x="0.02 + SafeZoneX";
			y="0.036 + SafeZoneY";
			w=0.0099999998;
			h=0.18000001;
			texture="\ca\ui\data\igui_fuel_progress.paa";
		};
		class CA_ValueArmor: RscListBox
		{
			idc=111;
			sizeEx=0.035250001;
			x="0.040 + SafeZoneX";
			y="0.016 + SafeZoneY";
			w=0.035700001;
			h=0.75999999;
		};
		class CA_TextFlaresMode: RscIGUIText
		{
			idc=152;
			style=0;
			sizeEx=0.02674;
			x="0.078 + SafeZoneX";
			y="0.012 + SafeZoneY";
			w="0.161*SafezoneW";
		};
		class CA_TextFlares: RscIGUIValue
		{
			idc=151;
			style=1;
			sizeEx=0.02674;
			x="0.078  + SafeZoneX";
			y="0.012 + SafeZoneY";
			w="0.161*SafezoneW";
		};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		unitInfoType="UnitInfoShip";
	};
};
