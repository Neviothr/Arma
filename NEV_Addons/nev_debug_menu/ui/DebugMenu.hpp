class nev_debug_menu {
	duration = 1e6;
	idd = 80000;
	movingEnable = true;
	onLoad = QUOTE(call FUNC(onLoad));
	class controls {
		// A button to open Zeus
		class GVAR(zeusButton): NevRscButton {
			text = "Open zeus";
			x = "SafeZoneX + (485 / 1920) * SafeZoneW";
			y = "SafeZoneY + (330 / 1080) * SafeZoneH";
			action = QUOTE(closeDialog 0; [] remoteExecCall [ARR_2(QQFUNC(openZeus), 0)]);
			tooltip = "Open the Zeus curator interface";
		};

		// A button to open the virtual aresnal
		class GVAR(vaButton): NevRscButton {
			text = "Virtual arsenal";
			x = "SafeZoneX + (485 / 1920) * SafeZoneW";
			y = "SafeZoneY + (375 / 1080) * SafeZoneH";
			action = "closeDialog 0;\
					 [""Open"", true] spawn BIS_fnc_arsenal";
			tooltip = "Open the BIS virtual aresnal";
		};

		// A button to open the BI debug console
		class GVAR(debugConsoleButton): NevRscButton {
			text = "Debug console";
			x = "SafeZoneX + (485 / 1920) * SafeZoneW";
			y = "SafeZoneY + (465 / 1080) * SafeZoneH";
			action = "closeDialog 0;\
					 createDialog ""RscDisplayDebugPublic""";
			tooltip = "Open the BIS debug console";
		};

		// A button to remove add dead AI units and vehicles
		class GVAR(delDeadButton): NevRscButton {
			text = "Remove dead";
			x = "SafeZoneX + (610 / 1920) * SafeZoneW";
			y = "SafeZoneY + (375 / 1080) * SafeZoneH";
			action = "{\
					 	deleteVehicle _x;\
					  } forEach allDead";
			tooltip = "Delete all dead units and vehicle wrecks";
		};

		// A button to spawn a group of set units
		class GVAR(spawnGroupButton): NevRscButton {
			text = "Spawn group(s)";
			x = "SafeZoneX + (610 / 1920) * SafeZoneW";
			y = "SafeZoneY + (420 / 1080) * SafeZoneH";
			action = QUOTE(call FUNC(spawnGroup));
			tooltip = "Spawn preset group(s)";
		};

		// Note: a static background image
		class GVAR(backgroundImage): RscFrame {
			x = "SafeZoneX + (340 / 1920) * SafeZoneW";
			y = "SafeZoneY + (180 / 1080) * SafeZoneH";
			w = "(1275 / 1920) * SafeZoneW";
			h = "(510 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_FRAME;
			sizeEx = 0.05;
			text = "Debug Menu";
			moving = 1;
		};

		// A button to repair the current vehicle
		class GVAR(repairVehButton): NevRscButton {
			text = "Repair";
			x = "SafeZoneX + (610 / 1920) * SafeZoneW";
			y = "SafeZoneY + (465 / 1080) * SafeZoneH";
			action = "_target = [cursorTarget, vehicle player] select isNull cursorTarget;\
					 [_target, 0] remoteExec [""setDamage"", _target];\
					 hint ""The vehicle / unit has been repaired / healed""";
			tooltip = "Repair / heal current vehicle / unit";
		};

		// A box to write text that will be broadcasted (line 1, title)
		class GVAR(broadcastTitle): RscEdit {
			idc = 80001;
			x = "SafeZoneX + (735 / 1920) * SafeZoneW";
			y = "SafeZoneY + (285 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_EDIT;
			style = ST_LEFT + ST_FRAME;
			tooltip = "Notification title";
			colorBackground[] = {0, 0, 0, 0.5};
		};

		// "Title" text
		class GVAR(titleText): RscText {
			x = "SafeZoneX + (735 / 1920) * SafeZoneW";
			y = "SafeZoneY + (266 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "Title:";
			sizeEx = 0.035;
		};

		// A box to write text that will be broadcasted (line 2, description)
		class GVAR(broadcastDesc): RscEdit {
			idc = 80002;
			x = "SafeZoneX + (735 / 1920) * SafeZoneW";
			y = "SafeZoneY + (330 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_EDIT;
			style = ST_LEFT + ST_FRAME;
			tooltip = "Notification description";
			colorBackground[] = {0,0,0,0.5};
		};

		// "Description" text
		class GVAR(descText): RscText {
			x = "SafeZoneX + (735 / 1920) * SafeZoneW";
			y = "SafeZoneY + (311 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "Description:";
			sizeEx = 0.035;
		};

		// A button to execute broadcast
		class GVAR(broadcastButton): NevRscButton {
			text = "Broadcast";
			x = "SafeZoneX + (735 / 1920) * SafeZoneW";
			y = "SafeZoneY + (375 / 1080) * SafeZoneH";
			action = "[""nev_addons_nev_debug_menu_notification"", [ctrlText 80001, ctrlText 80002]] call BIS_fnc_showNotification";
			tooltip = "Broadcast notification";
		};

		// A slider to change the overcast value
		class GVAR(overcastSlider): NevRscSlider {
		    idc = 80003;
		   	x = "SafeZoneX + (860 / 1920) * SafeZoneW";
			y = "SafeZoneY + (285 / 1080) * SafeZoneH";
		    tooltip = "Change overcast";
		    onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(commitWeather), 0)]);
		};

		// "Overcast" text
		class GVAR(overcastText): RscText {
			x = "SafeZoneX + (860 / 1920) * SafeZoneW";
			y = "SafeZoneY + (266 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "Overcast:";
			sizeEx = 0.035;
		};

		// A slider to change the lightning value
		class GVAR(lightningSlider): NevRscSlider {
		    idc = 80004;
		   	x = "SafeZoneX + (860 / 1920) * SafeZoneW";
			y = "SafeZoneY + (330 / 1080) * SafeZoneH";
		    tooltip = "Change lightning";
		    onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(commitWeather), 0)]);
		};

		// "Lightning" text
		class GVAR(lightningText): RscText {
			x = "SafeZoneX + (860 / 1920) * SafeZoneW";
			y = "SafeZoneY + (311 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "Lightnings:";
			sizeEx = 0.035;
		};

		// A slider to change the fog's value
		class GVAR(fogValueSlider): NevRscSlider {
		    idc = 80005;
		   	x = "SafeZoneX + (860 / 1920) * SafeZoneW";
			y = "SafeZoneY + (375 / 1080) * SafeZoneH";
		    tooltip = "Change fog value";
		    onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(commitWeather), 0)]);
		};

		// "Fog value:" text
		class GVAR(fogValueText): RscText {
			x = "SafeZoneX + (860 / 1920) * SafeZoneW";
			y = "SafeZoneY + (356 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "Fog value:";
			sizeEx = 0.035;
		};

		// A slider to change the fog's decay value
		class GVAR(fogDecaySlider): NevRscSlider {
		    idc = 80006;
		   	x = "SafeZoneX + (860 / 1920) * SafeZoneW";
			y = "SafeZoneY + (420 / 1080) * SafeZoneH";
		    tooltip = "Change fog decay";
		    onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(commitWeather), 0)]);
		};

		// "Fog decay" text
		class GVAR(fogDecayText): RscText {
			x = "SafeZoneX + (860 / 1920) * SafeZoneW";
			y = "SafeZoneY + (401 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "Fog decay:";
			sizeEx = 0.035;
		};

		// A slider to change the fog's base value
		class GVAR(fogBaseSlider): NevRscSlider {
		    idc = 80007;
		   	x = "SafeZoneX + (860 / 1920) * SafeZoneW";
			y = "SafeZoneY + (465 / 1080) * SafeZoneH";
		    tooltip = "Change fog base";
		    onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(commitWeather), 0)]);
		};

		// "Fog base" text
		class GVAR(fogBaseText): RscText {
			x = "SafeZoneX + (860 / 1920) * SafeZoneW";
			y = "SafeZoneY + (446 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "Fog base:";
			sizeEx = 0.035;
		};

		// A slider to change the rain value
		class GVAR(rainSlider): NevRscSlider {
		    idc = 80008;
		   	x = "SafeZoneX + (860 / 1920) * SafeZoneW";
			y = "SafeZoneY + (510/ 1080) * SafeZoneH";
		    tooltip = "Change rain";
		    onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(commitWeather), 0)]);
		};

		// "Rain" text
		class GVAR(rainText): RscText {
			x = "SafeZoneX + (860 / 1920) * SafeZoneW";
			y = "SafeZoneY + (491 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "Rain:";
			sizeEx = 0.035;
		};

		// A slider to change the wave value
		class GVAR(waveSlider): NevRscSlider {
		    idc = 80009;
		   	x = "SafeZoneX + (860 / 1920) * SafeZoneW";
			y = "SafeZoneY + (555 / 1080) * SafeZoneH";
		    tooltip = "Change waves";
		    onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(commitWeather), 0)]);
		};

		// "Wave" text
		class GVAR(waveText): RscText {
			x = "SafeZoneX + (860 / 1920) * SafeZoneW";
			y = "SafeZoneY + (536 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "Waves:";
			sizeEx = 0.035;
		};

		// Year combo box
		class GVAR(yearBox): RscCombo {
			idc = 80010;
			x = "SafeZoneX + (1085 / 1920) * SafeZoneW";
			y = "SafeZoneY + (285 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_COMBO;
			style = ST_LEFT;
			tooltip = "Change year";
		};

		// "Year" text
		class GVAR(yearText): RscText {
			x = "SafeZoneX + (1085 / 1920) * SafeZoneW";
			y = "SafeZoneY + (266 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "Year:";
			sizeEx = 0.035;
		};

		// Month combo box
		class GVAR(monthBox): RscCombo {
			idc = 80011;
			x = "SafeZoneX + (1085 / 1920) * SafeZoneW";
			y = "SafeZoneY + (330 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_COMBO;
			style = ST_LEFT;
			tooltip = "Change month";
		};

		// "Month" text
		class GVAR(monthText): RscText {
			x = "SafeZoneX + (1085 / 1920) * SafeZoneW";
			y = "SafeZoneY + (311 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "Month:";
			sizeEx = 0.035;
		};

		// Day combo box
		class GVAR(dayBox): RscCombo {
			idc = 80012;
			x = "SafeZoneX + (1085 / 1920) * SafeZoneW";
			y = "SafeZoneY + (375 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_COMBO;
			style = ST_LEFT;
			tooltip = "Change day";
		};

		// "Day" text
		class GVAR(dayText): RscText {
			x = "SafeZoneX + (1085 / 1920) * SafeZoneW";
			y = "SafeZoneY + (356 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "Day:";
			sizeEx = 0.035;
		};

		// Hour combo box
		class GVAR(hourBox): RscCombo {
			idc = 80013;
			x = "SafeZoneX + (1085 / 1920) * SafeZoneW";
			y = "SafeZoneY + (420 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_COMBO;
			style = ST_LEFT;
			tooltip = "Change hour";
		};

		// "Hour" text
		class GVAR(hourText): RscText {
			x = "SafeZoneX + (1085 / 1920) * SafeZoneW";
			y = "SafeZoneY + (401 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "Hour:";
			sizeEx = 0.035;
		};

		// Minute combo box
		class GVAR(minuteBox): RscCombo {
			idc = 80014;
			x = "SafeZoneX + (1085 / 1920) * SafeZoneW";
			y = "SafeZoneY + (465 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_COMBO;
			style = ST_LEFT;
			tooltip = "Change minute";
		};

		// "Minutes" text
		class GVAR(minutesText): RscText {
			x = "SafeZoneX + (1085 / 1920) * SafeZoneW";
			y = "SafeZoneY + (446 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "Minutes:";
			sizeEx = 0.035;
		};

		// A button to commit time and date changes
		class GVAR(commitDateButton): NevRscButton {
			text = "Change date";
			x = "SafeZoneX + (735 / 1920) * SafeZoneW";
			y = "SafeZoneY + (465 / 1080) * SafeZoneH";
			action = "setDate [lbCurSel 80010, lbCurSel 80011, lbCurSel 80012, lbCurSel 80013, lbCurSel 80014]";
			tooltip = "Commit time & date changes";
		};

		// A button to return all objects within a radius of 50m
		class GVAR(nearestObjsButton): NevRscButton {
			text = "Nearset objs";
			x = "SafeZoneX + (485 / 1920) * SafeZoneW";
			y = "SafeZoneY + (510 / 1080) * SafeZoneH";
			action = QUOTE(call FUNC(nearestObjects));
			tooltip = "Return a list of objects within 50m";
		};

		// Side list box
		class GVAR(sideList): RscListbox {
			idc = 80015;
			x = "SafeZoneX + (1085 / 1920) * SafeZoneW";
			y = "SafeZoneY + (510 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(75 / 1080) * SafeZoneH";
			type = CT_LISTBOX;
			style = ST_LEFT;
			tooltip = "Change player's side";
			onLBSelChanged = QUOTE(_this call FUNC(sideChange));
		};

		// "Side" text
		class GVAR(sideText): RscText {
			x = "SafeZoneX + (1085 / 1920) * SafeZoneW";
			y = "SafeZoneY + (491 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "Side:";
			sizeEx = 0.035;
		};

		// A button to make the admin visible
		class GVAR(adminVisibleButton): NevRscButton {
			text = "Visible";
			x = "SafeZoneX + (610 / 1920) * SafeZoneW";
			y = "SafeZoneY + (510 / 1080) * SafeZoneH";
			action = "player hideObjectGlobal false;\
					  player allowDamage true;\
					  player setCaptive false;";
			tooltip = "Make admin visible";
			colorText[] = {0, 0.5, 0, 1};
		};

		// A button to make the admin invisible
		class GVAR(adminInvisibleButton): NevRscButton {
			text = "Invisible";
			x = "SafeZoneX + (610 / 1920) * SafeZoneW";
			y = "SafeZoneY + (555 / 1080) * SafeZoneH";
			action = "player hideObjectGlobal true;\
					  player allowDamage false;\
					  player setCaptive true;";
			tooltip = "Make admin invisible";
			colorText[] = {0.5, 0, 0, 1};
		};

		// A button to open the virtual garage
		class GVAR(virtualGarageButton): NevRscButton {
			idc = 80021;
			text = "Virtual garage";
			x = "SafeZoneX + (485 / 1920) * SafeZoneW";
			y = "SafeZoneY + (555 / 1080) * SafeZoneH";
			action = QUOTE(closeDialog 0; call FUNC(openGarage));
			tooltip = "Open the virtual garage";
		};

		// A button to turn on safe start
		class GVAR(safeStartOnButton): NevRscButton {
			text = "SafeStart On";
			x = "SafeZoneX + (735 / 1920) * SafeZoneW";
			y = "SafeZoneY + (510 / 1080) * SafeZoneH";
			action = QUOTE([] remoteExec [ARR_2(QQFUNC(safeStartOn), 0)]);
			tooltip = "Enable SafeStart";
			colorText[] = {0, 0.5, 0, 1};
		};

		// A button to turn off safe start
		class GVAR(safeStartOffButton): NevRscButton {
			text = "SafeStart Off";
			x = "SafeZoneX + (735 / 1920) * SafeZoneW";
			y = "SafeZoneY + (555 / 1080) * SafeZoneH";
			action = QUOTE([] remoteExec [ARR_2(QQFUNC(safeStartOff), 0)]);
			tooltip = "Disable SafeStart";
			colorText[] = {0.5, 0, 0, 1};
		};

		// Players list box
		class GVAR(playersList): RscListbox {
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
		class GVAR(playersText): RscText {
			x = "SafeZoneX + (360 / 1920) * SafeZoneW";
			y = "SafeZoneY + (266 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "Players:";
			sizeEx = 0.035;
		};

		// A button to randomize the environment
		class GVAR(randomEnviButton): NevRscButton {
			text = "Random envi";
			x = "SafeZoneX + (485 / 1920) * SafeZoneW";
			y = "SafeZoneY + (600 / 1080) * SafeZoneH";
			action = QUOTE([] remoteExecCall [ARR_2(QQFUNC(randomEnvironment), 0)]);
			tooltip = "Randomize environment";
		};

		// A button to refuel the current vehicle
		class GVAR(refuelVehButton): NevRscButton {
			text = "Refuel";
			x = "SafeZoneX + (610 / 1920) * SafeZoneW";
			y = "SafeZoneY + (600 / 1080) * SafeZoneH";
			action = "_target = [cursorTarget, vehicle player] select isNull cursorTarget;\
					 [_target, 1] remoteExec [""setFuel"", _target];\
					 hint ""The vehicle has been refuled""";
			tooltip = "Refuel the current vehicle";
		};

		// A button to rearm the current vehicle
		class GVAR(rearmVehButton): NevRscButton {
			text = "Rearm";
			x = "SafeZoneX + (735 / 1920) * SafeZoneW";
			y = "SafeZoneY + (600 / 1080) * SafeZoneH";
			action = "_target = [cursorTarget, vehicle player] select isNull cursorTarget;\
					 [_target, 1] remoteExec [""setVehicleAmmoDef"", _target];\
					 hint ""The vehicle has been rearmed"""; // TODO: find alternetive for setVehicleAmmoDef as it's broken.
			tooltip = "Rearm the current vehicle";
		};

		// "mission_name on map_name" text
		class GVAR(missionMapText): RscText {
			idc = 80017;
			x = "SafeZoneX + (485 / 1920) * SafeZoneW";
			y = "SafeZoneY + (250 / 1080) * SafeZoneH";
			w = "(500 / 1920) * SafeZoneW";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "";
			sizeEx = 0.035;
		};

		// Debug Console's edit box
		class GVAR(debugConsole): RscEdit {
			idc = 80018;
			x = "SafeZoneX + (1210 / 1920) * SafeZoneW";
			y = "SafeZoneY + (285 / 1080) * SafeZoneH";
			w = "(350 / 1920) * SafeZoneW";
			h = "(300 / 1080) * SafeZoneH";
			type = CT_EDIT;
			style = ST_MULTI;
			tooltip = "Execute code";
			autocomplete = "scripting";
			colorBackground[] = {0,0,0,0.5};
		};

		// A button execute local code
		class GVAR(execLocalButton): NevRscButton {
			text = "Local";
			x = "SafeZoneX + (1210 / 1920) * SafeZoneW";
			y = "SafeZoneY + (600 / 1080) * SafeZoneH";
			action = QUOTE([ARR_1(0)] call FUNC(debugConsoleExec));
			tooltip = "Execute local code";
		};

		// A button execute global code
		class GVAR(execGlobalButton): NevRscButton {
			idc = 80019;
			text = "Global";
			x = "SafeZoneX + (1335 / 1920) * SafeZoneW";
			y = "SafeZoneY + (600 / 1080) * SafeZoneH";
			action = QUOTE([ARR_1(1)] call FUNC(debugConsoleExec));
			tooltip = "Execute global code";
		};

		// A button execute server code
		class GVAR(execServerButton): NevRscButton {
			idc = 80020;
			text = "Server";
			x = "SafeZoneX + (1460 / 1920) * SafeZoneW";
			y = "SafeZoneY + (600 / 1080) * SafeZoneH";
			action = QUOTE([ARR_1(2)] call FUNC(debugConsoleExec));
			tooltip = "Execute server code";
		};

		// A button to create a square AO based on 2 points
		class GVAR(createAOButton): NevRscButton {
			text = "Create AO";
			x = "SafeZoneX + (735 / 1920) * SafeZoneW";
			y = "SafeZoneY + (420 / 1080) * SafeZoneH";
			action = QUOTE(closeDialog 0; [] spawn FUNC(createAO));
			tooltip = "Create an AO based on 2 points";
		};

		// Active SQF text
		class GVAR(activeSQFText): RscText {
			idc = 80022;
			x = "SafeZoneX + (485 / 1920) * SafeZoneW";
			y = "SafeZoneY + (235 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "";
			sizeEx = 0.035;
		};

		// Active FSM text
		class GVAR(activeFSMText): RscText {
			idc = 80023;
			x = "SafeZoneX + (485 / 1920) * SafeZoneW";
			y = "SafeZoneY + (220 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			type = CT_STATIC;
			style = ST_LEFT;
			text = "";
			sizeEx = 0.035;
		};
	};
};

/* <--125--> Horizontal distance between elements

/\
||
45 Vertrical distance between elements
||
\/

/\
||
19 The y variable of text elements is -19 of the main element
*/