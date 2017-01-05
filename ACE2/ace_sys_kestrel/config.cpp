class CfgPatches
{
	class ace_sys_kestrel
	{
		units[]={};
		weapons[]=
		{
			"ACE_Kestrel4500"
		};
		requiredVersion=1.62;
		requiredAddons[]=
		{
			"Extended_EventHandlers",
			"ace_main",
			"ace_c_weapon",
			"ace_settings",
			"ace_sys_interaction"
		};
		version="1.14.0.590";
		author[]=
		{
			"Rocko"
		};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class ace_sys_kestrel
		{
			list[]=
			{
				"ace_sys_kestrel"
			};
		};
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_sys_kestrel
	{
		clientInit="call ('\x\ace\addons\sys_kestrel\XEH_preClientInit.sqf' call SLX_XEH_COMPILE)";
	};
};
class CfgWeapons
{
	class ACE_Item;
	class ACE_Kestrel4500: ACE_Item
	{
		scope=2;
		displayName="Kestrel 4500";
		picture="\x\ace\addons\sys_kestrel\data\equip\w_kestrel4500_ca.paa";
		descriptionShort="Kestrel 4500";
		model="\x\ace\addons\sys_kestrel\kestrel4500";
		ACE_Weight=0.102;
	};
};
class ACE_Kestrel4500_RscText
{
	type=0;
	idc=-1;
	colorBackground[]={0,0,0,0};
	colorText[]={0.54299998,0.57419997,0.4102,1};
	text="";
	x=0;
	y=0;
	h=0.037;
	w=0.30000001;
	style=256;
	font="TahomaB";
	SizeEx=0.039209999;
};
class ACE_Kestrel4500_RscButton
{
	text="";
	colorText[]={0,0,0,0};
	colorDisabled[]={0,0,0,0};
	colorBackground[]={0,0,0,0};
	colorBackgroundDisabled[]={0,0,0,0};
	colorBackgroundActive[]={0,0,0,0};
	colorFocused[]={0,0,0,0};
	colorShadow[]={0,0,0,0};
	colorBorder[]={0,0,0,0};
	soundEnter[]=
	{
		"\ca\ui\data\sound\mouse2",
		0.090000004,
		1
	};
	soundPush[]=
	{
		"\ca\ui\data\sound\new1",
		0.090000004,
		1
	};
	soundClick[]=
	{
		"\ca\ui\data\sound\mouse3",
		0.07,
		1
	};
	soundEscape[]=
	{
		"\ca\ui\data\sound\mouse1",
		0.090000004,
		1
	};
	type=1;
	style="0x02 + 0x100";
	x=0;
	y=0;
	w=0.095588997;
	h=0.039216001;
	font="Zeppelin32";
	sizeEx=0.039209999;
	offsetX=0.003;
	offsetY=0.003;
	offsetPressedX=0.0020000001;
	offsetPressedY=0.0020000001;
	borderSize=0;
};
class ACE_Kestrel4500
{
	name="ACE_Kestrel4500";
	onLoad="_this call ace_sys_kestrel_fnc_onload";
	onUnLoad="ace_sys_kestrel_kestrel_on= false;";
	idd=-1;
	movingEnable=1;
	controlsBackground[]={};
	objects[]={};
	class controls
	{
		class BACKGROUND
		{
			moving=1;
			type=0;
			font="Zeppelin32";
			SizeEX=0.025;
			idc=-1;
			style=48;
			x="SafeZoneX+ 0.408907";
			y="SafeZoneY+ 0.438929";
			w=0.30476192;
			h=0.91428572;
			colorBackground[]={1,1,1,1};
			colorText[]={1,1,1,1};
			text="\x\ace\addons\sys_kestrel\data\dialog\kestral4500_dialog_ca.paa";
		};
		class EXIT: ACE_Kestrel4500_RscButton
		{
			idc=-1;
			x="SafeZoneX+ 0.478907";
			y="SafeZoneY+ 1.20893";
			w=0.029999999;
			h=0.035;
			action="closeDialog 0";
			colorBackground[]={0,0,0,0};
		};
		class TOP: ACE_Kestrel4500_RscButton
		{
			idc=-1;
			x="SafeZoneX+ 0.53";
			y="SafeZoneY+ 1.06393";
			w=0.059999999;
			h=0.029999999;
			colorBackground[]={0,0,0,0};
		};
		class BOTTOM: TOP
		{
			idc=-1;
			y="SafeZoneY+ 1.18893";
			w=0.059999999;
			h=0.029999999;
		};
		class MIDDLE: TOP
		{
			idc=-1;
			y="SafeZoneY+ 1.12393";
			w=0.059999999;
			h=0.029999999;
			action="ace_sys_kestrel_cal= 1";
		};
		class LEFT: ACE_Kestrel4500_RscButton
		{
			idc=-1;
			x="SafeZoneX+ 0.493907";
			y="SafeZoneY+ 1.10893";
			w=0.02;
			h=0.059999999;
			colorBackground[]={0,0,0,0};
			action="ace_sys_kestrel_mode= ace_sys_kestrel_mode+ 1";
		};
		class RIGHT: LEFT
		{
			idc=-1;
			x="SafeZoneX+ 0.608907";
			action="ace_sys_kestrel_mode= ace_sys_kestrel_mode- 1";
		};
		class TOP_LEFT: ACE_Kestrel4500_RscButton
		{
			idc=-1;
			x="SafeZoneX+ 0.488907";
			y="SafeZoneY+ 1.02893";
			w=0.029999999;
			h=0.039999999;
			colorBackground[]={0,0,0,0};
		};
		class TOP_RIGHT: TOP_LEFT
		{
			idc=-1;
			x="SafeZoneX+ 0.608907";
		};
		class TEXT_TITLE: ACE_Kestrel4500_RscText
		{
			idc=10;
			type=0;
			x="SafeZoneX+ 0.493907";
			y="SafeZoneY+ 0.818929";
			w=0.15000001;
			h=0.029999999;
			colorBackground[]={0,0,0,0};
			colorText[]={0,0,0,1};
			style="0x00";
			sizeEx=0.027000001;
			text="Crosswind";
		};
		class TEXT_DATA1: TEXT_TITLE
		{
			idc=11;
			y="SafeZoneY+ 0.818929 + 0.03";
			style="0x01";
			sizeEx=0.029999999;
		};
		class TEXT_DATA2: TEXT_DATA1
		{
			idc=12;
			y="SafeZoneY+ 0.818929 + ((0.03) * 2)";
			style="0x02";
			sizeEx=0.027000001;
		};
		class TEXT_DATA3: TEXT_DATA1
		{
			idc=13;
			y="SafeZoneY+ 0.818929 + ((0.03) * 3)";
			style="0x02";
			sizeEx=0.027000001;
		};
	};
};
