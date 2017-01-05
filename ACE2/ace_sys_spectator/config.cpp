class CfgPatches
{
	class ace_sys_spectator
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.62;
		requiredAddons[]=
		{
			"CAMisc3",
			"CA_Animals2",
			"Extended_Eventhandlers",
			"ace_main"
		};
		version="1.14.0.593";
		author[]=
		{
			"Kegetys",
			"Sickboy",
			"Xeno",
			"ViperMaul",
			"Dwarden"
		};
	};
};
class CfgNonAiVehicles
{
	class ButterFly;
	class ACE_ButterFlySpectator: ButterFly
	{
		acceleration=20;
		straightDistance=2;
		turning=1;
	};
	class Bird;
	class SeaGull: Bird
	{
		model="\ca\Animals_e\aglais_urticae_e.p3d";
		moves="CfgMovesButterfly";
		acceleration=20;
		straightDistance=2;
		turning=1;
		singsound[]=
		{
			"",
			0,
			1,
			1
		};
	};
	class Crow: SeaGull
	{
		moves="CfgMovesBird";
		acceleration=7;
		straightDistance=50;
	};
};
class CfgVehicles
{
	class All;
	class ThingEffect;
	class ThingEffectLight;
	class ACE_Logic;
	class ACE_Spectator_ShownSides_Logic: ACE_Logic
	{
		displayName="$STR_ACE_SPECT_SHOWNSIDES";
		vehicleClass="Modules";
		class Eventhandlers
		{
			init="";
		};
	};
	class ACE_KEGsAddon10: ThingEffectLight
	{
		scope=1;
		model="\x\ace\addons\sys_spectator\bar_green_new.p3d";
	};
	class ACE_KEGspect_bar_yellow: ThingEffectLight
	{
		scope=1;
		model="\x\ace\addons\sys_spectator\bar_yellow_new.p3d";
		displayName="bar";
		airRotation=0;
	};
	class ACE_KEGspect_bar_red: ACE_KEGspect_bar_yellow
	{
		model="\x\ace\addons\sys_spectator\bar_red_new.p3d";
	};
	class ACE_KEGspect_bar_green: ACE_KEGspect_bar_yellow
	{
		model="\x\ace\addons\sys_spectator\bar_green_new.p3d";
	};
};
class CfgFunctions
{
	class ACE
	{
		class Spectator
		{
			class startSpectator
			{
				description="Start spectator script";
				file="\x\ace\Addons\sys_spectator\fnc_startSpectator.sqf";
			};
		};
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_sys_spectator
	{
		clientInit="call ('\x\ace\addons\sys_spectator\XEH_preClientInit.sqf' call SLX_XEH_COMPILE)";
		init="call ('\x\ace\addons\sys_spectator\XEH_preInit.sqf' call SLX_XEH_COMPILE)";
	};
};
class RscListBox;
class RscMapControl
{
	class Task;
	class CustomMark;
	class Command;
	class ActiveMarker;
};
class RscControlsGroup;
class ACE_KEGsRscText
{
	access=0;
	type=0;
	idc=-1;
	style=0;
	w=0.1;
	h=0.050000001;
	font="TahomaB";
	sizeEx=0.039999999;
	colorBackground[]={0,0,0,0};
	colorText[]={1,1,1,1};
	text="";
};
class ACE_KEGsRscListBox: RscListBox
{
	access=0;
	type=5;
	style=0;
	w=0.40000001;
	h=0.40000001;
	font="TahomaB";
	sizeEx=0.039999999;
	rowHeight=0;
	colorText[]={1,1,1,1};
	colorScrollbar[]={1,1,1,1};
	colorSelect[]={0,0,0,1};
	colorSelect2[]={1,0.5,0,1};
	colorSelectBackground[]={0.60000002,0.60000002,0.60000002,1};
	colorSelectBackground2[]={0.2,0.2,0.2,1};
	colorBackground[]={0,0,0,1};
	soundSelect[]=
	{
		"",
		0.1,
		1
	};
	period=1;
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
};
class ACE_KEGsRscActiveText
{
	access=0;
	type=11;
	style=2;
	h=0.050000001;
	w=0.15000001;
	font="TahomaB";
	sizeEx=0.039999999;
	color[]={1,1,1,1};
	colorActive[]={1,0.5,0,1};
	soundEnter[]=
	{
		"",
		0.1,
		1
	};
	soundPush[]=
	{
		"",
		0.1,
		1
	};
	soundClick[]=
	{
		"",
		0.1,
		1
	};
	soundEscape[]=
	{
		"",
		0.1,
		1
	};
	text="";
	default=0;
};
class ACE_KEGsRscMapControl: RscMapControl
{
	access=0;
	type=101;
	idc=51;
	style=48;
	colorBackground[]={1,1,1,1};
	colorText[]={0,0,0,1};
	font="TahomaB";
	sizeEx=0.039999999;
	colorSea[]={0.56,0.80000001,0.98000002,0.5};
	colorForest[]={0.60000002,0.80000001,0.2,0.5};
	colorRocks[]={0.5,0.5,0.5,0.5};
	colorCountlines[]={0.64999998,0.44999999,0.27000001,0.5};
	colorMainCountlines[]={0.64999998,0.44999999,0.27000001,1};
	colorCountlinesWater[]={0,0.52999997,1,0.5};
	colorMainCountlinesWater[]={0,0.52999997,1,1};
	colorForestBorder[]={0.40000001,0.80000001,0,1};
	colorRocksBorder[]={0.5,0.5,0.5,1};
	colorPowerLines[]={0,0,0,1};
	colorNames[]={0,0,0,1};
	colorInactive[]={1,1,1,0.5};
	colorLevels[]={0,0,0,1};
	fontLabel="Zeppelin32";
	sizeExLabel=0.027000001;
	fontGrid="Zeppelin32";
	sizeExGrid=0.027000001;
	fontUnits="Zeppelin32";
	sizeExUnits=0.027000001;
	fontNames="Zeppelin32";
	sizeExNames=0.027000001;
	fontInfo="Zeppelin32";
	sizeExInfo=0.027000001;
	fontLevel="Zeppelin32";
	sizeExLevel=0.027000001;
	text="#(argb,8,8,3)color(1,1,1,1)";
	stickX[]=
	{
		0.2,
		
		{
			"Gamma",
			1,
			1.5
		}
	};
	stickY[]=
	{
		0.2,
		
		{
			"Gamma",
			1,
			1.5
		}
	};
	ptsPerSquareSea=6;
	ptsPerSquareTxt=8;
	ptsPerSquareCLn=8;
	ptsPerSquareExp=8;
	ptsPerSquareCost=8;
	ptsPerSquareFor="4.0f";
	ptsPerSquareForEdge="10.0f";
	ptsPerSquareRoad=2;
	ptsPerSquareObj=10;
	class Bunker
	{
		icon="\ca\ui\data\map_bunker_ca.paa";
		color[]={0.55000001,0.63999999,0.43000001,1};
		size=16;
		importance="1.5 * 14 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Bush
	{
		icon="\ca\ui\data\map_bush_ca.paa";
		color[]={0.55000001,0.63999999,0.43000001,1};
		size=16;
		importance="0.2 * 14 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class BusStop
	{
		icon="\ca\ui\data\map_busstop_ca.paa";
		color[]={0,0,1,1};
		size=10;
		importance="1 * 10 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Cross
	{
		icon="\ca\ui\data\map_cross_ca.paa";
		color[]={0.55000001,0.63999999,0.43000001,1};
		size=16;
		importance="0.7 * 16 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Fortress
	{
		icon="\ca\ui\data\map_bunker_ca.paa";
		color[]={0.55000001,0.63999999,0.43000001,1};
		size=16;
		importance="2 * 16 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Fuelstation
	{
		icon="\ca\ui\data\map_fuelstation_ca.paa";
		color[]={0.55000001,0.63999999,0.43000001,1};
		size=16;
		importance="2 * 16 * 0.05";
		coefMin=0.75;
		coefMax=4;
	};
	class Fountain
	{
		icon="\ca\ui\data\map_fountain_ca.paa";
		color[]={0,0.34999999,0.69999999,1};
		size=12;
		importance="1 * 12 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Hospital
	{
		icon="\ca\ui\data\map_hospital_ca.paa";
		color[]={0.77999997,0,0.050000001,1};
		size=16;
		importance="2 * 16 * 0.05";
		coefMin=0.5;
		coefMax=4;
	};
	class Chapel
	{
		icon="\ca\ui\data\map_chapel_ca.paa";
		color[]={0.55000001,0.63999999,0.43000001,1};
		size=16;
		importance="1 * 16 * 0.05";
		coefMin=0.89999998;
		coefMax=4;
	};
	class Church
	{
		icon="\ca\ui\data\map_church_ca.paa";
		color[]={0.55000001,0.63999999,0.43000001,1};
		size=16;
		importance="2 * 16 * 0.05";
		coefMin=0.89999998;
		coefMax=4;
	};
	class Lighthouse
	{
		icon="\ca\ui\data\map_lighthouse_ca.paa";
		color[]={0.77999997,0,0.050000001,1};
		size=20;
		importance="3 * 16 * 0.05";
		coefMin=0.89999998;
		coefMax=4;
	};
	class Quay
	{
		icon="\ca\ui\data\map_quay_ca.paa";
		color[]={0.55000001,0.63999999,0.43000001,1};
		size=16;
		importance="2 * 16 * 0.05";
		coefMin=0.5;
		coefMax=4;
	};
	class Rock
	{
		icon="\ca\ui\data\map_rock_ca.paa";
		color[]={0.55000001,0.63999999,0.43000001,1};
		size=12;
		importance="0.5 * 12 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Ruin
	{
		icon="\ca\ui\data\map_ruin_ca.paa";
		color[]={0.77999997,0,0.050000001,1};
		size=16;
		importance="1.2 * 16 * 0.05";
		coefMin=1;
		coefMax=4;
	};
	class SmallTree
	{
		icon="\ca\ui\data\map_smalltree_ca.paa";
		color[]={0.55000001,0.63999999,0.43000001,1};
		size=16;
		importance="0.6 * 12 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Stack
	{
		icon="\ca\ui\data\map_stack_ca.paa";
		color[]={0.55000001,0.63999999,0.43000001,1};
		size=20;
		importance="2 * 16 * 0.05";
		coefMin=0.89999998;
		coefMax=4;
	};
	class Tree
	{
		icon="\ca\ui\data\map_tree_ca.paa";
		color[]={0.55000001,0.63999999,0.43000001,1};
		size=16;
		importance="0.9 * 16 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Tourism
	{
		icon="\ca\ui\data\map_tourism_ca.paa";
		color[]={0.77999997,0,0.050000001,1};
		size=16;
		importance="1 * 16 * 0.05";
		coefMin=0.69999999;
		coefMax=4;
	};
	class Transmitter
	{
		icon="\ca\ui\data\map_transmitter_ca.paa";
		size=20;
		color[]={0,0.34999999,0.69999999,1};
		importance="2 * 16 * 0.05";
		coefMin=0.89999998;
		coefMax=4;
	};
	class ViewTower
	{
		icon="\ca\ui\data\map_viewtower_ca.paa";
		size=16;
		color[]={0,0.34999999,0.69999999,1};
		importance="2.5 * 16 * 0.05";
		coefMin=0.5;
		coefMax=4;
	};
	class Watertower
	{
		icon="\ca\ui\data\map_watertower_ca.paa";
		color[]={0,0.34999999,0.69999999,1};
		size=32;
		importance="1.2 * 16 * 0.05";
		coefMin=0.89999998;
		coefMax=4;
	};
	class Waypoint
	{
		icon="\ca\ui\data\map_waypoint_ca.paa";
		size=16;
		color[]={0,0.34999999,0.69999999,1};
		importance="2.5 * 16 * 0.05";
		coefMin=0.5;
		coefMax=4;
	};
	class WaypointCompleted
	{
		icon="\ca\ui\data\map_waypoint_completed_ca.paa";
		size=16;
		color[]={0,0.34999999,0.69999999,1};
		importance="2.5 * 16 * 0.05";
		coefMin=0.5;
		coefMax=4;
	};
};
class ACE_KEGsRscControlsGroup: RscControlsGroup
{
	type=15;
	idc=-1;
	style=0;
	x="SafeZoneX";
	y="SafeZoneY";
	w="SafeZoneW";
	h="SafeZoneH";
	class VScrollbar
	{
		color[]={1,1,1,1};
		width=0.021;
		autoScrollSpeed=-1;
		autoScrollDelay=5;
		autoScrollRewind=0;
	};
	class HScrollbar
	{
		color[]={1,1,1,1};
		height=0.028000001;
		autoScrollSpeed=-1;
		autoScrollDelay=5;
		autoScrollRewind=0;
	};
	class Controls
	{
	};
};
class ACE_SP_Dummy_Map
{
	idc=-1;
	type=100;
	style=48;
	x=0;
	y=0;
	w=1;
	h=1;
	colorBackground[]={0,0,0,0};
	colorText[]={0,0,0,0};
	colorSea[]={0,0,0,0};
	colorForest[]={0,0,0,0};
	colorRocks[]={0,0,0,0};
	colorCountlines[]={0,0,0,0};
	colorMainCountlines[]={0,0,0,0};
	colorCountlinesWater[]={0,0,0,0};
	colorMainCountlinesWater[]={0,0,0,0};
	colorForestBorder[]={0,0,0,0};
	colorRocksBorder[]={0,0,0,0};
	colorPowerLines[]={0,0,0,0};
	colorNames[]={0,0,0,0};
	colorInactive[]={0,0,0,0};
	colorLevels[]={0,0,0,0};
	colorRailWay[]={0,0,0,0};
	colorOutside[]={0,0,0,0};
	font="TahomaB";
	sizeEx=0;
	stickX[]=
	{
		0,
		
		{
			"Gamma",
			1,
			1
		}
	};
	stickY[]=
	{
		0,
		
		{
			"Gamma",
			1,
			1
		}
	};
	ptsPerSquareSea=0;
	ptsPerSquareTxt=0;
	ptsPerSquareCLn=0;
	ptsPerSquareExp=0;
	ptsPerSquareCost=0;
	ptsPerSquareFor="0f";
	ptsPerSquareForEdge="0f";
	ptsPerSquareRoad=0;
	ptsPerSquareObj=0;
	fontLabel="Zeppelin32";
	sizeExLabel=0;
	fontGrid="Zeppelin32";
	sizeExGrid=0;
	fontUnits="Zeppelin32";
	sizeExUnits=0;
	fontNames="Zeppelin32";
	sizeExNames=0;
	fontInfo="Zeppelin32";
	sizeExInfo=0;
	fontLevel="Zeppelin32";
	sizeExLevel=0;
	scaleMax=1;
	scaleMin=0.125;
	text="";
	maxSatelliteAlpha=0;
	alphaFadeStartScale=1;
	alphaFadeEndScale=1;
	showCountourInterval=1;
	scaleDefault=2;
	class Task
	{
		icon="\ca\ui\data\clear_empty_ca.paa";
		color[]={0,0,0,0};
		size=1;
		importance=1;
		coefMin=1;
		coefMax=1;
		iconCreated="";
		iconCanceled="";
		iconDone="";
		iconFailed="";
		colorCreated[]={0,0,0,0};
		colorCanceled[]={0,0,0,0};
		colorDone[]={0,0,0,0};
		colorFailed[]={0,0,0,0};
	};
	class CustomMark
	{
		icon="\ca\ui\data\clear_empty_ca.paa";
		color[]={0,0,0,0};
		size=1;
		importance=1;
		coefMin=1;
		coefMax=1;
	};
	class Legend
	{
		x="SafeZoneX";
		y="SafeZoneY";
		w=0.34;
		h=0.152;
		font="Zeppelin32";
		sizeEx=0.039209999;
		colorBackground[]={0,0,0,0};
		color[]={0,0,0,0};
	};
	class Bunker
	{
		icon="\ca\ui\data\clear_empty_ca.paa";
		color[]={0,0,0,0};
		size=14;
		importance="1.5 * 14 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Bush
	{
		icon="\ca\ui\data\clear_empty_ca.paa";
		color[]={0,0,0,0};
		size=14;
		importance="0.2 * 14 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class BusStop
	{
		icon="\ca\ui\data\clear_empty_ca.paa";
		color[]={0,0,0,0};
		size=12;
		importance="1 * 10 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Command
	{
		icon="\ca\ui\data\clear_empty_ca.paa";
		color[]={0,0,0,0};
		size=18;
		importance=1;
		coefMin=1;
		coefMax=1;
	};
	class Cross
	{
		icon="\ca\ui\data\clear_empty_ca.paa";
		size=16;
		color[]={0,0,0,0};
		importance="0.7 * 16 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Fortress
	{
		icon="\ca\ui\data\clear_empty_ca.paa";
		size=16;
		color[]={0,0,0,0};
		importance="2 * 16 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Fuelstation
	{
		icon="\ca\ui\data\clear_empty_ca.paa";
		size=16;
		color[]={0,0,0,0};
		importance="2 * 16 * 0.05";
		coefMin=0.75;
		coefMax=4;
	};
	class Fountain
	{
		icon="\ca\ui\data\clear_empty_ca.paa";
		color[]={0,0,0,0};
		size=11;
		importance="1 * 12 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Hospital
	{
		icon="\ca\ui\data\clear_empty_ca.paa";
		color[]={0,0,0,0};
		size=16;
		importance="2 * 16 * 0.05";
		coefMin=0.5;
		coefMax=4;
	};
	class Chapel
	{
		icon="\ca\ui\data\clear_empty_ca.paa";
		color[]={0,0,0,0};
		size=16;
		importance="1 * 16 * 0.05";
		coefMin=0.89999998;
		coefMax=4;
	};
	class Church
	{
		icon="\ca\ui\data\clear_empty_ca.paa";
		size=16;
		color[]={0,0,0,0};
		importance="2 * 16 * 0.05";
		coefMin=0.89999998;
		coefMax=4;
	};
	class Lighthouse
	{
		icon="\ca\ui\data\clear_empty_ca.paa";
		size=14;
		color[]={0,0,0,0};
		importance="3 * 16 * 0.05";
		coefMin=0.89999998;
		coefMax=4;
	};
	class Quay
	{
		icon="\ca\ui\data\clear_empty_ca.paa";
		size=16;
		color[]={0,0,0,0};
		importance="2 * 16 * 0.05";
		coefMin=0.5;
		coefMax=4;
	};
	class Rock
	{
		icon="\ca\ui\data\clear_empty_ca.paa";
		color[]={0,0,0,0};
		size=12;
		importance="0.5 * 12 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Ruin
	{
		icon="\ca\ui\data\clear_empty_ca.paa";
		size=16;
		color[]={0,0,0,0};
		importance="1.2 * 16 * 0.05";
		coefMin=1;
		coefMax=4;
	};
	class SmallTree
	{
		icon="\ca\ui\data\clear_empty_ca.paa";
		color[]={0,0,0,0};
		size=12;
		importance="0.6 * 12 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Stack
	{
		icon="\ca\ui\data\clear_empty_ca.paa";
		size=20;
		color[]={0,0,0,0};
		importance="2 * 16 * 0.05";
		coefMin=0.89999998;
		coefMax=4;
	};
	class Tree
	{
		icon="\ca\ui\data\clear_empty_ca.paa";
		color[]={0,0,0,0};
		size=12;
		importance="0.9 * 16 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Tourism
	{
		icon="\ca\ui\data\clear_empty_ca.paa";
		color[]={0,0,0,0};
		size=16;
		importance="1 * 16 * 0.05";
		coefMin=0.69999999;
		coefMax=4;
	};
	class Transmitter
	{
		icon="\ca\ui\data\clear_empty_ca.paa";
		color[]={0,0,0,0};
		size=20;
		importance="2 * 16 * 0.05";
		coefMin=0.89999998;
		coefMax=4;
	};
	class ViewTower
	{
		icon="\ca\ui\data\clear_empty_ca.paa";
		color[]={0,0,0,0};
		size=16;
		importance="2.5 * 16 * 0.05";
		coefMin=0.5;
		coefMax=4;
	};
	class Watertower
	{
		icon="\ca\ui\data\clear_empty_ca.paa";
		color[]={0,0,0,0};
		size=20;
		importance="1.2 * 16 * 0.05";
		coefMin=0.89999998;
		coefMax=4;
	};
	class Waypoint
	{
		icon="\ca\ui\data\clear_empty_ca.paa";
		color[]={0,0,0,0};
		size=16;
		importance="2.5 * 16 * 0.05";
		coefMin=0.5;
		coefMax=4;
	};
	class WaypointCompleted
	{
		icon="\ca\ui\data\clear_empty_ca.paa";
		color[]={0,0,0,0};
		size=16;
		importance="2.5 * 16 * 0.05";
		coefMin=0.5;
		coefMax=4;
	};
	class ActiveMarker
	{
		color[]={0,0,0,0};
		size=1;
	};
};
class ACE_SliderH
{
	idc=-1;
	type=43;
	style="0x400 + 0x10";
	x=0;
	y=0;
	h=0;
	w=0;
	default=0;
	color[]={1,1,1,0.40000001};
	colorActive[]={1,1,1,1};
	colorDisabled[]={1,1,1,0.2};
	arrowEmpty="\ca\ui\data\ui_arrow_left_ca.paa";
	arrowFull="\ca\ui\data\ui_arrow_left_active_ca.paa";
	border="\ca\ui\data\ui_border_frame_ca.paa";
	thumb="\ca\ui\data\ui_slider_bar_ca.paa";
};
class ACE_rscSpectate
{
	idd=-1;
	movingEnable=0;
	onLoad="uiNamespace setVariable ['ace_sys_spectator_rscSpectate', _this select 0];((_this select 0) displayCtrl 50024) ctrlShow false";
	onUnLoad="uiNamespace setVariable ['ace_sys_spectator_rscSpectate', nil]";
	class controls
	{
		class mouseHandler: ACE_KEGsRscControlsGroup
		{
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
			onMouseMoving="[""MouseMoving"",_this] call ace_sys_spectator_fnc_spectate_events";
			onMouseButtonDown="[""MouseButtonDown"",_this] call ace_sys_spectator_fnc_spectate_events";
			onMouseButtonUp="[""MouseButtonUp"",_this] call ace_sys_spectator_fnc_spectate_events";
			onMouseZChanged="[""MouseZChanged"",_this] call ace_sys_spectator_fnc_spectate_events";
			idc=123;
			x="SafeZoneX";
			y="SafeZoneY";
			w="SafeZoneW";
			h="SafeZoneH";
			colorBackground[]={0.2,0,0,0};
		};
		class BackgroundTop: ACE_KEGsRscText
		{
			idc=55009;
			x="SafeZoneX";
			y="SafeZoneY";
			w="SafeZoneW";
			h=0.059999999;
			colorBackground[]={0,0,0,1};
		};
		class BackgroundBottom: BackgroundTop
		{
			idc=55010;
			y="SafeZoneY + SafeZoneH-0.06";
		};
		class title: BackgroundTop
		{
			idc=55011;
			colorBackground[]={0,0,0,0};
			text="SPECTATING";
			style=2;
			sizeEx=0.035;
			colorText[]={1,0,0,1};
			shadow=1;
			y="SafeZoneY";
			h=0.059999999;
			font="Zeppelin32";
		};
		class menuCameras: ACE_KEGsRscText
		{
			idc=55007;
			style=128;
			x="SafeZoneX + 0.015";
			y="SafeZoneY + 0.06";
			w=0.19;
			h=0.30000001;
			text="";
			colorBackground[]={0,0,0,0.69999999};
		};
		class menuCamerasLB: ACE_KEGsRscListBox
		{
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
			onLBSelChanged="_this call ace_sys_spectator_fnc_menucamslbchange";
			autoScrollRewind=0;
			autoScrollDelay=5;
			autoScrollSpeed=-1;
			maxHistoryDelay=1;
			idc=55005;
			x="SafeZoneX + 0.015";
			y="SafeZoneY + 0.06";
			w=0.19;
			h=0.30000001;
			colorSelect[]={1,0.5,0,1};
			colorSelect2[]={1,0.5,0,1};
			colorSelectBackground[]={0.2,0.2,0.2,1};
			colorSelectBackground2[]={0.2,0.2,0.2,1};
			sizeEx=0.025;
		};
		class menuTargets: ACE_KEGsRscText
		{
			idc=55008;
			style=128;
			x="SafeZoneX + SafeZoneW-0.015-0.200";
			y="SafeZoneY + 0.06";
			w=0.2;
			h=0.30000001;
			text="";
			colorBackground[]={0,0,0,0.69999999};
		};
		class menuTargetsLB: ACE_KEGsRscListBox
		{
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
			autoScrollRewind=0;
			autoScrollDelay=5;
			autoScrollSpeed=-1;
			maxHistoryDelay=1;
			idc=55006;
			x="SafeZoneX + SafeZoneW-0.015-0.200";
			y="SafeZoneY + 0.06";
			w=0.2;
			h=0.30000001;
			colorSelect[]={1,0.5,0,1};
			colorSelect2[]={1,0.5,0,1};
			colorSelectBackground[]={0.2,0.2,0.2,1};
			colorSelectBackground2[]={0.2,0.2,0.2,1};
			colorScrollbar[]={1,0.5,0,1};
			colorText[]={1,1,1,1};
			sizeEx=0.025;
			period=0;
		};
		class tCamera: ACE_KEGsRscActiveText
		{
			idc=55002;
			x="SafeZoneX + 0.015";
			y="SafeZoneY";
			w="SafeZoneW-(2*0.015)";
			h=0.059999999;
			text="$STR_ACE_SPECT_DCAM";
			style=0;
			sizeEx=0.025;
			color[]={1,1,1,0.89999998};
			shadow=1;
			font="Zeppelin32";
			onMouseButtonUp="[""ToggleCameraMenu"",0] call ace_sys_spectator_fnc_spectate_events";
		};
		class tTarget: tCamera
		{
			idc=55003;
			text="$STR_ACE_SPECT_DTARGET";
			style=1;
			onMouseButtonUp="[""ToggleTargetMenu"",0] call ace_sys_spectator_fnc_spectate_events";
		};
		class tName: ACE_KEGsRscText
		{
			idc=55004;
			x="SafeZoneX + 0.015";
			y="SafeZoneY + SafeZoneH-0.06";
			w="SafeZoneW-(0.015)";
			h=0.059999999;
			text="$STR_ACE_SPECT_UNKNOWN";
			style=0;
			sizeEx=0.023;
			colorText[]={1,1,1,0.89999998};
			font="Zeppelin32";
		};
		class tHelp: ACE_KEGsRscText
		{
			type=13;
			idc=55012;
			x="SafeZoneX + 0.015*3";
			y="SafeZoneY + 0.06*3";
			w="SafeZoneW-(2*0.015*3)";
			h="SafeZoneH-(2*0.06*2)";
			text="";
			style=2;
			sizeEx=0.025;
			size=0.025;
			colorText[]={1,1,1,1};
			color[]={0,0,0,1};
			font="LucidaConsoleB";
			class Attributes
			{
				font="Bitstream";
				color="#ffffff";
				align="left";
				shadow=1;
			};
		};
		class tDebug: tCamera
		{
			idc=55100;
			text="";
			style=2;
			x="SafeZoneX";
			y="SafeZoneY";
			w="SafeZoneW";
			h="SafeZoneH";
			action="";
		};
		class map: ACE_KEGsRscMapControl
		{
			colorOutside[]={0,0,0,1};
			colorRailWay[]={0,0,0,1};
			maxSatelliteAlpha=0;
			alphaFadeStartScale=1;
			alphaFadeEndScale=1.1;
			class Task: Task
			{
				icon="\ca\ui\data\map_waypoint_ca.paa";
				size=20;
				color[]={0,0.89999998,0,1};
				importance="1.2 * 16 * 0.05";
				coefMin=0.89999998;
				coefMax=4;
			};
			class CustomMark: CustomMark
			{
				icon="\ca\ui\data\map_waypoint_ca.paa";
				color[]={0,0,1,1};
				size=18;
				importance=1;
				coefMin=1;
				coefMax=1;
			};
			idc=55013;
			x="SafeZoneX + SafeZoneW-0.3";
			y="SafeZoneY + SafeZoneH-0.3";
			w=0.30000001;
			h=0.30000001;
			colorBackground[]={0.69999999,0.69999999,0.69999999,0.75};
			sizeExLabel=0.023;
			sizeExGrid=0.023;
			sizeExUnits=0.023;
			sizeExNames=0.023;
			sizeExInfo=0.023;
			sizeExLevel=0.023;
			showCountourInterval="false";
			onMouseZChanged="[""MouseZChangedminimap"",_this] call ace_sys_spectator_fnc_spectate_events";
			onMouseButtonDown="[""MouseButtonDownminimap"",_this] call ace_sys_spectator_fnc_spectate_events";
			class Command: Command
			{
				icon="#(argb,8,8,3)color(1,1,1,1)";
				color[]={0,0,0,1};
				size=18;
				importance=1;
				coefMin=1;
				coefMax=1;
			};
			class ActiveMarker: ActiveMarker
			{
				color[]={0.30000001,0.1,0.89999998,1};
				size=50;
			};
		};
		class dummy_map: ACE_SP_Dummy_Map
		{
			x=-1;
			y=-1;
			w=0;
			h=0;
			onDraw="call ace_sys_spectator_fnc_onmapdraw";
		};
		class mapFullBG: BackgroundTop
		{
			idc=55015;
			x="SafeZoneX";
			y="SafeZoneY";
			w="SafeZoneW";
			h="SafeZoneH";
			colorBackground[]={0,0,0,1};
		};
		class mapFull: map
		{
			colorOutside[]={0,0,0,1};
			colorRailWay[]={0,0,0,1};
			maxSatelliteAlpha=0;
			alphaFadeStartScale=1;
			alphaFadeEndScale=1.1;
			showCountourInterval="true";
			idc=55014;
			x="SafeZoneX";
			y="SafeZoneY + 0.06";
			w="SafeZoneW";
			h="SafeZoneH-(0.06*2)";
			colorBackground[]={0.85000002,0.85000002,0.85000002,1};
		};
		class RespButton1
		{
			idc=50018;
			type=16;
			style=0;
			text="Respawn 1";
			action="[] spawn ace_sys_spectator_fnc_rbutton1";
			x="SafeZoneX + 10.77";
			y="SafeZoneY + 0.42";
			w=0.23;
			h=0.104575;
			size=0.039209999;
			sizeEx=0.039209999;
			color[]={0.54299998,0.57419997,0.4102,0.69999999};
			color2[]={0.94999999,0.94999999,0.94999999,0.69999999};
			colorBackground[]={1,1,1,0.69999999};
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
			textureNoShortcut="";
			animTextureNormal="\ca\ui\data\ui_button_normal_ca.paa";
			animTextureDisabled="\ca\ui\data\ui_button_disabled_ca.paa";
			animTextureOver="\ca\ui\data\ui_button_over_ca.paa";
			animTextureFocused="\ca\ui\data\ui_button_focus_ca.paa";
			animTexturePressed="\ca\ui\data\ui_button_down_ca.paa";
			animTextureDefault="\ca\ui\data\ui_button_default_ca.paa";
			period=0.40000001;
			font="Zeppelin32";
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
				shadow="true";
			};
		};
		class RespButton2
		{
			idc=50019;
			type=16;
			style=0;
			text="Respawn 2";
			action="[] spawn ace_sys_spectator_fnc_rbutton2";
			x="SafeZoneX + 10.77";
			y="SafeZoneY + 0.48";
			w=0.23;
			h=0.104575;
			size=0.039209999;
			sizeEx=0.039209999;
			color[]={0.54299998,0.57419997,0.4102,0.69999999};
			color2[]={0.94999999,0.94999999,0.94999999,0.69999999};
			colorBackground[]={1,1,1,0.69999999};
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
			textureNoShortcut="";
			animTextureNormal="\ca\ui\data\ui_button_normal_ca.paa";
			animTextureDisabled="\ca\ui\data\ui_button_disabled_ca.paa";
			animTextureOver="\ca\ui\data\ui_button_over_ca.paa";
			animTextureFocused="\ca\ui\data\ui_button_focus_ca.paa";
			animTexturePressed="\ca\ui\data\ui_button_down_ca.paa";
			animTextureDefault="\ca\ui\data\ui_button_default_ca.paa";
			period=0.40000001;
			font="Zeppelin32";
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
				shadow="true";
			};
		};
		class RespButton3
		{
			idc=50020;
			type=16;
			style=0;
			text="Respawn 3";
			action="[] spawn ace_sys_spectator_fnc_rbutton3";
			x="SafeZoneX + 10.77";
			y="SafeZoneY + 0.54";
			w=0.23;
			h=0.104575;
			size=0.039209999;
			sizeEx=0.039209999;
			color[]={0.54299998,0.57419997,0.4102,0.69999999};
			color2[]={0.94999999,0.94999999,0.94999999,0.69999999};
			colorBackground[]={1,1,1,0.69999999};
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
			textureNoShortcut="";
			animTextureNormal="\ca\ui\data\ui_button_normal_ca.paa";
			animTextureDisabled="\ca\ui\data\ui_button_disabled_ca.paa";
			animTextureOver="\ca\ui\data\ui_button_over_ca.paa";
			animTextureFocused="\ca\ui\data\ui_button_focus_ca.paa";
			animTexturePressed="\ca\ui\data\ui_button_down_ca.paa";
			animTextureDefault="\ca\ui\data\ui_button_default_ca.paa";
			period=0.40000001;
			font="Zeppelin32";
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
				shadow="true";
			};
		};
		class RespButton4
		{
			idc=50021;
			type=16;
			style=0;
			text="Respawn 4";
			action="[] spawn ace_sys_spectator_fnc_rbutton4";
			x="SafeZoneX + 10.77";
			y="SafeZoneY + 0.6";
			w=0.23;
			h=0.104575;
			size=0.039209999;
			sizeEx=0.039209999;
			color[]={0.54299998,0.57419997,0.4102,0.69999999};
			color2[]={0.94999999,0.94999999,0.94999999,0.69999999};
			colorBackground[]={1,1,1,0.69999999};
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
			textureNoShortcut="";
			animTextureNormal="\ca\ui\data\ui_button_normal_ca.paa";
			animTextureDisabled="\ca\ui\data\ui_button_disabled_ca.paa";
			animTextureOver="\ca\ui\data\ui_button_over_ca.paa";
			animTextureFocused="\ca\ui\data\ui_button_focus_ca.paa";
			animTexturePressed="\ca\ui\data\ui_button_down_ca.paa";
			animTextureDefault="\ca\ui\data\ui_button_default_ca.paa";
			period=0.40000001;
			font="Zeppelin32";
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
				shadow="true";
			};
		};
		class lifeTime: ACE_KEGsRscText
		{
			idc=50022;
			x="SafeZoneX + 0.015+ 0.425";
			y="SafeZoneY + SafeZoneH-0.06";
			w=0.30000001;
			h=0.059999999;
			text="";
			style=0;
			sizeEx=0.023;
			colorText[]={1,1,1,0.89999998};
			font="Zeppelin32";
		};
		class compass: ACE_KEGsRscText
		{
			idc=50023;
			x="SafeZoneX + SafeZoneW - 0.3- 0.1";
			y="SafeZoneY + SafeZoneH-0.06";
			w=0.1;
			h=0.059999999;
			text="";
			style=0;
			sizeEx=0.023;
			colorText[]={1,1,1,0.89999998};
			font="Zeppelin32";
		};
		class ViewDistance: ACE_KEGsRscControlsGroup
		{
			idc=50024;
			class VScrollbar
			{
				color[]={0.87840003,0.84710002,0.65100002,1};
				width=0.02;
				autoScrollSpeed=-1;
				autoScrollDelay=5;
				autoScrollRewind=0;
			};
			class HScrollbar
			{
				color[]={0,0,0,0};
				height=0.001;
			};
			class ScrollBar
			{
				color[]={1,1,1,0.60000002};
				colorActive[]={1,1,1,1};
				colorDisabled[]={1,1,1,0.30000001};
				thumb="\ca\ui\data\ui_border_frame_ca.paa";
				arrowFull="\ca\ui\data\ui_arrow_top_active_ca.paa";
				arrowEmpty="\ca\ui\data\ui_arrow_top_ca.paa";
				border="\ca\ui\data\ui_border_scroll_ca.paa";
				shadow=0;
			};
			x="safezoneX + (safezoneW/2) - 0.25";
			y="safezoneY + 0.25 * safezoneW";
			w=0.5;
			h=0.30000001;
			colorBackground[]={0.2,0.2,0.2,1};
			class controls
			{
				class BackGround: ACE_KEGsRscText
				{
					x=0;
					y=0;
					w=0.5;
					h=0.30000001;
					colorBackground[]={0,0,0,0.69999999};
					text="";
				};
				class VDcaption: ACE_KEGsRscText
				{
					idc=50026;
					x=0.0099999998;
					y=0.0099999998;
					w=0.40000001;
					h=0.1;
					text="Viewdistance";
					style=0;
					sizeEx=0.029999999;
					colorText[]={1,1,1,0.89999998};
					font="Zeppelin32";
				};
				class VDSlider: ACE_SliderH
				{
					idc=50025;
					x=0.02;
					y=0.13;
					w=0.46000001;
					h=0.029999999;
					onSliderPosChanged="_this call ace_sys_spectator_fnc_vdsliderchanged";
				};
				class SaveButton: RespButton1
				{
					idc=-1;
					text="$STR_ACE_SPECT_SAVBUT";
					x=0.0099999998;
					y=0.19;
					action="call ace_sys_spectator_fnc_vdsavebuttonclick;((uiNamespace getVariable 'ace_sys_spectator_rscSpectate') displayCtrl 50024) ctrlShow false";
				};
				class CancelButton: SaveButton
				{
					text="$STR_ACE_SPECT_CANCBUT";
					x=0.25299999;
					action="((uiNamespace getVariable 'ace_sys_spectator_rscSpectate') displayCtrl 50024) ctrlShow false";
				};
			};
		};
	};
};
class ACE_rscSpectateBirdMap
{
	idd=-1;
	movingEnable=0;
	onLoad="uiNamespace setVariable ['ace_sys_spectator_rscSpectateBirdMap', _this select 0]";
	onUnLoad="uiNamespace setVariable ['ace_sys_spectator_rscSpectateBirdMap', nil]";
	class controls
	{
		class map: ACE_KEGsRscMapControl
		{
			colorOutside[]={0,0,0,1};
			colorRailWay[]={0,0,0,1};
			maxSatelliteAlpha=0;
			alphaFadeStartScale=1;
			alphaFadeEndScale=1.1;
			class Task: Task
			{
				icon="\ca\ui\data\map_waypoint_ca.paa";
				size=20;
				color[]={0,0.89999998,0,1};
				importance="1.2 * 16 * 0.05";
				coefMin=0.89999998;
				coefMax=4;
			};
			class CustomMark: CustomMark
			{
				icon="\ca\ui\data\map_waypoint_ca.paa";
				color[]={0,0,1,1};
				size=18;
				importance=1;
				coefMin=1;
				coefMax=1;
			};
			idc=55013;
			x="SafeZoneX + SafeZoneW-0.3";
			y="SafeZoneY + SafeZoneH-0.3";
			w=0.30000001;
			h=0.30000001;
			colorBackground[]={0.69999999,0.69999999,0.69999999,0.75};
			sizeExLabel=0.023;
			sizeExGrid=0.023;
			sizeExUnits=0.023;
			sizeExNames=0.023;
			sizeExInfo=0.023;
			sizeExLevel=0.023;
			showCountourInterval="false";
			class Command: Command
			{
				icon="#(argb,8,8,3)color(1,1,1,1)";
				color[]={0,0,0,1};
				size=18;
				importance=1;
				coefMin=1;
				coefMax=1;
			};
			class ActiveMarker: ActiveMarker
			{
				color[]={0.30000001,0.1,0.89999998,1};
				size=50;
			};
		};
		class BackgroundTop: ACE_KEGsRscText
		{
			idc=55009;
			x="SafeZoneX";
			y="SafeZoneY";
			w="SafeZoneW";
			h="0.06+1";
			colorBackground[]={0,0,0,1};
		};
		class mapFullBG: BackgroundTop
		{
			idc=55015;
			x="SafeZoneX";
			y="SafeZoneY";
			w="SafeZoneW";
			h="SafeZoneH";
			colorBackground[]={0,0,0,1};
		};
		class mapFull: map
		{
			colorOutside[]={0,0,0,1};
			colorRailWay[]={0,0,0,1};
			maxSatelliteAlpha=0;
			alphaFadeStartScale=1;
			alphaFadeEndScale=1.1;
			showCountourInterval="true";
			idc=55014;
			x="SafeZoneX";
			y="SafeZoneY + 0.06";
			w="SafeZoneW";
			h="SafeZoneH-(0.06*2)";
			colorBackground[]={0.85000002,0.85000002,0.85000002,1};
		};
	};
};
class RscTitles
{
	class ACE_SpectRecogOverlay
	{
		idd=135943;
		movingEnable=1;
		duration=9.9999998e+010;
		fadein=0.5;
		fadeout=0.5;
		name="ACE_SpectRecogOverlay";
		onLoad="with uiNameSpace do {ACE_SpectRecogOverlay = _this select 0}";
		class controls
		{
			class ACE_SpectRecogOverlay_Text
			{
				idc=1;
				type=0;
				colorBackground[]={0,0,0,0};
				colorText[]={0.75,0.75,0.75,1};
				text="";
				style="0x00";
				font="Zeppelin32";
				sizeEx=0.023;
				x=0;
				y=0;
				w=0.40000001;
				h=0.15000001;
			};
		};
	};
};
class ACE_MAP
{
	idd=55001;
	movingEnable=0;
	class controls
	{
		class BackgroundTop: ACE_KEGsRscText
		{
			idc=55009;
			x=-3;
			y=-1;
			w=7;
			h="0.06+1";
			colorBackground[]={0,0,0,1};
		};
		class BackgroundBottom: BackgroundTop
		{
			idc=55010;
			y="1.0-0.06";
		};
		class map: ACE_KEGsRscMapControl
		{
			idc=55013;
			x="1.0-0.3";
			y="1.0-0.3";
			w=0.30000001;
			h=0.30000001;
			colorBackground[]={0.69999999,0.69999999,0.69999999,0.75};
			sizeExLabel=0.023;
			sizeExGrid=0.023;
			sizeExUnits=0.023;
			sizeExNames=0.023;
			sizeExInfo=0.023;
			sizeExLevel=0.023;
			showCountourInterval="false";
			onMouseZChanged="[""MouseZChangedminimap"", _this] call ace_sys_spectator_fnc_spectate_events";
			class Command
			{
				icon="#(argb,8,8,3)color(1,1,1,1)";
				color[]={0,0,0,1};
				size=18;
				importance=1;
				coefMin=1;
				coefMax=1;
			};
			class ActiveMarker
			{
				color[]={0.30000001,0.1,0.89999998,1};
				size=50;
			};
		};
		class mapFullBG: BackgroundTop
		{
			idc=55015;
			x=-3;
			y=-3;
			w=9;
			h=9;
			colorBackground[]={0,0,0,1};
		};
		class mapFull: map
		{
			showCountourInterval="true";
			idc=55014;
			x=0;
			y=0.059999999;
			w=1;
			h="1.0-(0.06*2)";
			colorBackground[]={0.85000002,0.85000002,0.85000002,1};
		};
	};
};
