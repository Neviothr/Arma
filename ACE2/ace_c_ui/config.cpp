class CfgPatches
{
	class ace_c_ui
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.62;
		requiredAddons[]=
		{
			"CAUI",
			"Warfare2",
			"CAFonts",
			"ace_m_compass",
			"Takistan",
			"Desert_E",
			"zargabad",
			"Shapur_BAF",
			"ProvingGrounds_PMC"
		};
	};
};
class CfgInGameUI
{
	class Cursor
	{
		iconComplex="ca\ui\data\clear_empty.paa";
	};
	class DefaultAction
	{
		size=0;
	};
};
class RscIGUIText;
class RscEdit;
class RscInGameUI
{
	class RscWeaponZeroing
	{
		class CA_ZeroingText: RscIGUIText
		{
			text="$STR_DISP_ACE_ZEROING";
		};
	};
	class RscWeaponRangeZeroing
	{
		class CA_ZeroingText: RscIGUIText
		{
			text="$STR_DISP_ACE_ZEROING";
		};
	};
	class RscUnitInfo_AH64D_gunner
	{
		class CA_WeaponZeroingText: RscIGUIText
		{
			text="$STR_DISP_ACE_ZEROING";
		};
	};
};
class cfgActions
{
	class None;
	class GetInCommander: None
	{
		textDefault="";
	};
	class GetInDriver: None
	{
		textDefault="";
	};
	class GetInPilot: None
	{
		textDefault="";
	};
	class GetInGunner: None
	{
		textDefault="";
	};
	class GetInCargo: None
	{
		textDefault="";
	};
	class GetInTurret: None
	{
		textDefault="";
	};
	class Heal: None
	{
		textDefault="";
	};
	class HealSoldier: None
	{
		textDefault="";
	};
	class FirstAid: None
	{
		textDefault="";
	};
	class Repair: None
	{
		textDefault="";
	};
	class Refuel: None
	{
		textDefault="";
	};
	class Rearm: None
	{
		textDefault="";
	};
	class GetOut: None
	{
		textDefault="";
	};
	class LightOn: None
	{
		textDefault="";
	};
	class LightOff: None
	{
		textDefault="";
	};
	class EngineOn: None
	{
		textDefault="";
	};
	class EngineOff: None
	{
		textDefault="";
	};
	class SwitchWeapon: None
	{
		textDefault="";
	};
	class SwitchMagazine: SwitchWeapon
	{
	};
	class HideWeapon: SwitchWeapon
	{
		textDefault="";
	};
	class UseWeapon: None
	{
		textDefault="";
	};
	class LoadMagazine: None
	{
		textDefault="";
	};
	class LoadOtherMagazine: LoadMagazine
	{
	};
	class LoadEmptyMagazine: LoadMagazine
	{
	};
	class TakeWeapon: None
	{
		textDefault="";
	};
	class TakeDropWeapon: TakeWeapon
	{
		textDefault="";
	};
	class TakeMagazine: None
	{
		textDefault="";
	};
	class TakeDropMagazine: TakeMagazine
	{
		textDefault="";
	};
	class TakeFlag: None
	{
		textDefault="";
	};
	class ReturnFlag: None
	{
		textDefault="";
	};
	class TurnIn: None
	{
		textDefault="";
	};
	class TurnOut: None
	{
		textDefault="";
	};
	class WeaponInHand: None
	{
		textDefault="";
	};
	class WeaponOnBack: None
	{
		textDefault="";
	};
	class SitDown: None
	{
		textDefault="";
	};
	class Land: None
	{
		textDefault="";
	};
	class cancelLand: None
	{
		textDefault="";
	};
	class Eject: None
	{
		textDefault="";
	};
	class MoveToDriver: None
	{
		textDefault="";
	};
	class MoveToPilot: MoveToDriver
	{
		textDefault="";
	};
	class MoveToGunner: None
	{
		textDefault="";
	};
	class MoveToCommander: None
	{
		textDefault="";
	};
	class MoveToCargo: None
	{
		textDefault="";
	};
	class MoveToTurret: None
	{
		textDefault="";
	};
	class HideBody: None
	{
		textDefault="";
	};
	class TouchOff: None
	{
		textDefault="";
	};
	class SetTimer: None
	{
		textDefault="";
	};
	class StartTimer: SetTimer
	{
		textDefault="";
	};
	class Deactivate: None
	{
		textDefault="";
	};
	class NVGoggles: None
	{
		textDefault="";
	};
	class NVGogglesOff: NVGoggles
	{
		textDefault="";
	};
	class ManualFire: None
	{
		textDefault="";
	};
	class ManualFireCancel: ManualFire
	{
		textDefault="";
	};
	class AutoHover: None
	{
		textDefault="";
	};
	class AutoHoverCancel: AutoHover
	{
		textDefault="";
	};
	class StrokeFist: None
	{
		textDefault="";
	};
	class StrokeGun: None
	{
		textDefault="";
	};
	class LadderUp: None
	{
		textDefault="";
	};
	class LadderDown: None
	{
		textDefault="";
	};
	class LadderOnDown: None
	{
		textDefault="";
	};
	class LadderOnUp: None
	{
		textDefault="";
	};
	class LadderOff: None
	{
		textDefault="";
	};
	class FireInflame: None
	{
		textDefault="";
	};
	class FirePutDown: None
	{
		textDefault="";
	};
	class LandGear: None
	{
		textDefault="";
	};
	class LandGearUp: LandGear
	{
		textDefault="";
	};
	class FlapsDown: None
	{
		textDefault="";
	};
	class FlapsUp: None
	{
		textDefault="";
	};
	class Salute: None
	{
		textDefault="";
	};
	class ScudLaunch: None
	{
		textDefault="";
	};
	class ScudStart: None
	{
		textDefault="";
	};
	class ScudCancel: None
	{
		textDefault="";
	};
	class User: None
	{
		textDefault="";
	};
	class DropWeapon: None
	{
		textDefault="";
	};
	class PutWeapon: DropWeapon
	{
		textDefault="";
	};
	class DropMagazine: None
	{
		textDefault="";
	};
	class PutMagazine: DropMagazine
	{
		textDefault="";
	};
	class UserType: None
	{
		textDefault="";
	};
	class HandGunOn: None
	{
		textDefault="";
	};
	class HandGunOnStand: HandGunOn
	{
		textDefault="";
	};
	class HandGunOff: None
	{
		textDefault="";
	};
	class HandGunOffStand: HandGunOff
	{
		textDefault="";
	};
	class TakeMine: None
	{
		textDefault="";
	};
	class DeactivateMine: None
	{
		textDefault="";
	};
	class UseMagazine: None
	{
		textDefault="";
	};
	class IngameMenu: None
	{
		textDefault="";
	};
	class cancelTakeFlag: None
	{
		textDefault="";
	};
	class cancelAction: None
	{
		textDefault="";
	};
	class MarkEntity: None
	{
		textDefault="";
	};
	class MarkWeapon: MarkEntity
	{
		textDefault="";
	};
	class TeamSwitch: None
	{
		textDefault="";
	};
	class Gear: None
	{
		textDefault="";
	};
	class Talk: None
	{
		textDefault="";
	};
	class Tell: None
	{
		textDefault="";
	};
	class Surrender: None
	{
		textDefault="";
	};
	class GetOver: None
	{
		textDefault="";
	};
};
class RscObject;
class RscWatch: RscObject
{
	scale=1.5;
};
class RscMapControl;
class RscDisplayMainMap
{
	class controlsBackground
	{
		class CA_Map: RscMapControl
		{
			maxSatelliteAlpha=0;
			colorBackground[]={0.92941201,0.92941201,0.92941201,1};
			colorOutside[]={0.92941201,0.92941201,0.92941201,1};
			colorCountlines[]={0.64705902,0.533333,0.286275,1};
			colorMainCountlines[]={0.85882401,0,0,1};
			colorForest[]={0.60000002,0.80000001,0.2,0.25};
			colorLevels[]={0,0,0,1};
			colorRocks[]={0.5,0.5,0.5,0.5};
			sizeExLevel=0.029999999;
			showCountourInterval=1;
			class Bush
			{
				icon="";
				color[]={0.44999999,0.63999999,0.33000001,0};
				size=14;
				importance="0.2 * 14 * 0.05";
				coefMin=0.25;
				coefMax=4;
			};
			class SmallTree
			{
				icon="";
				color[]={0.44999999,0.63999999,0.33000001,0};
				size=12;
				importance="0.6 * 12 * 0.05";
				coefMin=0.25;
				coefMax=4;
			};
			class Tree
			{
				icon="";
				color[]={0.44999999,0.63999999,0.33000001,0};
				size=12;
				importance="0.9 * 16 * 0.05";
				coefMin=0.25;
				coefMax=4;
			};
			class Legend
			{
				x="SafeZoneX+SafeZoneW-.340";
				y="SafeZoneY+SafeZoneH-.152";
				w=0.34;
				h=0.152;
				font="Zeppelin32";
				sizeEx=0.039209999;
				colorBackground[]={0.90600002,0.90100002,0.88,0.5};
				color[]={0,0,0,0.75};
			};
		};
	};
	class objects
	{
		class Compass: RscObject
		{
			scale="(0.35 * 2.85)";
			model="\x\ace\addons\m_compass\Compass.p3d";
		};
	};
};
class RscMiniMap
{
	class controlsBackground
	{
		class CA_MiniMap: RscMapControl
		{
			maxSatelliteAlpha=0;
			alphaFadeStartScale=0.0099999998;
			alphaFadeEndScale=0.015;
			colorBackground[]={0.47,0.486,0.352,1};
			colorOutside[]={0.47,0.486,0.352,1};
			colorCountlines[]={0,0,0,0.5};
			colorMainCountlines[]={0,0,0,1};
			colorSea[]={0,0,0,0.99000001};
			colorForest[]={0,0,0,0.69999999};
			colorForestBorder[]={0,0,0,0.94999999};
			colorLevels[]={0.40000001,0.40000001,0.40000001,0.5};
			colorRocks[]={0,0,0,0};
			colorPowerLines[]={0,0,0,0.80000001};
			colorRailWay[]={0,0,0,1};
			colorCountlinesWater[]={0,0,0,0};
			colorMainCountlinesWater[]={0,0,0,0};
			colorInactive[]={0,0,0,1};
			sizeExGrid=0;
			sizeExLevel=0.029999999;
			showCountourInterval=1;
			class Legend
			{
				colorBackground[]={0.90600002,0.90100002,0.88,0};
				color[]={0,0,0,1};
				x="SafeZoneX";
				y="SafeZoneY";
				w=0.34;
				h=0.152;
				font="Zeppelin32";
				sizeEx=0.039209999;
			};
			class ActiveMarker
			{
				color[]={0,0,0,1};
				size=50;
			};
			class Command
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_waypoint_ca.paa";
				size=18;
				importance=1;
				coefMin=1;
				coefMax=1;
			};
			class Task
			{
				colorCreated[]={0,0,0,1};
				colorCanceled[]={0,0,0,0.5};
				colorDone[]={0,0,0,1};
				colorFailed[]={0,0,0,1};
				color[]={0,0,0,1};
				icon="\ca\ui\data\ui_taskstate_current_CA.paa";
				iconCreated="\ca\ui\data\ui_taskstate_new_CA.paa";
				iconCanceled="#(argb,8,8,3)color(0,0,0,0)";
				iconDone="\ca\ui\data\ui_taskstate_done_CA.paa";
				iconFailed="\ca\ui\data\ui_taskstate_failed_CA.paa";
				size=27;
				importance=1;
				coefMin=1;
				coefMax=1;
			};
			class CustomMark
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_waypoint_ca.paa";
				size=18;
				importance=1;
				coefMin=1;
				coefMax=1;
			};
			class Tree
			{
				color[]={0,0,0,0};
				icon="";
				size=12;
				importance="0.9 * 16 * 0.05";
				coefMin=0.25;
				coefMax=4;
			};
			class SmallTree
			{
				color[]={0,0,0,0};
				icon="";
				size=12;
				importance="0.6 * 12 * 0.05";
				coefMin=0.25;
				coefMax=4;
			};
			class Bush
			{
				color[]={0,0,0,0};
				icon="";
				size=14;
				importance="0.2 * 14 * 0.05";
				coefMin=0.25;
				coefMax=4;
			};
			class Church
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_church_ca.paa";
				size=16;
				importance="2 * 16 * 0.05";
				coefMin=0.89999998;
				coefMax=4;
			};
			class Chapel
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_chapel_ca.paa";
				size=16;
				importance="1 * 16 * 0.05";
				coefMin=0.89999998;
				coefMax=4;
			};
			class Cross
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_cross_ca.paa";
				size=16;
				importance="0.7 * 16 * 0.05";
				coefMin=0.25;
				coefMax=4;
			};
			class Rock
			{
				color[]={0,0,0,0};
				icon="";
				size=12;
				importance="0.5 * 12 * 0.05";
				coefMin=0.25;
				coefMax=4;
			};
			class Bunker
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_bunker_ca.paa";
				size=14;
				importance="1.5 * 14 * 0.05";
				coefMin=0.25;
				coefMax=4;
			};
			class Fortress
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_bunker_ca.paa";
				size=16;
				importance="2 * 16 * 0.05";
				coefMin=0.25;
				coefMax=4;
			};
			class Fountain
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_fountain_ca.paa";
				size=11;
				importance="1 * 12 * 0.05";
				coefMin=0.25;
				coefMax=4;
			};
			class ViewTower
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_viewtower_ca.paa";
				size=16;
				importance="2.5 * 16 * 0.05";
				coefMin=0.5;
				coefMax=4;
			};
			class Lighthouse
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_lighthouse_ca.paa";
				size=14;
				importance="3 * 16 * 0.05";
				coefMin=0.89999998;
				coefMax=4;
			};
			class Quay
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_quay_ca.paa";
				size=16;
				importance="2 * 16 * 0.05";
				coefMin=0.5;
				coefMax=4;
			};
			class Fuelstation
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_fuelstation_ca.paa";
				size=16;
				importance="2 * 16 * 0.05";
				coefMin=0.75;
				coefMax=4;
			};
			class Hospital
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_hospital_ca.paa";
				size=16;
				importance="2 * 16 * 0.05";
				coefMin=0.5;
				coefMax=4;
			};
			class BusStop
			{
				color[]={0,0,0,0};
				icon="";
				size=12;
				importance="1 * 10 * 0.05";
				coefMin=0.25;
				coefMax=4;
			};
			class Transmitter
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_transmitter_ca.paa";
				size=20;
				importance="2 * 16 * 0.05";
				coefMin=0.89999998;
				coefMax=4;
			};
			class Stack
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_stack_ca.paa";
				size=20;
				importance="2 * 16 * 0.05";
				coefMin=0.89999998;
				coefMax=4;
			};
			class Ruin
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_ruin_ca.paa";
				size=16;
				importance="1.2 * 16 * 0.05";
				coefMin=1;
				coefMax=4;
			};
			class Tourism
			{
				color[]={0,0,1,1};
				icon="\ca\ui\data\map_tourism_ca.paa";
				size=16;
				importance="1 * 16 * 0.05";
				coefMin=0.69999999;
				coefMax=4;
			};
			class Watertower
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_watertower_ca.paa";
				size=20;
				importance="1.2 * 16 * 0.05";
				coefMin=0.89999998;
				coefMax=4;
			};
			class Waypoint
			{
				color[]={0,0,0,1};
				size=24;
				importance=1;
				coefMin=1;
				coefMax=1;
				icon="\ca\ui\data\map_waypoint_ca.paa";
			};
			class WaypointCompleted
			{
				color[]={0,0,0,1};
				size=24;
				importance=1;
				coefMin=1;
				coefMax=1;
				icon="\ca\ui\data\map_waypoint_completed_ca.paa";
			};
		};
	};
};
class RscMiniMapSmall: RscMiniMap
{
	class controlsBackground
	{
		class CA_MiniMap: RscMapControl
		{
			maxSatelliteAlpha=0;
			alphaFadeStartScale=0.0099999998;
			alphaFadeEndScale=0.015;
			colorBackground[]={0.47,0.486,0.352,1};
			colorOutside[]={0.47,0.486,0.352,1};
			colorCountlines[]={0,0,0,0.5};
			colorMainCountlines[]={0,0,0,1};
			colorSea[]={0,0,0,0.99000001};
			colorForest[]={0,0,0,0.69999999};
			colorForestBorder[]={0,0,0,0.94999999};
			colorLevels[]={0.40000001,0.40000001,0.40000001,0.5};
			colorRocks[]={0,0,0,0};
			colorPowerLines[]={0,0,0,0.80000001};
			colorRailWay[]={0,0,0,1};
			colorCountlinesWater[]={0,0,0,0};
			colorMainCountlinesWater[]={0,0,0,0};
			colorInactive[]={0,0,0,1};
			sizeExGrid=0;
			sizeExLevel=0.029999999;
			showCountourInterval=1;
			class Legend
			{
				colorBackground[]={0.90600002,0.90100002,0.88,0};
				color[]={0,0,0,1};
				x="SafeZoneX";
				y="SafeZoneY";
				w=0.34;
				h=0.152;
				font="Zeppelin32";
				sizeEx=0.039209999;
			};
			class ActiveMarker
			{
				color[]={0,0,0,1};
				size=50;
			};
			class Command
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_waypoint_ca.paa";
				size=18;
				importance=1;
				coefMin=1;
				coefMax=1;
			};
			class Task
			{
				colorCreated[]={0,0,0,1};
				colorCanceled[]={0,0,0,0.5};
				colorDone[]={0,0,0,1};
				colorFailed[]={0,0,0,1};
				color[]={0,0,0,1};
				icon="\ca\ui\data\ui_taskstate_current_CA.paa";
				iconCreated="\ca\ui\data\ui_taskstate_new_CA.paa";
				iconCanceled="#(argb,8,8,3)color(0,0,0,0)";
				iconDone="\ca\ui\data\ui_taskstate_done_CA.paa";
				iconFailed="\ca\ui\data\ui_taskstate_failed_CA.paa";
				size=27;
				importance=1;
				coefMin=1;
				coefMax=1;
			};
			class CustomMark
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_waypoint_ca.paa";
				size=18;
				importance=1;
				coefMin=1;
				coefMax=1;
			};
			class Tree
			{
				color[]={0,0,0,0};
				icon="";
				size=12;
				importance="0.9 * 16 * 0.05";
				coefMin=0.25;
				coefMax=4;
			};
			class SmallTree
			{
				color[]={0,0,0,0};
				icon="";
				size=12;
				importance="0.6 * 12 * 0.05";
				coefMin=0.25;
				coefMax=4;
			};
			class Bush
			{
				color[]={0,0,0,0};
				icon="";
				size=14;
				importance="0.2 * 14 * 0.05";
				coefMin=0.25;
				coefMax=4;
			};
			class Church
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_church_ca.paa";
				size=16;
				importance="2 * 16 * 0.05";
				coefMin=0.89999998;
				coefMax=4;
			};
			class Chapel
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_chapel_ca.paa";
				size=16;
				importance="1 * 16 * 0.05";
				coefMin=0.89999998;
				coefMax=4;
			};
			class Cross
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_cross_ca.paa";
				size=16;
				importance="0.7 * 16 * 0.05";
				coefMin=0.25;
				coefMax=4;
			};
			class Rock
			{
				color[]={0,0,0,0};
				icon="";
				size=12;
				importance="0.5 * 12 * 0.05";
				coefMin=0.25;
				coefMax=4;
			};
			class Bunker
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_bunker_ca.paa";
				size=14;
				importance="1.5 * 14 * 0.05";
				coefMin=0.25;
				coefMax=4;
			};
			class Fortress
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_bunker_ca.paa";
				size=16;
				importance="2 * 16 * 0.05";
				coefMin=0.25;
				coefMax=4;
			};
			class Fountain
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_fountain_ca.paa";
				size=11;
				importance="1 * 12 * 0.05";
				coefMin=0.25;
				coefMax=4;
			};
			class ViewTower
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_viewtower_ca.paa";
				size=16;
				importance="2.5 * 16 * 0.05";
				coefMin=0.5;
				coefMax=4;
			};
			class Lighthouse
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_lighthouse_ca.paa";
				size=14;
				importance="3 * 16 * 0.05";
				coefMin=0.89999998;
				coefMax=4;
			};
			class Quay
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_quay_ca.paa";
				size=16;
				importance="2 * 16 * 0.05";
				coefMin=0.5;
				coefMax=4;
			};
			class Fuelstation
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_fuelstation_ca.paa";
				size=16;
				importance="2 * 16 * 0.05";
				coefMin=0.75;
				coefMax=4;
			};
			class Hospital
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_hospital_ca.paa";
				size=16;
				importance="2 * 16 * 0.05";
				coefMin=0.5;
				coefMax=4;
			};
			class BusStop
			{
				color[]={0,0,0,0};
				icon="";
				size=12;
				importance="1 * 10 * 0.05";
				coefMin=0.25;
				coefMax=4;
			};
			class Transmitter
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_transmitter_ca.paa";
				size=20;
				importance="2 * 16 * 0.05";
				coefMin=0.89999998;
				coefMax=4;
			};
			class Stack
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_stack_ca.paa";
				size=20;
				importance="2 * 16 * 0.05";
				coefMin=0.89999998;
				coefMax=4;
			};
			class Ruin
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_ruin_ca.paa";
				size=16;
				importance="1.2 * 16 * 0.05";
				coefMin=1;
				coefMax=4;
			};
			class Tourism
			{
				color[]={0,0,1,1};
				icon="\ca\ui\data\map_tourism_ca.paa";
				size=16;
				importance="1 * 16 * 0.05";
				coefMin=0.69999999;
				coefMax=4;
			};
			class Watertower
			{
				color[]={0,0,0,1};
				icon="\ca\ui\data\map_watertower_ca.paa";
				size=20;
				importance="1.2 * 16 * 0.05";
				coefMin=0.89999998;
				coefMax=4;
			};
			class Waypoint
			{
				color[]={0,0,0,1};
				size=24;
				importance=1;
				coefMin=1;
				coefMax=1;
				icon="\ca\ui\data\map_waypoint_ca.paa";
			};
			class WaypointCompleted
			{
				color[]={0,0,0,1};
				size=24;
				importance=1;
				coefMin=1;
				coefMax=1;
				icon="\ca\ui\data\map_waypoint_completed_ca.paa";
			};
		};
	};
};
class RscDisplayChat
{
	class controls
	{
		class CA_Line: RscEdit
		{
			colorBackground[]={0,0,0,0.40000001};
		};
	};
};
class CfgWorlds
{
	class DefaultWorld
	{
		class Weather;
	};
	class CAWorld: DefaultWorld
	{
		class Grid
		{
		};
		class Weather: Weather
		{
			blackSurfaceTemperatureDelta=20;
			whiteSurfaceTemperatureDelta=-8;
		};
	};
	class Chernarus: CAWorld
	{
		class Grid: Grid
		{
			offsetY=15360;
			class Zoom1
			{
				zoomMax=9.9999997e-005;
				format="XY";
				formatX="0000";
				formatY="0000";
				stepX=10;
				stepY=-10;
			};
			class Zoom2
			{
				zoomMax=0.075000003;
				format="XY";
				formatX="000";
				formatY="000";
				stepX=100;
				stepY=-100;
			};
			class Zoom3
			{
				zoomMax=1;
				format="XY";
				formatX="00";
				formatY="00";
				stepX=1000;
				stepY=-1000;
			};
		};
	};
	class utes: CAWorld
	{
		class Grid: Grid
		{
			offsetY=5120;
			class Zoom1
			{
				zoomMax=9.9999997e-005;
				format="XY";
				formatX="0000";
				formatY="0000";
				stepX=10;
				stepY=-10;
			};
			class Zoom2
			{
				zoomMax=0.30000001;
				format="XY";
				formatX="000";
				formatY="000";
				stepX=100;
				stepY=-100;
			};
			class Zoom3
			{
				zoomMax=1;
				format="XY";
				formatX="00";
				formatY="00";
				stepX=1000;
				stepY=-1000;
			};
		};
	};
	class Desert_E: CAWorld
	{
		class Grid: Grid
		{
			class Zoom1
			{
				zoomMax=9.9999997e-005;
				format="XY";
				formatX="0000";
				formatY="0000";
				stepX=10;
				stepY=-10;
			};
			class Zoom2
			{
				zoomMax=0.30000001;
				format="XY";
				formatX="000";
				formatY="000";
				stepX=100;
				stepY=-100;
			};
			class Zoom3
			{
				zoomMax=1;
				format="XY";
				formatX="00";
				formatY="00";
				stepX=1000;
				stepY=-1000;
			};
		};
	};
	class Takistan: CAWorld
	{
		class Grid: Grid
		{
			class Zoom1
			{
				zoomMax=9.9999997e-005;
				format="XY";
				formatX="0000";
				formatY="0000";
				stepX=10;
				stepY=-10;
			};
			class Zoom2
			{
				zoomMax=0.1;
				format="XY";
				formatX="000";
				formatY="000";
				stepX=100;
				stepY=-100;
			};
			class Zoom3
			{
				zoomMax=1;
				format="XY";
				formatX="00";
				formatY="00";
				stepX=1000;
				stepY=-1000;
			};
		};
	};
	class Zargabad: CAWorld
	{
		class Grid: Grid
		{
			class Zoom1
			{
				zoomMax=9.9999997e-005;
				format="XY";
				formatX="0000";
				formatY="0000";
				stepX=10;
				stepY=-10;
			};
			class Zoom2
			{
				zoomMax=0.18000001;
				format="XY";
				formatX="000";
				formatY="000";
				stepX=100;
				stepY=-100;
			};
			class Zoom3
			{
				zoomMax=1;
				format="XY";
				formatX="00";
				formatY="00";
				stepX=1000;
				stepY=-1000;
			};
		};
	};
	class Shapur_BAF: CAWorld
	{
		class Grid: Grid
		{
			class Zoom1
			{
				zoomMax=9.9999997e-005;
				format="XY";
				formatX="0000";
				formatY="0000";
				stepX=10;
				stepY=-10;
			};
			class Zoom2
			{
				zoomMax=0.30000001;
				format="XY";
				formatX="000";
				formatY="000";
				stepX=100;
				stepY=-100;
			};
			class Zoom3
			{
				zoomMax=1;
				format="XY";
				formatX="00";
				formatY="00";
				stepX=1000;
				stepY=-1000;
			};
		};
	};
	class ProvingGrounds_PMC: CAWorld
	{
		class Grid: Grid
		{
			class Zoom1
			{
				zoomMax=9.9999997e-005;
				format="XY";
				formatX="0000";
				formatY="0000";
				stepX=10;
				stepY=-10;
			};
			class Zoom2
			{
				zoomMax=0.30000001;
				format="XY";
				formatX="000";
				formatY="000";
				stepX=100;
				stepY=-100;
			};
			class Zoom3
			{
				zoomMax=1;
				format="XY";
				formatX="00";
				formatY="00";
				stepX=1000;
				stepY=-1000;
			};
		};
	};
};
class RscPicture;
class RscPictureKeepAspect;
class RscStandardDisplay;
class RscDisplayLoading
{
	class Variants
	{
		class LoadingOne
		{
			class controls
			{
				class LoadingPic: RscPictureKeepAspect
				{
					text="\x\ace\addons\c_ui\data\ls.paa";
				};
			};
		};
	};
};
class RscDisplayLoadMission: RscStandardDisplay
{
	class controlsBackground
	{
		class LoadingPic: RscPictureKeepAspect
		{
			text="\x\ace\addons\c_ui\data\ls.paa";
		};
	};
};
class RscDisplayStart: RscStandardDisplay
{
	class controls
	{
		class LoadingPic: RscPictureKeepAspect
		{
			text="\x\ace\addons\c_ui\data\ls.paa";
		};
	};
};
class CfgWrapperUI
{
	class Background
	{
		texture="\x\ace\addons\c_ui\data\ls.paa";
	};
};
class RscDisplayClient: RscStandardDisplay
{
	class controlsBackground
	{
		class LoadingPic: RscPicture
		{
			text="\x\ace\addons\c_ui\data\ls.paa";
		};
	};
};
class RscButton
{
	soundEnter[]=
	{
		"",
		0.090000004,
		1
	};
	soundPush[]=
	{
		"",
		0.090000004,
		1
	};
	soundClick[]=
	{
		"\ca\ui\data\sound\new1",
		0.07,
		1
	};
	soundEscape[]=
	{
		"",
		0.090000004,
		1
	};
};
class RscShortcutButton
{
	soundEnter[]=
	{
		"",
		0.090000004,
		1
	};
	soundPush[]=
	{
		"",
		0.090000004,
		1
	};
	soundClick[]=
	{
		"\ca\ui\data\sound\new1",
		0.07,
		1
	};
	soundEscape[]=
	{
		"",
		0.090000004,
		1
	};
};
class RscXListBox
{
	soundSelect[]=
	{
		"",
		0.090000004,
		1
	};
};
class RscShortcutButtonMainMenu: RscShortcutButton
{
	soundEnter[]=
	{
		"",
		0.090000004,
		1
	};
	soundPush[]=
	{
		"",
		0.090000004,
		1
	};
	soundClick[]=
	{
		"\ca\ui\data\sound\new1",
		0.07,
		1
	};
	soundEscape[]=
	{
		"",
		0.090000004,
		1
	};
};
class RscShortcutButtonMain: RscShortcutButton
{
	soundEnter[]=
	{
		"",
		0.090000004,
		1
	};
	soundPush[]=
	{
		"",
		0.090000004,
		1
	};
	soundClick[]=
	{
		"\ca\ui\data\sound\new1",
		0.07,
		1
	};
	soundEscape[]=
	{
		"",
		0.090000004,
		1
	};
};
class RscShortcutButtonDiary: RscShortcutButton
{
	soundEnter[]=
	{
		"",
		0.090000004,
		1
	};
	soundPush[]=
	{
		"",
		0.090000004,
		1
	};
	soundClick[]=
	{
		"\ca\ui\data\sound\new1",
		0.07,
		1
	};
	soundEscape[]=
	{
		"",
		0.090000004,
		1
	};
};
class RscShortcutButtonDiaryMap: RscShortcutButton
{
	soundEnter[]=
	{
		"",
		0.090000004,
		1
	};
	soundPush[]=
	{
		"",
		0.090000004,
		1
	};
	soundClick[]=
	{
		"\ca\ui\data\sound\new1",
		0.07,
		1
	};
	soundEscape[]=
	{
		"",
		0.090000004,
		1
	};
};
class WFGUIButton
{
	soundPush[]=
	{
		"",
		0.090000004,
		1
	};
	soundClick[]=
	{
		"\ca\ui\data\sound\new1",
		0.07,
		1
	};
	soundEnter[]=
	{
		"",
		0.1,
		1
	};
	soundEscape[]=
	{
		"",
		0.2,
		1
	};
};
class WFGUIImage
{
	soundClick[]=
	{
		"\ca\ui\data\sound\new1",
		0.2,
		1
	};
	soundEnter[]=
	{
		"",
		0.2,
		1
	};
	soundEscape[]=
	{
		"",
		0.2,
		1
	};
	soundPush[]=
	{
		"",
		0.2,
		1
	};
};
