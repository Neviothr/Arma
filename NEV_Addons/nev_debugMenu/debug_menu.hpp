class RscPicture;
class RscFrame;
class RscText;
class RscListbox;
class RscControlsGroup;
class RscCombo;
class RscButton;
class RscStructuredText;
class RscButtonMenu;
class RscSlider;
class IGUIBack;
class RscEdit;

class nevDebugMenu {
	duration = 99999;
	idd = 80000;
	onLoad = "call NEV_fnc_onLoad";
	class controls {
		// A button to open Zeus
		class zeusButton: RscButton {
			text = "Open Zeus";
			x = "SafeZoneX + (510 / 1920) * SafeZoneW";
			y = "SafeZoneY + (285 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; call NEV_fnc_openZeus";
			tooltip = "Open the Zeus curator interface";
		};

		// A button to open the virtual aresnal
		class virtualArsenalButton: RscButton {
			text = "Virtual arsenal";
			x = "SafeZoneX + (510 / 1920) * SafeZoneW";
			y = "SafeZoneY + (375 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; [""Open"", true] spawn BIS_fnc_arsenal";
			tooltip = "Open the BIS virtual aresnal";
		};

		// A button to use a teleportion function
		class teleportButton: RscButton {
			text = "Teleport";
			x = "SafeZoneX + (510 / 1920) * SafeZoneW";
			y = "SafeZoneY + (420 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; call NEV_fnc_teleport";
			tooltip = "Teleport on map click";
		};

		// A button to open the BI debug console
		class debugConsoleButton: RscButton {
			text = "Debug console";
			x = "SafeZoneX + (510 / 1920) * SafeZoneW";
			y = "SafeZoneY + (465 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; createDialog ""RscDisplayDebugPublic""";
			tooltip = "Open the BIS debug console";
		};

		// A button to add all units and vehicles to Zeus
		class addUnitsToZeusButton: RscButton {
			text = "Add to zeus";
			x = "SafeZoneX + (510 / 1920) * SafeZoneW";
			y = "SafeZoneY + (330 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; call NEV_fnc_addToZeus";
			tooltip = "Make all units Zeus editable";
		};

		// A button to make units aggressive
		class makeUnitsAggressive: RscButton {
			text = "Aggressive AI";
			x = "SafeZoneX + (660 / 1920) * SafeZoneW";
			y = "SafeZoneY + (285 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; call NEV_fnc_aggressiveAI";
			tooltip = "Give AI aggressive behavior";
		};

		// A button to remove add dead AI units and vehicles
		class removeDead: RscButton {
			text = "Remove dead";
			x = "SafeZoneX + (660 / 1920) * SafeZoneW";
			y = "SafeZoneY + (375 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; call NEV_fnc_removeDead";
			tooltip = "Delete all dead units and vehicles";
		};

		// A button garrison all units
		class garrisonUnits: RscButton {
			text = "Garrison";
			x = "SafeZoneX + (660 / 1920) * SafeZoneW";
			y = "SafeZoneY + (330 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; call NEV_fnc_garrison";
			tooltip = "Call CBA's garrison function on all present units";
		};

		// A button to spawn a group of set units
		class spawnGroup: RscButton {
			text = "Spawn group(s)";
			x = "SafeZoneX + (660 / 1920) * SafeZoneW";
			y = "SafeZoneY + (420 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "call NEV_fnc_spawnGroup";
			tooltip = "Spawn preset group(s)";
		};

		// Note: a static background image
		class backgroundImg: RscFrame {
			x = "SafeZoneX + (495 / 1920) * SafeZoneW";
			y = "SafeZoneY + (255 / 1080) * SafeZoneH";
			w = "(830 / 1920) * SafeZoneW";
			h = "(500 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_FRAME;
			sizeEx = 0.05;
			text = "Debug Menu";
		};

		// A button to repair the current vehicle
		class repairVehicle: RscButton {
			text = "Repair";
			x = "SafeZoneX + (660 / 1920) * SafeZoneW";
			y = "SafeZoneY + (465 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "closeDialog 0; call NEV_fnc_repairVehicle";
			tooltip = "Repair current vehicle";
		};

		// A box to write text that will be broadcasted (line 1, title)
		class broadcastTitle: RscEdit {
			idc = 80001;
			x = "SafeZoneX + (810 / 1920) * SafeZoneW";
			y = "SafeZoneY + (285 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_EDIT;
			style = ST_LEFT + ST_FRAME;
			autocomplete = false;
			tooltip = "Notification title";
		};

		// A box to write text that will be broadcasted (line 2, description)
		class broadcastDesc: RscEdit {
			idc = 80002;
			x = "SafeZoneX + (810 / 1920) * SafeZoneW";
			y = "SafeZoneY + (330 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_EDIT;
			style = ST_LEFT + ST_FRAME;
			autocomplete = false;
			tooltip = "Notification description";
		};

		// A button to execute broadcast
		class broadcastText: RscButton {
			text = "Broadcast";
			x = "SafeZoneX + (810 / 1920) * SafeZoneW";
			y = "SafeZoneY + (375 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "call NEV_fnc_broadcast";
			tooltip = "Broadcast notification";
		};

		// A slider to change the overcast value
		class overcastSlider: RscSlider {
		    idc = 80003;
		    color[] = {1, 1, 1, 0.4};
			colorActive[] = {1 ,1, 1, 1};
			colorDisabled[] = {0.5, 0.5, 0.5, 0.2};
			arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
			arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
			border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
			thumb = "\A3\ui_f\data\gui\cfg\slider\thumb_ca.paa";
		   	x = "SafeZoneX + (960 / 1920) * SafeZoneW";
			y = "SafeZoneY + (285 / 1080) * SafeZoneH";
			w = "(200 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
		    type = CT_XSLIDER;
		    style = SL_HORZ;
		    tooltip = "Change overcast";
		};

		// A slider to change the lightning value
		class lightningSlider: RscSlider {
		    idc = 80004;
		    color[] = {1, 1, 1, 0.4};
			colorActive[] = {1 ,1, 1, 1};
			colorDisabled[] = {0.5, 0.5, 0.5, 0.2};
			arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
			arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
			border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
			thumb = "\A3\ui_f\data\gui\cfg\slider\thumb_ca.paa";
		   	x = "SafeZoneX + (960 / 1920) * SafeZoneW";
			y = "SafeZoneY + (330 / 1080) * SafeZoneH";
			w = "(200 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
		    type = CT_XSLIDER;
		    style = SL_HORZ;
		    tooltip = "Change lightning";
		};

		// A slider to change the fog's value
		class fogValueSlider: RscSlider {
		    idc = 80005;
		    color[] = {1, 1, 1, 0.4};
			colorActive[] = {1 ,1, 1, 1};
			colorDisabled[] = {0.5, 0.5, 0.5, 0.2};
			arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
			arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
			border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
			thumb = "\A3\ui_f\data\gui\cfg\slider\thumb_ca.paa";
		   	x = "SafeZoneX + (960 / 1920) * SafeZoneW";
			y = "SafeZoneY + (375 / 1080) * SafeZoneH";
			w = "(200 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
		    type = CT_XSLIDER;
		    style = SL_HORZ;
		    tooltip = "Change fog value";
		};

		// A slider to change the fog's decay value
		class fogDecaySlider: RscSlider {
		    idc = 80006;
		    color[] = {1, 1, 1, 0.4};
			colorActive[] = {1 ,1, 1, 1};
			colorDisabled[] = {0.5, 0.5, 0.5, 0.2};
			arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
			arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
			border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
			thumb = "\A3\ui_f\data\gui\cfg\slider\thumb_ca.paa";
		   	x = "SafeZoneX + (960 / 1920) * SafeZoneW";
			y = "SafeZoneY + (420 / 1080) * SafeZoneH";
			w = "(200 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
		    type = CT_XSLIDER;
		    style = SL_HORZ;
		    tooltip = "Change fog decay";
		};

		// A slider to change the fog's base value
		class fogBaseSlider: RscSlider {
		    idc = 80007;
		    color[] = {1, 1, 1, 0.4};
			colorActive[] = {1 ,1, 1, 1};
			colorDisabled[] = {0.5, 0.5, 0.5, 0.2};
			arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
			arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
			border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
			thumb = "\A3\ui_f\data\gui\cfg\slider\thumb_ca.paa";
		   	x = "SafeZoneX + (960 / 1920) * SafeZoneW";
			y = "SafeZoneY + (465 / 1080) * SafeZoneH";
			w = "(200 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
		    type = CT_XSLIDER;
		    style = SL_HORZ;
		    tooltip = "Change fog base";
		};

		// A slider to change the rain value
		class rainSlider: RscSlider {
		    idc = 80008;
		    color[] = {1, 1, 1, 0.4};
			colorActive[] = {1 ,1, 1, 1};
			colorDisabled[] = {0.5, 0.5, 0.5, 0.2};
			arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
			arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
			border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
			thumb = "\A3\ui_f\data\gui\cfg\slider\thumb_ca.paa";
		   	x = "SafeZoneX + (960 / 1920) * SafeZoneW";
			y = "SafeZoneY + (510/ 1080) * SafeZoneH";
			w = "(200 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
		    type = CT_XSLIDER;
		    style = SL_HORZ;
		    tooltip = "Change rain";
		};

		// A slider to change the wave value
		class waveSlider: RscSlider {
		    idc = 80009;
		    color[] = {1, 1, 1, 0.4};
			colorActive[] = {1 ,1, 1, 1};
			colorDisabled[] = {0.5, 0.5, 0.5, 0.2};
			arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
			arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
			border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
			thumb = "\A3\ui_f\data\gui\cfg\slider\thumb_ca.paa";
		   	x = "SafeZoneX + (960 / 1920) * SafeZoneW";
			y = "SafeZoneY + (555 / 1080) * SafeZoneH";
			w = "(200 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
		    type = CT_XSLIDER;
		    style = SL_HORZ;
		    tooltip = "Change waves";
		};

		// A button to commit weather changes
		class commitWeather: RscButton {
			text = "Change Weather";
			x = "SafeZoneX + (810 / 1920) * SafeZoneW";
			y = "SafeZoneY + (420 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "call NEV_fnc_commitWeather";
			tooltip = "Commit weather changes";
		};

		// Year combo box
		class yearBox: RscCombo {
			idc = 80010;
			x = "SafeZoneX + (1205 / 1920) * SafeZoneW";
			y = "SafeZoneY + (285 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_COMBO;
			style = ST_LEFT;
			tooltip = "Change year";
		};

		// Month combo box
		class monthBox: RscCombo {
			idc = 80011;
			x = "SafeZoneX + (1205 / 1920) * SafeZoneW";
			y = "SafeZoneY + (330 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_COMBO;
			style = ST_LEFT;
			tooltip = "Change month";
		};

		// Day combo box
		class dayBox: RscCombo {
			idc = 80012;
			x = "SafeZoneX + (1205 / 1920) * SafeZoneW";
			y = "SafeZoneY + (375 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_COMBO;
			style = ST_LEFT;
			tooltip = "Change day";
		};

		// Hour combo box
		class hourBox: RscCombo {
			idc = 80013;
			x = "SafeZoneX + (1205 / 1920) * SafeZoneW";
			y = "SafeZoneY + (420 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_COMBO;
			style = ST_LEFT;
			tooltip = "Change hour";
		};

		// Minute combo box
		class minuteBox: RscCombo {
			idc = 80014;
			x = "SafeZoneX + (1205 / 1920) * SafeZoneW";
			y = "SafeZoneY + (465 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_COMBO;
			style = ST_LEFT;
			tooltip = "Change minute"
		};

		// A button to commit time and date changes
		class commitDate: RscButton {
			text = "Change date";
			x = "SafeZoneX + (810 / 1920) * SafeZoneW";
			y = "SafeZoneY + (465 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "call NEV_fnc_commitDate";
			tooltip = "Commit time & date changes";
		};

		// A button to return all objects within a radius of 50m
		class nearestObjects: RscButton {
			text = "Nearset Objs";
			x = "SafeZoneX + (510 / 1920) * SafeZoneW";
			y = "SafeZoneY + (510 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "call NEV_fnc_nearestObjects";
			tooltip = "Return a list of objects within 50m";
		};

		// Side list box
		class sideList: RscListbox {
			idc = 80015;
			x = "SafeZoneX + (1205 / 1920) * SafeZoneW";
			y = "SafeZoneY + (510 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(75 / 1080) * SafeZoneH";
			type = CT_LISTBOX;
			style = ST_LEFT;
			tooltip = "Change player's side";
			onLBSelChanged = "[_this select 0, _this select 1] call NEV_fnc_sideChange";
		};

		// A button to repair the current vehicle
		class adminVisible: RscButton {
			text = "Visible";
			x = "SafeZoneX + (660 / 1920) * SafeZoneW";
			y = "SafeZoneY + (510 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "call NEV_fnc_adminVisible";
			tooltip = "Make admin visible";
		};

		// A button to repair the current vehicle
		class adminInvisible: RscButton {
			text = "Invisible";
			x = "SafeZoneX + (660 / 1920) * SafeZoneW";
			y = "SafeZoneY + (555 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_BUTTON;
			style = ST_CENTER;
			action = "call NEV_fnc_adminInvisible";
			tooltip = "Make admin invisible";
		};
	};
};

/* <--150-->
*
* /\
* ||
* 45
* ||
* \/
*/