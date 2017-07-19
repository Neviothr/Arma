class nev_debug_menu {
	duration = 1e6;
	idd = 80000;
	movingEnable = true;
	onLoad = QUOTE(call FUNC(onLoad));
	class controls {
		// A button to open Zeus
		class zeusButton: NevRscButton {
			text = "Open Zeus";
			x = "SafeZoneX + (510 / 1920) * SafeZoneW";
			y = "SafeZoneY + (285 / 1080) * SafeZoneH";
			action = QUOTE(closeDialog 0; [] remoteExecCall [ARR_2(QQFUNC(openZeus), 0)]);
			tooltip = "Open the Zeus curator interface";
		};

		// A button to open the virtual aresnal
		class virtualArsenalButton: NevRscButton {
			text = "Virtual arsenal";
			x = "SafeZoneX + (510 / 1920) * SafeZoneW";
			y = "SafeZoneY + (375 / 1080) * SafeZoneH";
			action = "closeDialog 0; [""Open"", true] spawn BIS_fnc_arsenal";
			tooltip = "Open the BIS virtual aresnal";
		};

		// A button to use a teleportion function
		class teleportButton: NevRscButton {
			text = "Teleport";
			x = "SafeZoneX + (510 / 1920) * SafeZoneW";
			y = "SafeZoneY + (420 / 1080) * SafeZoneH";
			action = QUOTE(closeDialog 0; call FUNC(teleport));
			tooltip = "Teleport on map click";
		};

		// A button to open the BI debug console
		class debugConsoleButton: NevRscButton {
			text = "Debug console";
			x = "SafeZoneX + (510 / 1920) * SafeZoneW";
			y = "SafeZoneY + (465 / 1080) * SafeZoneH";
			action = QUOTE(closeDialog 0; createDialog QUOTE(QUOTE(RscDisplayDebugPublic)));
			tooltip = "Open the BIS debug console";
		};

		// A button to add all units and vehicles to Zeus
		class addUnitsToZeusButton: NevRscButton {
			text = "Add to zeus";
			x = "SafeZoneX + (510 / 1920) * SafeZoneW";
			y = "SafeZoneY + (330 / 1080) * SafeZoneH";
			action = QUOTE([] remoteExecCall [ARR_2(QQFUNC(addToZeus), 0)]);
			tooltip = "Make all units Zeus editable";
		};

		// A button to make units aggressive
		class makeUnitsAggressiveButton: NevRscButton {
			text = "Aggressive AI";
			x = "SafeZoneX + (660 / 1920) * SafeZoneW";
			y = "SafeZoneY + (285 / 1080) * SafeZoneH";
			action = QUOTE(closeDialog 0; call FUNC(aggressiveAI));
			tooltip = "Give AI aggressive behavior";
		};

		// A button to remove add dead AI units and vehicles
		class removeDeadButton: NevRscButton {
			text = "Remove dead";
			x = "SafeZoneX + (660 / 1920) * SafeZoneW";
			y = "SafeZoneY + (375 / 1080) * SafeZoneH";
			action = QUOTE(closeDialog 0; call FUNC(removeDead));
			tooltip = "Delete all dead units and vehicles";
		};

		// A button garrison all units
		class garrisonButton: NevRscButton {
			text = "Garrison";
			x = "SafeZoneX + (660 / 1920) * SafeZoneW";
			y = "SafeZoneY + (330 / 1080) * SafeZoneH";
			action = QUOTE(closeDialog 0; call FUNC(garrison));
			tooltip = "Call CBA's garrison function on all present units";
		};

		// A button to spawn a group of set units
		class spawnGroupButton: NevRscButton {
			text = "Spawn group(s)";
			x = "SafeZoneX + (660 / 1920) * SafeZoneW";
			y = "SafeZoneY + (420 / 1080) * SafeZoneH";
			action = QUOTE(call FUNC(spawnGroup));
			tooltip = "Spawn preset group(s)";
		};

		// Note: a static background image
		class backgroundImg: RscFrame {
			x = "SafeZoneX + (350 / 1920) * SafeZoneW";
			y = "SafeZoneY + (245 / 1080) * SafeZoneH";
			w = "(1475 / 1920) * SafeZoneW";
			h = "(510 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_FRAME;
			sizeEx = 0.05;
			text = "Debug Menu";
			moving = 1;
		};

		// A button to repair the current vehicle
		class repairVehicleButton: NevRscButton {
			text = "Repair";
			x = "SafeZoneX + (660 / 1920) * SafeZoneW";
			y = "SafeZoneY + (465 / 1080) * SafeZoneH";
			action = QUOTE(closeDialog 0; call FUNC(repairVehicle));
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
			tooltip = "Notification title";
		};

		// "Title" text
		class titleText: RscText {
			x = "SafeZoneX + (810 / 1920) * SafeZoneW";
			y = "SafeZoneY + (266 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "Title:";
			sizeEx = 0.035;
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
			tooltip = "Notification description";
		};

		// "Description" text
		class descriptionText: RscText {
			x = "SafeZoneX + (810 / 1920) * SafeZoneW";
			y = "SafeZoneY + (311 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "Description:";
			sizeEx = 0.035;
		};

		// A button to execute broadcast
		class broadcastButton: NevRscButton {
			text = "Broadcast";
			x = "SafeZoneX + (810 / 1920) * SafeZoneW";
			y = "SafeZoneY + (375 / 1080) * SafeZoneH";
			action = QUOTE([] remoteExecCall [ARR_2(QQFUNC(broadcast), 0)]);
			tooltip = "Broadcast notification";
		};

		// A slider to change the overcast value
		class overcastSlider: NevRscSlider {
		    idc = 80003;
		   	x = "SafeZoneX + (960 / 1920) * SafeZoneW";
			y = "SafeZoneY + (285 / 1080) * SafeZoneH";
		    tooltip = "Change overcast";
		    onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(commitWeather), 0)]);
		};

		// "Overcast" text
		class overcastText: RscText {
			x = "SafeZoneX + (960 / 1920) * SafeZoneW";
			y = "SafeZoneY + (266 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "Overcast:";
			sizeEx = 0.035;
		};

		// A slider to change the lightning value
		class lightningSlider: NevRscSlider {
		    idc = 80004;
		   	x = "SafeZoneX + (960 / 1920) * SafeZoneW";
			y = "SafeZoneY + (330 / 1080) * SafeZoneH";
		    tooltip = "Change lightning";
		    onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(commitWeather), 0)]);
		};

		// "Lightning" text
		class lightningText: RscText {
			x = "SafeZoneX + (960 / 1920) * SafeZoneW";
			y = "SafeZoneY + (311 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "Lightnings:";
			sizeEx = 0.035;
		};

		// A slider to change the fog's value
		class fogValueSlider: NevRscSlider {
		    idc = 80005;
		   	x = "SafeZoneX + (960 / 1920) * SafeZoneW";
			y = "SafeZoneY + (375 / 1080) * SafeZoneH";
		    tooltip = "Change fog value";
		    onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(commitWeather), 0)]);
		};

		// "Fog value:" text
		class fogValueText: RscText {
			x = "SafeZoneX + (960 / 1920) * SafeZoneW";
			y = "SafeZoneY + (356 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "Fog value:";
			sizeEx = 0.035;
		};

		// A slider to change the fog's decay value
		class fogDecaySlider: NevRscSlider {
		    idc = 80006;
		   	x = "SafeZoneX + (960 / 1920) * SafeZoneW";
			y = "SafeZoneY + (420 / 1080) * SafeZoneH";
		    tooltip = "Change fog decay";
		    onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(commitWeather), 0)]);
		};

		// "Fog decay" text
		class fogDecayText: RscText {
			x = "SafeZoneX + (960 / 1920) * SafeZoneW";
			y = "SafeZoneY + (401 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "Fog decay:";
			sizeEx = 0.035;
		};

		// A slider to change the fog's base value
		class fogBaseSlider: NevRscSlider {
		    idc = 80007;
		   	x = "SafeZoneX + (960 / 1920) * SafeZoneW";
			y = "SafeZoneY + (465 / 1080) * SafeZoneH";
		    tooltip = "Change fog base";
		    onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(commitWeather), 0)]);
		};

		// "Fog base" text
		class fogBaseText: RscText {
			x = "SafeZoneX + (960 / 1920) * SafeZoneW";
			y = "SafeZoneY + (446 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "Fog base:";
			sizeEx = 0.035;
		};

		// A slider to change the rain value
		class rainSlider: NevRscSlider {
		    idc = 80008;
		   	x = "SafeZoneX + (960 / 1920) * SafeZoneW";
			y = "SafeZoneY + (510/ 1080) * SafeZoneH";
		    tooltip = "Change rain";
		    onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(commitWeather), 0)]);
		};

		// "Rain" text
		class rainText: RscText {
			x = "SafeZoneX + (960 / 1920) * SafeZoneW";
			y = "SafeZoneY + (491 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "Rain:";
			sizeEx = 0.035;
		};

		// A slider to change the wave value
		class waveSlider: NevRscSlider {
		    idc = 80009;
		   	x = "SafeZoneX + (960 / 1920) * SafeZoneW";
			y = "SafeZoneY + (555 / 1080) * SafeZoneH";
		    tooltip = "Change waves";
		    onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(commitWeather), 0)]);
		};

		// "Wave" text
		class waveText: RscText {
			x = "SafeZoneX + (960 / 1920) * SafeZoneW";
			y = "SafeZoneY + (536 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "Waves:";
			sizeEx = 0.035;
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

		// "Year" text
		class yearText: RscText {
			x = "SafeZoneX + (1205 / 1920) * SafeZoneW";
			y = "SafeZoneY + (266 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "Year:";
			sizeEx = 0.035;
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

		// "Month" text
		class monthText: RscText {
			x = "SafeZoneX + (1205 / 1920) * SafeZoneW";
			y = "SafeZoneY + (311 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "Month:";
			sizeEx = 0.035;
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

		// "Day" text
		class dayText: RscText {
			x = "SafeZoneX + (1205 / 1920) * SafeZoneW";
			y = "SafeZoneY + (356 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "Day:";
			sizeEx = 0.035;
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

		// "Hour" text
		class hourText: RscText {
			x = "SafeZoneX + (1205 / 1920) * SafeZoneW";
			y = "SafeZoneY + (401 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "Hour:";
			sizeEx = 0.035;
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
			tooltip = "Change minute";
		};

		// "Minutes" text
		class minutesText: RscText {
			x = "SafeZoneX + (1205 / 1920) * SafeZoneW";
			y = "SafeZoneY + (446 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "Minutes:";
			sizeEx = 0.035;
		};

		// A button to commit time and date changes
		class commitDateButton: NevRscButton {
			text = "Change date";
			x = "SafeZoneX + (810 / 1920) * SafeZoneW";
			y = "SafeZoneY + (465 / 1080) * SafeZoneH";
			action = QUOTE([] remoteExecCall [ARR_2(QQFUNC(commitDate), 0)]);
			tooltip = "Commit time & date changes";
		};

		// A button to return all objects within a radius of 50m
		class nearestObjectsButton: NevRscButton {
			text = "Nearset Objs";
			x = "SafeZoneX + (510 / 1920) * SafeZoneW";
			y = "SafeZoneY + (510 / 1080) * SafeZoneH";
			action = QUOTE(call FUNC(nearestObjects));
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
			onLBSelChanged = QUOTE(_this call FUNC(sideChange));
		};

		// "Side" text
		class sideText: RscText {
			x = "SafeZoneX + (1205 / 1920) * SafeZoneW";
			y = "SafeZoneY + (491 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "Side:";
			sizeEx = 0.035;
		};

		// A button to make the admin visible
		class adminVisibleButton: NevRscButton {
			text = "Visible";
			x = "SafeZoneX + (660 / 1920) * SafeZoneW";
			y = "SafeZoneY + (510 / 1080) * SafeZoneH";
			action = QUOTE([] remoteExecCall [ARR_2(QQFUNC(adminVisible), 0)]);
			tooltip = "Make admin visible";
		};

		// A button to make the admin invisible
		class adminInvisibleButton: NevRscButton {
			text = "Invisible";
			x = "SafeZoneX + (660 / 1920) * SafeZoneW";
			y = "SafeZoneY + (555 / 1080) * SafeZoneH";
			action = QUOTE([] remoteExecCall [ARR_2(QQFUNC(adminInvisible), 0)]);
			tooltip = "Make admin invisible";
		};

		// A button to open the virtual garage
		class virtualGarageButton: NevRscButton {
			text = "Virtual Garage";
			x = "SafeZoneX + (510 / 1920) * SafeZoneW";
			y = "SafeZoneY + (555 / 1080) * SafeZoneH";
			action = QUOTE(closeDialog 0; call FUNC(openGarage));
			tooltip = "Open the virtual garage";
		};

		// A button to turn on safe start
		class safeStartOnButton: NevRscButton {
			text = "SafeStart On";
			x = "SafeZoneX + (810 / 1920) * SafeZoneW";
			y = "SafeZoneY + (510 / 1080) * SafeZoneH";
			action = QUOTE([] remoteExec [ARR_2(QQFUNC(safeStartOn), 0)]);
			tooltip = "Enable SafeStart";
		};

		// A button to turn off safe start
		class safeStartOffButton: NevRscButton {
			text = "SafeStart Off";
			x = "SafeZoneX + (810 / 1920) * SafeZoneW";
			y = "SafeZoneY + (555 / 1080) * SafeZoneH";
			action = QUOTE([] remoteExec [ARR_2(QQFUNC(safeStartOff), 0)]);
			tooltip = "Disable SafeStart";
		};

		// Players list box
		class playersList: RscListbox {
			idc = 80016;
			x = "SafeZoneX + (360 / 1920) * SafeZoneW";
			y = "SafeZoneY + (285 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(300 / 1080) * SafeZoneH";
			type = CT_LISTBOX;
			style = ST_LEFT;
			tooltip = "Choose player";
		};

		// "Players:" text
		class playersText: RscText {
			x = "SafeZoneX + (360 / 1920) * SafeZoneW";
			y = "SafeZoneY + (266 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "Players:";
			sizeEx = 0.035;
		};

		// A button to randomize the environment
		class randomEnviButton: NevRscButton {
			text = "Random Envi";
			x = "SafeZoneX + (510 / 1920) * SafeZoneW";
			y = "SafeZoneY + (600 / 1080) * SafeZoneH";
			action = QUOTE([] remoteExecCall [ARR_2(QQFUNC(randomEnvironment), 0)]);
			tooltip = "Randomize environment";
		};

		// A button to refuel the current vehicle
		class refuelVehicleButton: NevRscButton {
			text = "Refuel";
			x = "SafeZoneX + (660 / 1920) * SafeZoneW";
			y = "SafeZoneY + (600 / 1080) * SafeZoneH";
			action = QUOTE(closeDialog 0; call FUNC(refuelVehicle));
			tooltip = "Refuel the current vehicle";
		};

		// A button to rearm the current vehicle
		class rearmVehicleButton: NevRscButton {
			text = "Rearm";
			x = "SafeZoneX + (810 / 1920) * SafeZoneW";
			y = "SafeZoneY + (600 / 1080) * SafeZoneH";
			action = QUOTE(closeDialog 0; call FUNC(rearmVehicle));
			tooltip = "Rearm the current vehicle";
		};

		// "mission_name on map_name" text
		class missionMapText: RscText {
			idc = 80017;
			x = "SafeZoneX + (510 / 1920) * SafeZoneW";
			y = "SafeZoneY + (266 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "";
			sizeEx = 0.035;
		};

		// Debug Console's edit box
		class debugConsole: RscEdit {
			idc = 80018;
			x = "SafeZoneX + (1355 / 1920) * SafeZoneW";
			y = "SafeZoneY + (285 / 1080) * SafeZoneH";
			w = "(435 / 1920) * SafeZoneW";
			h = "(300 / 1080) * SafeZoneH";
			type = CT_EDIT;
			style = ST_MULTI;
			tooltip = "Execute code";
			autocomplete = "scripting";
			colorBackground[] = {0,0,0,0.5};
		};

		// A button execute local code
		class execLocalButton: NevRscButton {
			text = "Local";
			x = "SafeZoneX + (1355 / 1920) * SafeZoneW";
			y = "SafeZoneY + (600 / 1080) * SafeZoneH";
			action = QUOTE([ARR_1(0)] call FUNC(debugConsoleExec));
			tooltip = "Execute local code";
		};

		// A button execute global code
		class execGlobalButton: NevRscButton {
			idc = 80019;
			text = "Global";
			x = "SafeZoneX + (1505 / 1920) * SafeZoneW";
			y = "SafeZoneY + (600 / 1080) * SafeZoneH";
			action = QUOTE([ARR_1(1)] call FUNC(debugConsoleExec));
			tooltip = "Execute global code";
		};

		// A button execute server code
		class execServerButton: NevRscButton {
			idc = 80020;
			text = "Server";
			x = "SafeZoneX + (1655 / 1920) * SafeZoneW";
			y = "SafeZoneY + (600 / 1080) * SafeZoneH";
			action = QUOTE([ARR_1(2)] call FUNC(debugConsoleExec));
			tooltip = "Execute server code";
		};

		// A button to create a square AO based on 2 points
		class createAOButton: NevRscButton {
			text = "Create AO";
			x = "SafeZoneX + (810 / 1920) * SafeZoneW";
			y = "SafeZoneY + (420 / 1080) * SafeZoneH";
			action = QUOTE(closeDialog 0; [] spawn FUNC(createAO));
			tooltip = "Create an AO based on 2 points";
		};
	};
};

/* <--150--> Horizontal distance between elements

/\
||
45 Vertrical distance between elements
||
\/

/\
||
19 The y variable of text elements is -19 of the main element
*/