class CfgPatches
{
	class ace_sys_dogtag
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.62;
		requiredAddons[]=
		{
			"Extended_EventHandlers",
			"ace_main",
			"ace_c_weapon",
			"ace_sys_interaction"
		};
		version="1.14.0.597";
		author[]=
		{
			"Rocko",
			"Xeno"
		};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class ace_sys_dogtag
		{
			list[]=
			{
				"ace_sys_dogtag"
			};
		};
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_sys_dogtag
	{
		init="call ('\x\ace\addons\sys_dogtag\XEH_preInit.sqf' call SLX_XEH_COMPILE)";
		clientInit="call ('\x\ace\addons\sys_dogtag\XEH_preClientInit.sqf' call SLX_XEH_COMPILE)";
	};
};
class Extended_Respawn_EventHandlers
{
	class CAManBase
	{
		class ace_sys_dogtag
		{
			respawn="_this spawn ace_sys_dogtag_fnc_respawn";
		};
	};
};
class Extended_InitPost_EventHandlers
{
	class CAManBase
	{
		class ace_sys_dogtag
		{
			init="_this call ace_sys_dogtag_fnc_unitInit";
		};
	};
};
class RscTitles
{
	class ACE_DogTag
	{
		idd=666100;
		movingEnable=1;
		duration=5;
		fadein=1;
		fadeout=1;
		name="ACE_DogTag";
		onLoad="with uiNameSpace do {ACE_DogTag = _this select 0}";
		onUnload="";
		class controls
		{
			class ACE_DogTag_BG
			{
				idc=-1;
				type=0;
				style=48;
				colorBackground[]={0,0,0,0};
				colorText[]={0.89999998,0.89999998,0.89999998,1};
				font="Bitstream";
				sizeEx=0.023;
				x=0.75;
				y=0.34999999;
				w=0.25;
				h=0.15000001;
				text="\x\ace\addons\sys_dogtag\data\dt.paa";
			};
			class ACE_DogTag_Name
			{
				idc=666;
				type=0;
				colorText[]={0,0,0,0.80000001};
				font="Bitstream";
				colorBackground[]={255,255,255,0};
				text="";
				style=128;
				sizeEx=0.02;
				x=0.80500001;
				y=0.31;
				w=0.2;
				h=0.15000001;
			};
			class ACE_DogTag_Blood: ACE_DogTag_Name
			{
				idc=667;
				text="";
				y=0.33000001;
			};
			class ACE_DogTag_Branch: ACE_DogTag_Name
			{
				idc=668;
				text="";
				y=0.34999999;
			};
			class ACE_DogTag_Religion: ACE_DogTag_Name
			{
				idc=669;
				text="";
				y=0.37;
			};
		};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class ACE_DogTag: CA_Magazine
	{
		scope=2;
		ACE_Weight=0.090000004;
		model="\x\ace\addons\sys_dogtag\dogtag.p3d";
		displayName="$STR_ACE_DOG";
		picture="\x\ace\addons\sys_dogtag\data\m_dogtag_ca.paa";
		count=1;
		type=16;
		class Library
		{
			libTextDesc="$STR_ACE_DOGD";
		};
		class Armory
		{
			disabled=1;
		};
	};
};
class CfgWeapons
{
	class Default;
	class Put: Default
	{
		class ACE_Dummy_Utility;
		class ace_sys_dogtag: ACE_Dummy_Utility
		{
			magazines[]=
			{
				"ACE_DogTag"
			};
		};
	};
};
class ACE_SD_RscText
{
	type=0;
	idc=-1;
	style=0;
	x=0;
	y=0;
	w=0.30000001;
	h=0.029999999;
	sizeEx=0.023;
	colorBackground[]={0.5,0.5,0.5,0.75};
	colorText[]={0,0,0,1};
	font="Zeppelin32";
	text="";
	shadow=2;
};
class ACE_SD_RscText2
{
	access=0;
	type=0;
	idc=-1;
	colorBackground[]={0,0,0,0};
	colorText[]={0.87840003,0.84710002,0.65100002,1};
	text="";
	fixedWidth=0;
	x=0;
	y=0;
	h=0.037;
	w=0.30000001;
	style=0;
	shadow=2;
	font="Zeppelin32";
	SizeEx=0.039209999;
};
class ACE_SD_RscPicture
{
	type=0;
	idc=-1;
	style=48;
	x=0.1;
	y=0.1;
	w=0.40000001;
	h=0.2;
	sizeEx="(((100/36)/100)*0.9)";
	colorBackground[]={0,0,0,0};
	colorText[]={1,1,1,1};
	font="Zeppelin32";
	text="";
};
class ACE_ButtonBase
{
	type=16;
	x=0;
	y=0;
	class HitZone
	{
		left=0.0040000002;
		top=0.028999999;
		right=0.0040000002;
		bottom=0.028999999;
	};
	class ShortcutPos
	{
		left=0.0145;
		top=0.026000001;
		w=0.039215699;
		h=0.052287601;
	};
	class TextPos
	{
		left=0.050000001;
		top=0.034000002;
		right=0.0049999999;
		bottom=0.0049999999;
	};
	shortcuts[]={};
	textureNoShortcut="#(argb,8,8,3)color(0,0,0,0)";
	color[]={0.87840003,0.84710002,0.65100002,1};
	color2[]={0.94999999,0.94999999,0.94999999,1};
	colorDisabled[]={1,1,1,0.25};
	colorBackground[]={1,1,1,1};
	colorBackground2[]={1,1,1,0.40000001};
	class Attributes
	{
		font="Zeppelin32";
		color="#E5E5E5";
		align="left";
		shadow="true";
	};
	idc=-1;
	style=0;
	default=0;
	shadow=2;
	w=0.23;
	h=0.104575;
	periodFocus=1.2;
	periodOver=0.80000001;
	animTextureNormal="\ca\ui\data\ui_button_normal_ca.paa";
	animTextureDisabled="\ca\ui\data\ui_button_disabled_ca.paa";
	animTextureOver="\ca\ui\data\ui_button_over_ca.paa";
	animTextureFocused="\ca\ui\data\ui_button_focus_ca.paa";
	animTexturePressed="\ca\ui\data\ui_button_down_ca.paa";
	animTextureDefault="\ca\ui\data\ui_button_default_ca.paa";
	period=0.40000001;
	font="Zeppelin32";
	size=0.039209999;
	sizeEx=0.039209999;
	text="";
	soundEnter[]=
	{
		"\ca\ui\data\sound\onover",
		0.090000004,
		1
	};
	soundPush[]=
	{
		"\ca\ui\data\sound\new1",
		0,
		0
	};
	soundClick[]=
	{
		"\ca\ui\data\sound\onclick",
		0.07,
		1
	};
	soundEscape[]=
	{
		"\ca\ui\data\sound\onescape",
		0.090000004,
		1
	};
	action="";
	class AttributesImage
	{
		font="Zeppelin32";
		color="#E5E5E5";
		align="left";
	};
};
class ACE_ITEMSUIList
{
	w=0.27500001;
	h=0.039999999;
	colorSelect[]={0.023529001,0,0.031372499,1};
	colorText[]={0.023529001,0,0.031372499,1};
	colorBackground[]={0.94999999,0.94999999,0.94999999,1};
	colorSelectBackground[]={0.54299998,0.57419997,0.4102,1};
	colorScrollbar[]={0.023529001,0,0.031372499,1};
	arrowEmpty="\ca\ui\data\ui_arrow_combo_ca.paa";
	arrowFull="\ca\ui\data\ui_arrow_combo_active_ca.paa";
	wholeHeight=0.44999999;
	color[]={0,0,0,0.60000002};
	colorActive[]={0,0,0,1};
	colorDisabled[]={0,0,0,0.30000001};
	font="Zeppelin32";
	sizeEx=0.028999999;
	soundSelect[]=
	{
		"",
		0.1,
		1
	};
	soundExpand[]=
	{
		"",
		0.1,
		1
	};
	soundCollapse[]=
	{
		"",
		0.1,
		1
	};
	maxHistoryDelay=1;
	class ScrollBar
	{
		color[]={1,1,1,0.60000002};
		colorActive[]={1,1,1,1};
		colorDisabled[]={1,1,1,0.30000001};
		thumb="\ca\ui\data\ui_scrollbar_thumb_ca.paa";
		arrowFull="\ca\ui\data\ui_arrow_top_active_ca.paa";
		arrowEmpty="\ca\ui\data\ui_arrow_top_ca.paa";
		border="\ca\ui\data\ui_border_scroll_ca.paa";
	};
};
class ACE_ITEMSUIComboBox: ACE_ITEMSUIList
{
	type=5;
	style=0;
	idc=-1;
	sizeEx=0.025;
	wholeHeight=0.30000001;
	shadow=2;
};
class ACE_Items_RscShortcutButton
{
	type=16;
	idc=-1;
	style=0;
	default=0;
	w=0.183825;
	h=0.104575;
	color[]={0.54299998,0.57419997,0.4102,1};
	color2[]={0.94999999,0.94999999,0.94999999,1};
	colorBackground[]={1,1,1,1};
	colorbackground2[]={1,1,1,0.40000001};
	colorDisabled[]={1,1,1,0.25};
	periodFocus=1.2;
	periodOver=0.80000001;
	class HitZone
	{
		left=0.0040000002;
		top=0.028999999;
		right=0.0040000002;
		bottom=0.028999999;
	};
	class ShortcutPos
	{
		left=0.0145;
		top=0.026000001;
		w=0.039215699;
		h=0.052287601;
	};
	class TextPos
	{
		left=0.050000001;
		top=0.034000002;
		right=0.0049999999;
		bottom=0.0049999999;
	};
	animTextureNormal="\ca\ui\data\ui_button_normal_ca.paa";
	animTextureDisabled="\ca\ui\data\ui_button_disabled_ca.paa";
	animTextureOver="\ca\ui\data\ui_button_over_ca.paa";
	animTextureFocused="\ca\ui\data\ui_button_focus_ca.paa";
	animTexturePressed="\ca\ui\data\ui_button_down_ca.paa";
	animTextureDefault="\ca\ui\data\ui_button_default_ca.paa";
	period=0.40000001;
	font="Zeppelin32";
	size=0.039209999;
	sizeEx=0.039209999;
	text="";
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
	action="";
	class Attributes
	{
		font="Zeppelin32";
		color="#E5E5E5";
		align="left";
		shadow="true";
	};
	class AttributesImage
	{
		font="Zeppelin32";
		color="#E5E5E5";
		align="left";
	};
	textureNoShortcut="#(argb,8,8,3)color(0,0,0,0)";
};
class ACE_Items_RscShortcutButtonMain: ACE_Items_RscShortcutButton
{
	type=16;
	idc=-1;
	style=0;
	default=0;
	w=0.31372601;
	h=0.104575;
	color[]={0.54299998,0.57419997,0.4102,1};
	colorDisabled[]={1,1,1,0.25};
	class HitZone
	{
		left=0;
		top=0;
		right=0;
		bottom=0;
	};
	class ShortcutPos
	{
		left=0.020400001;
		top=0.026000001;
		w=0.039215699;
		h=0.052287601;
	};
	class TextPos
	{
		left=0.079999998;
		top=0.034000002;
		right=0.0049999999;
		bottom=0.0049999999;
	};
	animTextureNormal="\ca\ui\data\ui_button_main_normal_ca.paa";
	animTextureDisabled="\ca\ui\data\ui_button_main_disabled_ca.paa";
	animTextureOver="\ca\ui\data\ui_button_main_over_ca.paa";
	animTextureFocused="\ca\ui\data\ui_button_main_focus_ca.paa";
	animTexturePressed="\ca\ui\data\ui_button_main_down_ca.paa";
	animTextureDefault="\ca\ui\data\ui_button_main_normal_ca.paa";
	period=0.5;
	font="Zeppelin32";
	size=0.039209999;
	sizeEx=0.039209999;
	text="";
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
	action="";
	class Attributes
	{
		font="Zeppelin32";
		color="#E5E5E5";
		align="left";
		shadow="false";
	};
	class AttributesImage
	{
		font="Zeppelin32";
		color="#E5E5E5";
		align="false";
	};
};
class ACE_ItemsDialog
{
	idd=-1;
	movingEnable=1;
	onLoad="uiNamespace setVariable ['ACE_ItemsDialog', _this select 0];call ace_sys_dogtag_fnc_fill_itemsdialog";
	onUnLoad="uiNamespace setVariable ['ACE_ItemsDialog', displayNull]";
	objects[]={};
	class controlsBackground
	{
		class BackGround: ACE_SD_RscPicture
		{
			x=0;
			y=0.13500001;
			w=1.2549;
			h=0.75300002;
			colorBackground[]={0,0,0,0};
			text="\ca\ui\data\ui_background_controls_ca.paa";
		};
	};
	class controls
	{
		class ItemsCB: ACE_ITEMSUIComboBox
		{
			idc=100;
			text="";
			x=0.029999999;
			w=0.43000001;
			y=0.29499999;
			h=0.44;
			colorSelect[]={1,1,1,1};
			colorText[]={1,1,1,1};
			colorBackground[]={0.80000001,0.80000001,0.80000001,1};
			colorSelectBackground[]={0,0,0,1};
			colorScrollbar[]={0.2,0.2,0.2,1};
			arrowEmpty="\ca\ui\data\ui_arrow_combo_ca.paa";
			arrowFull="\ca\ui\data\ui_arrow_combo_active_ca.paa";
			wholeHeight=0.44999999;
			rowHeight=0.050000001;
			color[]={0.80000001,0.80000001,0.80000001,1};
			colorActive[]={0,0,0,1};
			colorDisabled[]={0,0,0,0.30000001};
			font="Zeppelin32";
			sizeEx=0.035;
			soundSelect[]=
			{
				"",
				0.1,
				1
			};
			soundExpand[]=
			{
				"",
				0.1,
				1
			};
			soundCollapse[]=
			{
				"",
				0.1,
				1
			};
			maxHistoryDelay=1;
			autoScrollSpeed=-1;
			autoScrollDelay=5;
			autoScrollRewind=0;
			class ScrollBar
			{
				color[]={1,1,1,0.60000002};
				colorActive[]={1,1,1,1};
				colorDisabled[]={1,1,1,0.30000001};
				thumb="\ca\ui\data\ui_scrollbar_thumb_ca.paa";
				arrowFull="\ca\ui\data\ui_arrow_top_active_ca.paa";
				arrowEmpty="\ca\ui\data\ui_arrow_top_ca.paa";
				border="\ca\ui\data\ui_border_scroll_ca.paa";
			};
			onLBSelChanged="_this call ace_sys_dogtag_fnc_lbselchanged";
		};
		class CloseButton: ACE_ButtonBase
		{
			idc=-1;
			text="Close";
			action="closeDialog 0";
			default="true";
			x=0.69999999;
			y=0.77999997;
		};
		class MainCaption: ACE_SD_RscText
		{
			x=0.039999999;
			y=0.13;
			w=0.25;
			h=0.1;
			sizeEx=0.035;
			colorBackground[]={1,1,1,0};
			colorText[]={0.64300001,0.57419997,0.4102,1};
			text="ACE ADDITIONAL ITEMS";
		};
		class CBCaption: ACE_SD_RscText
		{
			x=0.039999999;
			y=0.23999999;
			w=0.2;
			h=0.029999999;
			sizeEx=0.039000001;
			colorBackground[]={1,1,1,0};
			colorText[]={1,1,1,1};
			text="Select Item:";
		};
		class ACE_Logo: ACE_SD_RscPicture
		{
			x=0.87;
			y=0.138;
			w=0.1;
			h=0.1;
			colorBackground[]={0,0,0,0};
			text="\x\ace\addons\sys_dogtag\data\logo_ACE2_ca.paa";
		};
		class ItemCaption: ACE_SD_RscText
		{
			x=0.49000001;
			y=0.23999999;
			w=0.1;
			h=0.029999999;
			sizeEx=0.039000001;
			colorBackground[]={1,1,1,0};
			colorText[]={1,1,1,1};
			text="Selected:";
		};
		class ItemCaptionText: ItemCaption
		{
			idc=101;
			x=0.60000002;
			w=0.34999999;
			text="";
		};
		class ItemPic: ACE_SD_RscPicture
		{
			idc=102;
			x=0.49000001;
			y=0.29499999;
			w=0.25;
			h=0.25;
			colorBackground[]={0,0,0,0};
			text="\x\ace\addons\sys_dogtag\data\logo_ACE2_ca.paa";
		};
		class ItemCaption1: ACE_SD_RscText2
		{
			idc=110;
			x=0.49000001;
			y=0.52999997;
			w=0.1;
			h=0.023;
			sizeEx=0.027000001;
			text="";
		};
		class ItemText1: ACE_SD_RscText2
		{
			idc=111;
			x=0.60000002;
			y=0.52999997;
			w=0.34999999;
			h=0.023;
			sizeEx=0.027000001;
			text="";
		};
		class ItemCaption2: ItemCaption1
		{
			idc=112;
			y=0.56999999;
		};
		class ItemText2: ItemText1
		{
			idc=113;
			y=0.56999999;
			text="";
		};
		class ItemCaption3: ItemCaption1
		{
			idc=114;
			y=0.61000001;
		};
		class ItemText3: ItemText1
		{
			idc=115;
			y=0.61000001;
			text="";
		};
		class LayDownbutton: ACE_Items_RscShortcutButtonMain
		{
			idc=10;
			x=0.69999999;
			w=0.248;
			y=0.67000002;
			h=0.07;
			size=0.027000001;
			sizeEx=0.027000001;
			shadow=2;
			text="Put to ground";
		};
	};
};
