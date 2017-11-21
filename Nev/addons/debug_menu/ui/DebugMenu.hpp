class GVAR(debugMenuDisplay) {
	duration = 1e6;
	idd = 80000;
	movingEnable = true;
	onLoad = QUOTE(call FUNC(onLoad));
	class controls {
		// Open Zeus
		class GVAR(zeusButton): NevRscButton {
			text = "Open zeus";
			x = "SafeZoneX + (485 / 1920) * SafeZoneW";
			y = "SafeZoneY + (375 / 1080) * SafeZoneH";
			action = QUOTE(closeDialog 0; [] remoteExecCall [ARR_2(QQFUNC(openZeus), 0)]);
			tooltip = "Open the Zeus curator interface";
		};

		// VA
		class GVAR(vaButton): NevRscButton {
			text = "Virtual arsenal";
			x = "SafeZoneX + (485 / 1920) * SafeZoneW";
			y = "SafeZoneY + (420 / 1080) * SafeZoneH";
			action = "closeDialog 0;\
					 ['Open', true] spawn BIS_fnc_arsenal";
			tooltip = "Open the BIS virtual aresnal";
		};

		// Teleport
		class GVAR(teleButton): NevRscButton {
			text = "Teleport";
			x = "SafeZoneX + (485 / 1920) * SafeZoneW";
			y = "SafeZoneY + (330 / 1080) * SafeZoneH";
			action = QUOTE(closeDialog 0; call FUNC(teleport));
			tooltip = "Teleport on map click";
		};

		// BI debug console
		class GVAR(debugConsoleButton): NevRscButton {
			text = "Debug console";
			x = "SafeZoneX + (485 / 1920) * SafeZoneW";
			y = "SafeZoneY + (465 / 1080) * SafeZoneH";
			action = "closeDialog 0;\
					 createDialog 'RscDisplayDebugPublic'";
			tooltip = "Open the BIS debug console";
		};

		// Remove dead units and vehicle wreaks
		class GVAR(delDeadButton): NevRscButton {
			text = "Remove dead";
			x = "SafeZoneX + (610 / 1920) * SafeZoneW";
			y = "SafeZoneY + (375 / 1080) * SafeZoneH";
			action = QUOTE({deleteVehicle _x} forEach allDead - GVAR(deadOnStart));
			tooltip = "Delete all dead units and vehicle wrecks";
		};

		// Spawn a group of set units
		class GVAR(spawnGroupButton): NevRscButton {
			text = "Spawn group(s)";
			x = "SafeZoneX + (610 / 1920) * SafeZoneW";
			y = "SafeZoneY + (420 / 1080) * SafeZoneH";
			action = QUOTE([ARR_5(GVAR(minDistance), GVAR(maxDistance), GVAR(groupSide), GVAR(groupArray), GVAR(unitCode))] call FUNC(spawnGroup));
			tooltip = "Spawn preset group(s)";
		};

		// Background image
		class GVAR(backgroundImage): RscFrame {
			x = "SafeZoneX + (340 / 1920) * SafeZoneW";
			y = "SafeZoneY + (130 / 1080) * SafeZoneH";
			w = "(1275 / 1920) * SafeZoneW";
			h = "(550 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_FRAME;
			sizeEx = 0.05;
			text = "Debug Menu";
			moving = 1;
		};

		// Repair the vehicle / heal
		class GVAR(repairVehButton): NevRscButton {
			text = "Repair";
			x = "SafeZoneX + (610 / 1920) * SafeZoneW";
			y = "SafeZoneY + (465 / 1080) * SafeZoneH";
			action = "_target = [cursorTarget, vehicle player] select isNull cursorTarget;\
					 [_target, 0] remoteExec ['setDamage', _target];\
					 hint 'The vehicle / unit has been repaired / healed'";
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

		// Execute broadcast
		class GVAR(broadcastButton): NevRscButton {
			text = "Broadcast";
			x = "SafeZoneX + (735 / 1920) * SafeZoneW";
			y = "SafeZoneY + (375 / 1080) * SafeZoneH";
			action = "['nev_debug_menu_notification', [ctrlText 80001, ctrlText 80002]] call BIS_fnc_showNotification";
			tooltip = "Broadcast notification";
		};

		// Slider to change the overcast value
		class GVAR(overcastSlider): NevRscSlider {
			idc = 80003;
			x = "SafeZoneX + (860 / 1920) * SafeZoneW";
			y = "SafeZoneY + (285 / 1080) * SafeZoneH";
			tooltip = "Change overcast";
			onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(commitWeather), 0)]);
		};

		// Slider to change the lightning value
		class GVAR(lightningSlider): NevRscSlider {
			idc = 80004;
			x = "SafeZoneX + (860 / 1920) * SafeZoneW";
			y = "SafeZoneY + (330 / 1080) * SafeZoneH";
			tooltip = "Change lightning";
			onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(commitWeather), 0)]);
		};

		// Slider to change the fog's value
		class GVAR(fogValueSlider): NevRscSlider {
			idc = 80005;
			x = "SafeZoneX + (860 / 1920) * SafeZoneW";
			y = "SafeZoneY + (375 / 1080) * SafeZoneH";
			tooltip = "Change fog value";
			onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(commitWeather), 0)]);
		};

		// Slider to change the fog's decay value
		class GVAR(fogDecaySlider): NevRscSlider {
			idc = 80006;
			x = "SafeZoneX + (860 / 1920) * SafeZoneW";
			y = "SafeZoneY + (420 / 1080) * SafeZoneH";
			tooltip = "Change fog decay";
			onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(commitWeather), 0)]);
		};

		// Slider to change the fog's base value
		class GVAR(fogBaseSlider): NevRscSlider {
			idc = 80007;
			x = "SafeZoneX + (860 / 1920) * SafeZoneW";
			y = "SafeZoneY + (465 / 1080) * SafeZoneH";
			tooltip = "Change fog base";
			onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(commitWeather), 0)]);
		};

		// Slider to change the rain value
		class GVAR(rainSlider): NevRscSlider {
			idc = 80008;
			x = "SafeZoneX + (860 / 1920) * SafeZoneW";
			y = "SafeZoneY + (510/ 1080) * SafeZoneH";
			tooltip = "Change rain";
			onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(commitWeather), 0)]);
		};

		// Slider to change the wave value
		class GVAR(waveSlider): NevRscSlider {
			idc = 80009;
			x = "SafeZoneX + (860 / 1920) * SafeZoneW";
			y = "SafeZoneY + (555 / 1080) * SafeZoneH";
			tooltip = "Change waves";
			onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(commitWeather), 0)]);
		};

		// Year combo box
		class GVAR(yearBox): RscCombo {
			idc = 80010;
			x = "SafeZoneX + (1110 / 1920) * SafeZoneW";
			y = "SafeZoneY + (285 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_COMBO;
			style = ST_LEFT;
			tooltip = "Change year";
		};

		// Month combo box
		class GVAR(monthBox): RscCombo {
			idc = 80011;
			x = "SafeZoneX + (1110 / 1920) * SafeZoneW";
			y = "SafeZoneY + (330 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_COMBO;
			style = ST_LEFT;
			tooltip = "Change month";
		};

		// Day combo box
		class GVAR(dayBox): RscCombo {
			idc = 80012;
			x = "SafeZoneX + (1110 / 1920) * SafeZoneW";
			y = "SafeZoneY + (375 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_COMBO;
			style = ST_LEFT;
			tooltip = "Change day";
		};

		// Hour combo box
		class GVAR(hourBox): RscCombo {
			idc = 80013;
			x = "SafeZoneX + (1110 / 1920) * SafeZoneW";
			y = "SafeZoneY + (420 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_COMBO;
			style = ST_LEFT;
			tooltip = "Change hour";
		};

		// Minute combo box
		class GVAR(minuteBox): RscCombo {
			idc = 80014;
			x = "SafeZoneX + (1110 / 1920) * SafeZoneW";
			y = "SafeZoneY + (465 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_COMBO;
			style = ST_LEFT;
			tooltip = "Change minute";
		};

		// A button to commit time and date changes
		class GVAR(commitDateButton): NevRscButton {
			text = "Change date";
			x = "SafeZoneX + (735 / 1920) * SafeZoneW";
			y = "SafeZoneY + (465 / 1080) * SafeZoneH";
			action = "setDate [lbCurSel 80010, lbCurSel 80011, lbCurSel 80012, lbCurSel 80013, lbCurSel 80014]";
			tooltip = "Commit time & date changes";
		};

		// Return all objects within a radius of 50m
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
			x = "SafeZoneX + (1110 / 1920) * SafeZoneW";
			y = "SafeZoneY + (510 / 1080) * SafeZoneH";
			w = "(100 / 1920) * SafeZoneW";
			h = "(75 / 1080) * SafeZoneH";
			type = CT_LISTBOX;
			style = ST_LEFT;
			tooltip = "Change player's side";
			onLBSelChanged = QUOTE(_this call FUNC(sideChange));
		};

		// Admin visible
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

		// Admin invisible
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

		// VG
		class GVAR(virtualGarageButton): NevRscButton {
			idc = 80021;
			text = "Virtual garage";
			x = "SafeZoneX + (485 / 1920) * SafeZoneW";
			y = "SafeZoneY + (555 / 1080) * SafeZoneH";
			action = QUOTE(closeDialog 0; call FUNC(openGarage));
			tooltip = "Open the virtual garage";
		};

		// Safe start on
		class GVAR(safeStartOnButton): NevRscButton {
			text = "SafeStart On";
			x = "SafeZoneX + (735 / 1920) * SafeZoneW";
			y = "SafeZoneY + (510 / 1080) * SafeZoneH";
			action = QUOTE([] remoteExec [ARR_2(QQFUNC(safeStart), 0)]);
			tooltip = "Enable SafeStart";
			colorText[] = {0, 0.5, 0, 1};
		};

		// Safe start off
		class GVAR(safeStartOffButton): NevRscButton {
			text = "SafeStart Off";
			x = "SafeZoneX + (735 / 1920) * SafeZoneW";
			y = "SafeZoneY + (555 / 1080) * SafeZoneH";
			action = QUOTE(GVAR(isSafeStart) = false; publicVariable QGVAR(isSafeStart));
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

		// Randomize the environment
		class GVAR(randomEnviButton): NevRscButton {
			text = "Random envi";
			x = "SafeZoneX + (485 / 1920) * SafeZoneW";
			y = "SafeZoneY + (600 / 1080) * SafeZoneH";
			action = QUOTE([] remoteExecCall [ARR_2(QQFUNC(randomEnvironment), 0)]);
			tooltip = "Randomize environment";
		};

		// Refuel the vehicle
		class GVAR(refuelVehButton): NevRscButton {
			text = "Refuel";
			x = "SafeZoneX + (610 / 1920) * SafeZoneW";
			y = "SafeZoneY + (600 / 1080) * SafeZoneH";
			action = "_target = [cursorTarget, vehicle player] select isNull cursorTarget;\
					 [_target, 1] remoteExec ['setFuel', _target];\
					 hint 'The vehicle has been refuled'";
			tooltip = "Refuel the current vehicle";
		};

		// Rearm the current vehicle
		class GVAR(rearmVehButton): NevRscButton {
			text = "Rearm";
			x = "SafeZoneX + (735 / 1920) * SafeZoneW";
			y = "SafeZoneY + (600 / 1080) * SafeZoneH";
			action = "_target = [cursorTarget, vehicle player] select isNull cursorTarget;\
					 [_target, 1] remoteExec ['setVehicleAmmoDef', _target];\
					 hint 'The vehicle has been rearmed'"; // TODO: find alternetive for setVehicleAmmoDef as it's broken
			tooltip = "Rearm the current vehicle";
		};

		// Debug Console's edit box
		class GVAR(debugConsole): RscEdit {
			idc = 80018;
			x = "SafeZoneX + (1235 / 1920) * SafeZoneW";
			y = "SafeZoneY + (285 / 1080) * SafeZoneH";
			w = "(350 / 1920) * SafeZoneW";
			h = "(300 / 1080) * SafeZoneH";
			type = CT_EDIT;
			style = ST_MULTI;
			tooltip = "Execute code";
			autocomplete = "scripting";
			colorBackground[] = {0, 0, 0, 0.5};
		};

		// Execute local code
		class GVAR(execLocalButton): NevRscButton {
			text = "Local";
			x = "SafeZoneX + (1235 / 1920) * SafeZoneW";
			y = "SafeZoneY + (600 / 1080) * SafeZoneH";
			action = QUOTE([ARR_1(0)] call FUNC(debugConsoleExec));
			tooltip = "Execute local code";
		};

		// Execute global code
		class GVAR(execGlobalButton): NevRscButton {
			idc = 80019;
			text = "Global";
			x = "SafeZoneX + (1360 / 1920) * SafeZoneW";
			y = "SafeZoneY + (600 / 1080) * SafeZoneH";
			action = QUOTE([ARR_1(1)] call FUNC(debugConsoleExec));
			tooltip = "Execute global code";
		};

		// Execute server code
		class GVAR(execServerButton): NevRscButton {
			idc = 80020;
			text = "Server";
			x = "SafeZoneX + (1485 / 1920) * SafeZoneW";
			y = "SafeZoneY + (600 / 1080) * SafeZoneH";
			action = QUOTE([ARR_1(2)] call FUNC(debugConsoleExec));
			tooltip = "Execute server code";
		};

		// Create a square AO based on 2 points
		class GVAR(createAOButton): NevRscButton {
			text = "Create AO";
			x = "SafeZoneX + (735 / 1920) * SafeZoneW";
			y = "SafeZoneY + (420 / 1080) * SafeZoneH";
			action = QUOTE(closeDialog 0; [] spawn FUNC(createAO));
			tooltip = "Create an AO based on 2 points";
		};

		// Various mission info
		class GVAR(missionInfo): RscStructuredText {
			idc = 80017;
			x = "SafeZoneX + (485 / 1920) * SafeZoneW";
			y = "SafeZoneY + (155 / 1080) * SafeZoneH";
			w = "(350 / 1920) * SafeZoneW";
			h = "(153 / 1920) * SafeZoneW";
			type = CT_STRUCTURED_TEXT;
			style = ST_MULTI;
			size = 0.035;
			colorBackground[] = {0, 0, 0, 0.5};
		};

		// BIS camera
		class GVAR(bisCameraButton): NevRscButton {
			text = "Camera";
			x = "SafeZoneX + (610 / 1920) * SafeZoneW";
			y = "SafeZoneY + (330 / 1080) * SafeZoneH";
			action = "closeDialog 0; [] spawn BIS_fnc_camera";
			tooltip = "Open BIS' splendid camera";
		};

		// Config viewer
		class GVAR(bisCfgViewerButton): NevRscButton {
			text = "Config viewer";
			x = "SafeZoneX + (610 / 1920) * SafeZoneW";
			y = "SafeZoneY + (285 / 1080) * SafeZoneH";
			action = "closeDialog 0; [] call BIS_fnc_configViewer";
			tooltip = "Open BIS' config viewer";
		};

		// Function viewer
		class GVAR(bisFncViewerButton): NevRscButton {
			text = "Fnc viewer";
			x = "SafeZoneX + (485 / 1920) * SafeZoneW";
			y = "SafeZoneY + (285 / 1080) * SafeZoneH";
			action = "closeDialog 0; [] call BIS_fnc_help";
			tooltip = "Open BIS' functions viewer";
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
