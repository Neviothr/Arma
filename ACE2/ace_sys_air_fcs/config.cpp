class CfgPatches
{
	class ace_sys_air_fcs
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.62;
		requiredAddons[]=
		{
			"Extended_EventHandlers",
			"ace_main",
			"ace_sys_vehicle",
			"ace_sys_missileguidance",
			"ace_sys_mfd"
		};
		version="1.14.0.593";
		author[]=
		{
			"Headspace",
			"q1184",
			"zGuba"
		};
		class ACE_Options
		{
			title="FCS (Air)";
			group="VEH";
			class Lase
			{
				title="Toggle Laser";
			};
		};
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_sys_air_fcs
	{
		init="call ('\x\ace\addons\sys_air_fcs\XEH_preInit.sqf' call SLX_XEH_COMPILE)";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_sys_air_fcs
	{
		clientInit="call ('\x\ace\addons\sys_air_fcs\XEH_postClientInit.sqf' call SLX_XEH_COMPILE)";
	};
};
class Extended_Init_EventHandlers
{
	class Mi24_P
	{
		class ace_sys_air_fcs_dot
		{
			clientInit="if (player in (_this select 0)) then { [] spawn ace_sys_air_fcs_fnc_enableDot}";
		};
	};
};
class Extended_FiredBIS_EventHandlers
{
	class AH1_Base
	{
		class ace_sys_air_fcs
		{
			clientFiredBis="if (player == gunner (_this select 0)) then { if ((_this select 4) isKindOf 'BulletBase') then { if !(isnil {((_this select 0) getvariable 'ace_sys_air_fcs_fired')}) then { _this call ace_sys_air_fcs_fnc_fired }}};";
		};
	};
	class AH64_base_EP1
	{
		class ace_sys_air_fcs
		{
			clientFiredBis="if (player == gunner (_this select 0)) then { if ((_this select 4) isKindOf 'BulletBase') then { if !(isnil {((_this select 0) getvariable 'ace_sys_air_fcs_fired')}) then { _this call ace_sys_air_fcs_fnc_fired }}};";
		};
	};
	class Kamov_Base
	{
		class ace_sys_air_fcs
		{
			clientFiredBis="if (player == gunner (_this select 0)) then { if ((_this select 4) isKindOf 'BulletBase') then { if !(isnil {((_this select 0) getvariable 'ace_sys_air_fcs_fired')}) then { _this call ace_sys_air_fcs_fnc_fired }}};";
		};
	};
	class Mi24_Base
	{
		class ace_sys_air_fcs
		{
			clientFiredBis="if (player == gunner (_this select 0)) then { if ((_this select 4) isKindOf 'BulletBase') then { if !(isnil {((_this select 0) getvariable 'ace_sys_air_fcs_fired')}) then { _this call ace_sys_air_fcs_fnc_fired }}};";
		};
	};
};
class Extended_GetIn_EventHandlers
{
	class Air
	{
		ace_sys_air_fcs="_this call ace_sys_air_fcs_fnc_loop";
	};
};
class Extended_GetOut_EventHandlers
{
};
class ace_sys_air_fcs_RscPicture
{
	type=0;
	idc=-1;
	style=48;
	x=0.1;
	y=0.1;
	w=0.40000001;
	h=0.2;
	sizeEx=0.023;
	colorBackground[]={0,0,0,0};
	colorText[]={1,1,1,1};
	font="Zeppelin32";
	text="";
};
class RscTitles
{
	class AH1Z_MFD_Text
	{
		idc=-1;
		access=0;
		type=0;
		style="0x00";
		font="TahomaB";
		colorText[]={1,1,1,1};
		colorBackground[]={0,0,0,0};
		sizeEx=0.039999999;
	};
	class AH1Z_MFD_Display
	{
		idd="AH1Z_MFD_Control_IDC";
		onLoad="private ['_dummy']; _dummy = _this spawn ace_sys_air_fcs_fnc_mfdloop; _dummy;";
		movingEnable="false";
		duration=100000;
		fadein=0;
		fadeout=0;
		name="AH-1Z Gunner MFD";
		controls[]=
		{
			"AH1Z_MFD_HeadingText",
			"AH1Z_MFD_TimeText",
			"AH1Z_MFD_TOFText",
			"AH1Z_MFD_WeaponIndicator",
			"AH1Z_MFD_DesignatorStatus",
			"AH1Z_MFD_RangeText",
			"AH1Z_MFD_DesignatorCircle",
			"AH1Z_MFD_ATTKIndicator",
			"AH1Z_MFD_Cross"
		};
		class AH1Z_MFD_HeadingText: AH1Z_MFD_Text
		{
			idc=693001;
			style="0x02";
			x=0.30000001;
			y=0.1;
			w=0.40000001;
			h=0.029999999;
			text="000";
		};
		class AH1Z_MFD_TimeText: AH1Z_MFD_Text
		{
			idc=693002;
			style="0x00";
			x=0.1;
			y=0.18000001;
			w=0.2;
			h=0.2;
			text="00:00:00";
		};
		class AH1Z_MFD_TOFText: AH1Z_MFD_Text
		{
			idc=693009;
			style="0x00";
			x=0.1;
			y=0.63999999;
			w=0.2;
			h=0.2;
			text="TOF 0.0";
		};
		class AH1Z_MFD_WeaponIndicator: AH1Z_MFD_Text
		{
			idc=693003;
			style="0x00";
			x=0.85000002;
			y=0.11;
			w=0.2;
			h=0.2;
			text="HF";
		};
		class AH1Z_MFD_DesignatorStatus: AH1Z_MFD_Text
		{
			idc=693004;
			style="0x00";
			x=0.85000002;
			y=0.18000001;
			w=0.2;
			h=0.2;
			text="DES";
		};
		class AH1Z_MFD_RangeText: AH1Z_MFD_Text
		{
			idc=693005;
			x=0.30000001;
			y=0.75;
			w=0.40000001;
			h=0.2;
			style="0x02";
			text="0000";
		};
		class AH1Z_MFD_DesignatorCircle: AH1Z_MFD_Text
		{
			idc=693006;
			x=0.45199999;
			y=0.44999999;
			w=0.1;
			h=0.12;
			style=48;
			text="x\ace\addons\sys_air_fcs\data\AH1Z_laser_reticle.paa";
		};
		class AH1Z_MFD_DesignatorCircleD: AH1Z_MFD_Text
		{
			idc=693007;
			x=0.458;
			y=0.44999999;
			w=0.1;
			h=0.12;
			style=48;
			text="x\ace\addons\sys_air_fcs\data\AH1Z_laser_reticle_dashed.paa";
		};
		class AH1Z_MFD_ATTKIndicator: AH1Z_MFD_Text
		{
			idc=693008;
			x=0.059999999;
			y=0.40000001;
			w=0.1;
			h=0.17;
			style=48;
			text="x\ace\addons\sys_air_fcs\data\AH1Z_attk_indicator.paa";
		};
		class AH1Z_MFD_Cross
		{
			idc=693010;
			type=0;
			style="48 + 0x800";
			movingEnable=1;
			font="TahomaB";
			colorBackground[]={0,0,0,0};
			colorText[]={0,1,0,0.5};
			text="\ca\UI\Data\cursor_uav_gs.paa";
			sizeEx=0.029999999;
			x=0.5;
			y=0.5;
			w=0.1;
			h=0.1;
			size=0.034000002;
			shadow=0;
			fixedWidth=0;
			lineSpacing=0;
		};
	};
	class AH64_MFD_Display: AH1Z_MFD_Display
	{
		class AH1Z_MFD_DesignatorCircle: AH1Z_MFD_DesignatorCircle
		{
			x=0.34999999;
			y=0.34999999;
			w=0.30000001;
			h=0.30000001;
			text="x\ace\addons\sys_air_fcs\data\AH64_laser_reticle.paa";
		};
		class AH1Z_MFD_ATTKIndicator: AH1Z_MFD_ATTKIndicator
		{
			text="x\ace\addons\sys_air_fcs\data\AH64_attk_indicator.paa";
		};
	};
	class Generic_Russian_Display: AH1Z_MFD_Display
	{
		idd=694000;
		onLoad="private ['_dummy']; _dummy = _this spawn ace_sys_air_fcs_fnc_rfloop; _dummy;";
		name="Generic Russian rangefinder";
		controls[]=
		{
			"Generic_Russian_Display_HeadingText",
			"Generic_Russian_Display_RangeText",
			"Generic_Russian_Display_LaunchAuthorization",
			"Generic_Russian_Display_Cross",
			"Generic_Russian_Display_Range",
			"Generic_Russian_Display_LaunchAuthorization2"
		};
		class Generic_Russian_Display_HeadingText: AH1Z_MFD_HeadingText
		{
			idc=694001;
			colorText[]={1,1,0,1};
		};
		class Generic_Russian_Display_RangeText: AH1Z_MFD_RangeText
		{
			idc=694002;
			colorText[]={1,1,0,1};
			text="0.0";
		};
		class Generic_Russian_Display_LaunchAuthorization: AH1Z_MFD_DesignatorStatus
		{
			idc=694003;
			x=0.30000001;
			y=0.64999998;
			w=0.40000001;
			h=0.2;
			colorText[]={1,1,0,1};
			style="0x02";
			text="$STR_ACE_IDN_LAUNCHAUTHORIZATION_RU";
		};
		class Generic_Russian_Display_Cross
		{
			idc=694004;
			type=0;
			style="48 + 0x800";
			movingEnable=1;
			font="TahomaB";
			colorBackground[]={0,0,0,0};
			colorText[]={0,1,0,0.5};
			text="x\ace\addons\sys_air_fcs\data\crossdot_ca.paa";
			sizeEx=0.029999999;
			x=0.5;
			y=0.5;
			w=0.1;
			h=0.1;
			size=0.034000002;
			shadow=0;
			fixedWidth=0;
			lineSpacing=0;
		};
		class Generic_Russian_Display_Range: Generic_Russian_Display_Cross
		{
			idc=694005;
			style="0x02";
			colorText[]={0,1,0,0.5};
			text="0.0";
			w=0.050000001;
			h=0.050000001;
		};
		class Generic_Russian_Display_LaunchAuthorization2: Generic_Russian_Display_Range
		{
			idc=694006;
			text="$STR_ACE_IDN_LAUNCHAUTHORIZATION_RU";
		};
	};
	class ace_sys_air_fcs_dot
	{
		idd=-1;
		movingEnable=0;
		duration=9.9999998e+010;
		fadein=1;
		fadeout=1;
		name="ace_test_dot";
		sizeEx=256;
		onLoad="uiNamespace setVariable ['ace_test_dot', _this select 0]";
		class controls
		{
			class picture: ace_sys_air_fcs_RscPicture
			{
				idc=66666;
				x=0.44999999;
				y=0.44999999;
				w=0.1;
				h=0.1;
				text="\x\ace\addons\sys_air_fcs\circle_ca.paa";
				sizeEx=256;
			};
		};
	};
	class ACE_Kh29Cursor
	{
		idd=-1;
		onLoad="with uiNameSpace do { ACE_Kh29Cursor = _this select 0 }";
		movingEnable=1;
		duration=10000;
		fadeIn=0;
		fadeOut=0;
		controls[]=
		{
			"Cross",
			"Range",
			"Tti"
		};
		class Cross
		{
			idc=1;
			type=0;
			style="48 + 0x800";
			movingEnable=1;
			font="TahomaB";
			colorBackground[]={0,0,0,0};
			colorText[]={1,1,0,1};
			text="\ca\UI\Data\cursor_uav_gs.paa";
			sizeEx=0.029999999;
			x=0.5;
			y=0.5;
			w=0.1;
			h=0.1;
			size=0.034000002;
			shadow=0;
			fixedWidth=0;
			lineSpacing=0;
		};
		class Range: Cross
		{
			idc=2;
			style="0x02";
			colorText[]={0,0,0,0};
			text="";
			w=0.050000001;
			h=0.050000001;
		};
		class Tti: Range
		{
			idc=3;
		};
	};
};
class RscControlsGroup;
class RscPicture;
class RscLine;
class RscOpticsValue;
class RscText;
class RscIGText;
class RscIGProgress;
class RscIGUIText;
class RscIGUIValue;
class RscEdit;
class RscListBox;
class ace_sys_air_fcs_RscText
{
	idc=-1;
	access=0;
	type=0;
	style="0x02";
	font="TahomaB";
	colorText[]={1,1,1,1};
	colorBackground[]={0,0,0,0};
	sizeEx=0.039999999;
};
class RscInGameUI
{
	class RscUnitInfo;
	class RscUnitInfo_AH64D_gunner
	{
		controls[]=
		{
			"CA_VisionMode",
			"CA_FlirMode",
			"CA_FOVMode",
			"CA_Compass",
			"CA_Heading",
			"CA_Autohover",
			"CA_BallRange"
		};
	};
	class ACE_RscUnitInfo_Ru_Gunner
	{
		idd=300;
		onLoad="uiNameSpace setVariable ['ACE_RscUnitInfo_Ru_Gunner',_this select 0]; [] call ace_sys_air_fcs_fnc_ru_gunner;";
		onUnload="uiNameSpace setVariable ['ACE_RscUnitInfo_Ru_Gunner',nil];";
		controls[]=
		{
			"Optics"
		};
		class Optics: RscControlsGroup
		{
			x="SafezoneX";
			y="SafezoneY";
			w="SafezoneW-SafezoneX";
			h="SafezoneH-SafezoneY";
			idc=170;
			class VScrollbar
			{
				autoScrollSpeed=-1;
				autoScrollDelay=5;
				autoScrollRewind=0;
				color[]={1,1,1,0};
				width=0.001;
			};
			class HScrollbar
			{
				color[]={1,1,1,0};
				height=0.001;
			};
			class Controls
			{
				class Generic_Russian_Display_HeadingText: ace_sys_air_fcs_RscText
				{
					idc=694001;
					x="0.3-SafezoneX";
					y="0.1-SafezoneY";
					w=0.40000001;
					h=0.029999999;
					text="000";
					colorText[]={1,1,0,1};
				};
				class Generic_Russian_Display_RangeText: ace_sys_air_fcs_RscText
				{
					idc=694002;
					x="0.3-SafezoneX";
					y="0.75-SafezoneY";
					w=0.40000001;
					h=0.2;
					text="0.0";
					colorText[]={1,1,0,1};
				};
				class Generic_Russian_Display_LaunchAuthorization: ace_sys_air_fcs_RscText
				{
					idc=694003;
					x="0.3-SafezoneX";
					y="0.65-SafezoneY";
					w=0.40000001;
					h=0.2;
					colorText[]={1,1,0,1};
					text="$STR_ACE_IDN_LAUNCHAUTHORIZATION_RU";
				};
			};
		};
	};
	class RscUnitInfoAir;
	class ACE_RscUnitInfoAir: RscUnitInfoAir
	{
		class ACE_ControlsGroup: RscControlsGroup
		{
			x="SafezoneX";
			y="SafezoneY";
			w="SafezoneW";
			h="SafezoneH";
			idc=1234;
			class VScrollbar
			{
				autoScrollSpeed=-1;
				autoScrollDelay=5;
				autoScrollRewind=0;
				color[]={1,1,1,0};
				width=0.001;
			};
			class HScrollbar
			{
				color[]={1,1,1,0};
				height=0.001;
			};
			class Controls;
		};
	};
	class ACE_RscUnitInfo_Ru_Pilot: ACE_RscUnitInfoAir
	{
		onLoad="uiNameSpace setVariable ['ACE_RscUnitInfo_Ru_Pilot',_this select 0]; [] call ace_sys_air_fcs_fnc_ru_pilot;";
		onUnload="uiNameSpace setVariable ['ACE_RscUnitInfo_Ru_Pilot',nil];";
		class ACE_ControlsGroup: ACE_ControlsGroup
		{
			class Controls: Controls
			{
				class Generic_Russian_Display_Cross
				{
					idc=694004;
					type=0;
					style="48 + 0x800";
					movingEnable=1;
					font="TahomaB";
					colorBackground[]={0,0,0,0};
					colorText[]={0,1,0,0.5};
					text="x\ace\addons\sys_air_fcs\data\crossdot_ca.paa";
					sizeEx=0.029999999;
					x="0.5-SafezoneX";
					y="0.5-SafezoneY";
					w=0.1;
					h=0.1;
					size=0.034000002;
					shadow=0;
					fixedWidth=0;
					lineSpacing=0;
				};
				class Generic_Russian_Display_Range: Generic_Russian_Display_Cross
				{
					idc=694005;
					style="0x02";
					colorText[]={0,1,0,0.5};
					text="0.0";
					w=0.050000001;
					h=0.050000001;
				};
				class Generic_Russian_Display_LaunchAuthorization2: Generic_Russian_Display_Range
				{
					idc=694006;
					text="$STR_ACE_IDN_LAUNCHAUTHORIZATION_RU";
				};
			};
		};
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class 750Rnd_M197_AH1: VehicleMagazine
	{
		ace_air_fcs_drop[]={0,0.046,0.18799999,0.44,0.79900002,1.3049999,1.952,2.78,3.753,4.9759998,6.375,7.9369998,9.802,12.079,14.542,17.461,20.844999,24.452,28.889,33.396,39.126999,44.933998,51.511002,59.324001,67.601997,77.283997,87.468002,99.232002,112.196,127.026,143.394,161.39301,181.03799,203.114,227.769,255.47701,285.92401,319.79099,356.51901,398.98999,444.681,495.758,553.50098,617.565,688.25098,766.69};
		ace_air_fcs_time[]={0,0.11,0.20999999,0.31999999,0.43000001,0.56,0.68000001,0.75999999,0.94,1.09,1.24,1.39,1.5599999,1.74,1.9299999,2.1400001,2.3399999,2.55,2.79,3.01,3.28,3.54,3.8099999,4.1100001,4.4200001,4.75,5.0799999,5.4400001,5.8200002,6.2199998,6.6399999,7.0799999,7.54,8.0200005,8.54,9.0799999,9.6700001,10.25,10.87,11.55,12.25,12.99,13.79,14.63,15.52,16.450001};
		ace_air_fcs_maxrange=4500;
	};
	class 1200Rnd_30x113mm_M789_HEDP: VehicleMagazine
	{
		ace_air_fcs_drop[]={0,0.078000002,0.32600001,0.76300001,1.3839999,2.2909999,3.503,4.902,6.7880001,8.9659996,11.616,14.901,18.667,23.049,28.160999,33.917,40.978001,48.59,57.658001,68.331001,79.884003,93.695,109.004,126.798,146.41901,169.24001,195.34399,224.755,258.07199,295.50699,338.298,387.09799,442.74799,506.29901,578.14801,660.06201,754.12701,862.573,988.41602,1133.79,1304.58};
		ace_air_fcs_time[]={0,0.15000001,0.28999999,0.43000001,0.56999999,0.74000001,0.93000001,1.09,1.29,1.51,1.72,1.96,2.21,2.47,2.75,3.04,3.3800001,3.6900001,4.0500002,4.4400001,4.8400002,5.2800002,5.71,6.1999998,6.71,7.2600002,7.8600001,8.4700003,9.1400003,9.8199997,10.57,11.37,12.23,13.16,14.16,15.21,16.360001,17.610001,19,20.530001,22.23};
		ace_air_fcs_maxrange=4500;
	};
	class 230Rnd_30mmHE_2A42: VehicleMagazine
	{
		ace_air_fcs_drop[]={0,0.052000001,0.219,0.46799999,0.88099998,1.424,2.092,2.8840001,3.918,4.961,6.2779999,7.743,9.5419998,11.29,13.438,15.71,18.42,21.070999,24.146,27.379,31.166,35.151001,39.328999,44.077,49.067001,54.345001,59.838001,66.024002,73.015999,79.820999,87.334,95.286003,103.997,113.574,123.124,134.028,144.69299,157.07201,169.233,183.218,196.953,212.634,228.853,245.739,263.901,283.56201};
		ace_air_fcs_time[]={0,0.12,0.23,0.33000001,0.44999999,0.56,0.68000001,0.80000001,0.94999999,1.05,1.1900001,1.33,1.48,1.61,1.77,1.92,2.0799999,2.24,2.4000001,2.5699999,2.76,2.9300001,3.1099999,3.3099999,3.5,3.7,3.8900001,4.1199999,4.3299999,4.5500002,4.77,5,5.2399998,5.5,5.7399998,6.02,6.27,6.5500002,6.8299999,7.1300001,7.4099998,7.73,8.04,8.3599997,8.6899996,9.04};
		ace_air_fcs_maxrange=4500;
	};
	class 230Rnd_30mmAP_2A42: 230Rnd_30mmHE_2A42
	{
		ace_air_fcs_drop[]={0,0.037,0.16,0.36899999,0.65700001,1.048,1.553,2.1210001,2.895,3.678,4.6799998,5.7969999,7.0219998,8.3620005,9.8170004,11.391,13.482,15.734,17.641001,20.158001,22.826,25.676001,28.976999,32.146999,35.752998,39.882,44.212002,48.379002,53.492001,58.446999,64.128998,69.973999,76.480003,83.372002,90.406998,98.296997,106.374,115.314,124.625,134.297,144.81,155.82001,167.811,180.14799,193.726,207.617};
		ace_air_fcs_time[]={0,0.1,0.2,0.28999999,0.38999999,0.49000001,0.58999997,0.69,0.80000001,0.91000003,1.03,1.15,1.27,1.4,1.52,1.63,1.8,1.9299999,2.05,2.2,2.3499999,2.5,2.6700001,2.8199999,3,3.1700001,3.3399999,3.51,3.71,3.8900001,4.0900002,4.2800002,4.4899998,4.71,4.9200001,5.1500001,5.3699999,5.6100001,5.8699999,6.0999999,6.3699999,6.6100001,6.8800001,7.1599998,7.4400001,7.73};
		ace_air_fcs_maxrange=4500;
	};
	class 1470Rnd_127x108_YakB: VehicleMagazine
	{
		ace_air_fcs_drop[]={0,0.07,0.31999999,0.73000002,1.421,2.3529999,3.6340001,5.3889999,7.6100001,10.419,13.868,18.186001,23.562,30.214001,38.084,48.007,59.895,74.296997,91.525002,112.362,137.786};
		ace_air_fcs_time[]={0,0.14,0.25,0.41,0.56999999,0.75,0.94,1.16,1.4,1.65,1.9299999,2.23,2.5699999,2.95,3.3399999,3.79,4.2800002,4.8099999,5.3800001,6.02,6.71};
		ace_air_fcs_maxrange=2000;
	};
};
class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class AH1_Base: Helicopter
	{
		ace_air_fcs_enabled=1;
	};
	class AH64_base_EP1: Helicopter
	{
		ace_air_fcs_enabled=1;
	};
	class Mi24_Base: Helicopter
	{
		ace_air_fcs_enabled=1;
	};
	class Kamov_Base: Helicopter
	{
		ace_air_fcs_enabled=1;
	};
	class AW159_Lynx_BAF: Helicopter
	{
		ace_air_fcs_enabled=1;
	};
};
