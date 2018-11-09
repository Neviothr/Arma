class GVAR(debugMenuDisplay) {
	duration = 1e6;
	idd = IDD_debugMenuDisplay;
	movingEnable = true;
	onLoad = QUOTE(call FUNC(onLoad));
	class controls {
		// Remove dead units and vehicle wreaks
		class GVAR(delDeadButton): NevRscButton {
			text = "Remove dead";
			x = "SafeZoneX + (640 / 1920) * SafeZoneW";
			y = "SafeZoneY + (310 / 1080) * SafeZoneH";
			action = QUOTE({deleteVehicle _x} forEach allDead - GVAR(deadOnStart));
			tooltip = "Delete all dead units and vehicle wrecks";
		};

		// Open Zeus
		class GVAR(zeusButton): NevRscButton {
			text = "Register Curator";
			x = "SafeZoneX + (640 / 1920) * SafeZoneW";
			y = "SafeZoneY + (380 / 1080) * SafeZoneH";
			action = QUOTE(closeDialog 0; [ARR_2(QQGVAR(registerCurator), player)] call CBA_fnc_serverEvent);
			tooltip = "Register Curator";
		};

		// BI VA
		class GVAR(biVaButton): NevRscButton {
			text = "BIS Virtual Aresnal";
			x = "SafeZoneX + (360 / 1920) * SafeZoneW";
			y = "SafeZoneY + (415 / 1080) * SafeZoneH";
			action = "closeDialog 0;\
					 ['Open', true] spawn BIS_fnc_arsenal";
			tooltip = "Open the BI virtual aresnal";
		};

		// ACE VA
		class GVAR(aceVaButton): NevRscButton {
			text = "ACE VA";
			x = "SafeZoneX + (360 / 1920) * SafeZoneW";
			y = "SafeZoneY + (450 / 1080) * SafeZoneH";
			action = "closeDialog 0;\
					 [player, player, true] call ace_arsenal_fnc_openBox";
			tooltip = "Open the ACE virtual aresnal";
		};

		// Teleport
		class GVAR(teleButton): NevRscButton {
			text = "Teleport";
			x = "SafeZoneX + (640 / 1920) * SafeZoneW";
			y = "SafeZoneY + (275 / 1080) * SafeZoneH";
			action = QUOTE(closeDialog 0; call FUNC(teleport));
			tooltip = "Teleport on map click";
		};

		// BI debug console
		class GVAR(debugConsoleButton): NevRscButton {
			text = "Debug console";
			x = "SafeZoneX + (360 / 1920) * SafeZoneW";
			y = "SafeZoneY + (380 / 1080) * SafeZoneH";
			action = "closeDialog 0;\
					 createDialog 'RscDisplayDebugPublic'";
			tooltip = "Open the BIS debug console";
		};

		// Spawn a group of set units
		class GVAR(spawnGroupButton): NevRscButton {
			text = "Spawn group(s)";
			x = "SafeZoneX + (640 / 1920) * SafeZoneW";
			y = "SafeZoneY + (345 / 1080) * SafeZoneH";
			action = QUOTE([ARR_5(GVAR(minDistance), GVAR(maxDistance), GVAR(groupSide), GVAR(groupArray), GVAR(unitCode))] call FUNC(spawnGroup));
			tooltip = "Spawn preset group(s)";
		};

		// Background image
		class GVAR(backgroundImage): RscFrame {
			x = "SafeZoneX + (355 / 1920) * SafeZoneW";
			y = "SafeZoneY + (130 / 1080) * SafeZoneH";
			w = "(1405 / 1920) * SafeZoneW";
			h = "(530 / 1080) * SafeZoneH";
			type = CT_STATIC;
			style = ST_FRAME;
			sizeEx = 0.05;
			text = "Debug Menu";
			moving = 1;
		};

		// Repair the vehicle / heal
		class GVAR(repairVehButton): NevRscButton {
			text = "Repair";
			x = "SafeZoneX + (500 / 1920) * SafeZoneW";
			y = "SafeZoneY + (275 / 1080) * SafeZoneH";
			action = "_target = [cursorTarget, vehicle player] select isNull cursorTarget;\
					 [_target, 0] remoteExec ['setDamage', _target];\
					 systemChat '[Debug Menu] The vehicle / unit has been repaired / healed'";
			tooltip = "Repair / heal current vehicle / unit";
		};

		// A box to write text that will be broadcasted (line 1, title)
		class GVAR(broadcastTitle): RscEdit {
			idc = IDC_broadcastTitle;
			x = "SafeZoneX + (780 / 1920) * SafeZoneW";
			y = "SafeZoneY + (450 / 1080) * SafeZoneH";
			w = "(275 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_EDIT;
			style = ST_LEFT + ST_FRAME;
			tooltip = "Notification title";
			colorBackground[] = {0, 0, 0, 0.5};
		};

		// A box to write text that will be broadcasted (line 2, description)
		class GVAR(broadcastDesc): RscEdit {
			idc = IDC_broadcastDesc;
			x = "SafeZoneX + (780 / 1920) * SafeZoneW";
			y = "SafeZoneY + (485 / 1080) * SafeZoneH";
			w = "(275 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_EDIT;
			style = ST_LEFT + ST_FRAME;
			tooltip = "Notification description";
			colorBackground[] = {0,0,0,0.5};
		};

		// Execute broadcast
		class GVAR(broadcastButton): NevRscButton {
			text = "Broadcast";
			x = "SafeZoneX + (920 / 1920) * SafeZoneW";
			y = "SafeZoneY + (520 / 1080) * SafeZoneH";
			action = "['nev_debug_menu_notification', [ctrlText 80001, ctrlText 80002]] call BIS_fnc_showNotification";
			tooltip = "Broadcast notification";
		};

		// Slider to change the overcast value
		class GVAR(overcastSlider): NevRscSlider {
			idc = IDC_overcastSlider;
			x = "SafeZoneX + (1060 / 1920) * SafeZoneW";
			y = "SafeZoneY + (275 / 1080) * SafeZoneH";
			tooltip = "Change overcast";
			onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(commitWeather), 0)]);
		};

		// Slider to change the lightning value
		class GVAR(lightningSlider): NevRscSlider {
			idc = IDC_lightningSlider;
			x = "SafeZoneX + (1060 / 1920) * SafeZoneW";
			y = "SafeZoneY + (310 / 1080) * SafeZoneH";
			tooltip = "Change lightning";
			onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(commitWeather), 0)]);
		};

		// Slider to change the fog's value
		class GVAR(fogValueSlider): NevRscSlider {
			idc = IDC_fogValueSlider;
			x = "SafeZoneX + (1060 / 1920) * SafeZoneW";
			y = "SafeZoneY + (345 / 1080) * SafeZoneH";
			tooltip = "Change fog value";
			onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(commitWeather), 0)]);
		};

		// Slider to change the fog's decay value
		class GVAR(fogDecaySlider): NevRscSlider {
			idc = IDC_fogDecaySlider;
			x = "SafeZoneX + (1060 / 1920) * SafeZoneW";
			y = "SafeZoneY + (380 / 1080) * SafeZoneH";
			tooltip = "Change fog decay";
			onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(commitWeather), 0)]);
		};

		// Slider to change the fog's base value
		class GVAR(fogBaseSlider): NevRscSlider {
			idc = IDC_fogBaseSlider;
			x = "SafeZoneX + (1060 / 1920) * SafeZoneW";
			y = "SafeZoneY + (415 / 1080) * SafeZoneH";
			tooltip = "Change fog base";
			onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(commitWeather), 0)]);
		};

		// Slider to change the rain value
		class GVAR(rainSlider): NevRscSlider {
			idc = IDC_rainSlider;
			x = "SafeZoneX + (1060 / 1920) * SafeZoneW";
			y = "SafeZoneY + (450 / 1080) * SafeZoneH";
			tooltip = "Change rain";
			onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(commitWeather), 0)]);
		};

		// Slider to change the wave value
		class GVAR(waveSlider): NevRscSlider {
			idc = IDC_waveSlider;
			x = "SafeZoneX + (1060 / 1920) * SafeZoneW";
			y = "SafeZoneY + (485 / 1080) * SafeZoneH";
			tooltip = "Change waves";
			onSliderPosChanged = QUOTE([ARR_1(_this)] remoteExecCall [ARR_2(QQFUNC(commitWeather), 0)]);
		};

		// Year combo box
		class GVAR(yearBox): RscCombo {
			idc = IDC_yearBox;
			x = "SafeZoneX + (780 / 1920) * SafeZoneW";
			y = "SafeZoneY + (275 / 1080) * SafeZoneH";
			w = "(135 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_COMBO;
			style = ST_LEFT;
			tooltip = "Change year";
		};

		// Month combo box
		class GVAR(monthBox): RscCombo {
			idc = IDC_monthBox;
			x = "SafeZoneX + (780 / 1920) * SafeZoneW";
			y = "SafeZoneY + (310 / 1080) * SafeZoneH";
			w = "(135 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_COMBO;
			style = ST_LEFT;
			tooltip = "Change month";
		};

		// Day combo box
		class GVAR(dayBox): RscCombo {
			idc = IDC_dayBox;
			x = "SafeZoneX + (780 / 1920) * SafeZoneW";
			y = "SafeZoneY + (345 / 1080) * SafeZoneH";
			w = "(135 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_COMBO;
			style = ST_LEFT;
			tooltip = "Change day";
		};

		// Hour combo box
		class GVAR(hourBox): RscCombo {
			idc = IDC_hourBox;
			x = "SafeZoneX + (780 / 1920) * SafeZoneW";
			y = "SafeZoneY + (380 / 1080) * SafeZoneH";
			w = "(135 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_COMBO;
			style = ST_LEFT;
			tooltip = "Change hour";
		};

		// Minute combo box
		class GVAR(minuteBox): RscCombo {
			idc = IDC_minuteBox;
			x = "SafeZoneX + (780 / 1920) * SafeZoneW";
			y = "SafeZoneY + (415 / 1080) * SafeZoneH";
			w = "(135 / 1920) * SafeZoneW";
			h = "(30 / 1080) * SafeZoneH";
			type = CT_COMBO;
			style = ST_LEFT;
			tooltip = "Change minute";
		};

		// A button to commit time and date changes
		class GVAR(commitDateButton): NevRscButton {
			text = "Change date";
			x = "SafeZoneX + (780 / 1920) * SafeZoneW";
			y = "SafeZoneY + (520 / 1080) * SafeZoneH";
			action = "setDate [lbCurSel 80010, lbCurSel 80011, lbCurSel 80012, lbCurSel 80013, lbCurSel 80014]";
			tooltip = "Commit time & date changes";
		};

		// Side list box
		class GVAR(sideList): RscListbox {
			idc = IDC_sideList;
			x = "SafeZoneX + (780 / 1920) * SafeZoneW";
			y = "SafeZoneY + (555 / 1080) * SafeZoneH";
			w = "(135 / 1920) * SafeZoneW";
			h = "(100 / 1080) * SafeZoneH";
			type = CT_LISTBOX;
			style = ST_LEFT;
			tooltip = "Change player's side";
			onLBSelChanged = QUOTE(_this call FUNC(sideChange));
			colorBackground[] = {0, 0, 0, 0.5};
			sizeEx = 0.048;
		};

		// Admin visible
		class GVAR(adminVisibleButton): NevRscButton {
			text = "Visible";
			x = "SafeZoneX + (920 / 1920) * SafeZoneW";
			y = "SafeZoneY + (275 / 1080) * SafeZoneH";
			action = "player hideObjectGlobal false;\
					  player allowDamage true;\
					  player setUnitTrait ['camouflageCoef', 1];";
			tooltip = "Make admin visible";
			colorText[] = {0, 0.5, 0, 1};
		};

		// Admin invisible
		class GVAR(adminInvisibleButton): NevRscButton {
			text = "Invisible";
			x = "SafeZoneX + (920 / 1920) * SafeZoneW";
			y = "SafeZoneY + (310 / 1080) * SafeZoneH";
			action = "player hideObjectGlobal true;\
					  player allowDamage false;\
					  player setUnitTrait ['camouflageCoef', 0];";
			tooltip = "Make admin invisible";
			colorText[] = {0.5, 0, 0, 1};
		};

		// Safe start on
		class GVAR(safeStartOnButton): NevRscButton {
			text = "SafeStart On";
			x = "SafeZoneX + (920 / 1920) * SafeZoneW";
			y = "SafeZoneY + (345 / 1080) * SafeZoneH";
			action = QUOTE([] remoteExec [ARR_2(QQFUNC(safeStart), 0)]);
			tooltip = "Enable SafeStart";
			colorText[] = {0, 0.5, 0, 1};
		};

		// Safe start off
		class GVAR(safeStartOffButton): NevRscButton {
			text = "SafeStart Off";
			x = "SafeZoneX + (920 / 1920) * SafeZoneW";
			y = "SafeZoneY + (380 / 1080) * SafeZoneH";
			action = QUOTE(GVAR(isSafeStart) = false; publicVariable QQGVAR(isSafeStart));
			tooltip = "Disable SafeStart";
			colorText[] = {0.5, 0, 0, 1};
		};

		// Randomize the environment
		class GVAR(randomEnviButton): NevRscButton {
			text = "Random environment";
			x = "SafeZoneX + (640 / 1920) * SafeZoneW";
			y = "SafeZoneY + (450 / 1080) * SafeZoneH";
			action = QUOTE([] remoteExecCall [ARR_2(QQFUNC(randomEnvironment), 0)]);
			tooltip = "Randomize environment";
		};

		// Refuel the vehicle
		class GVAR(refuelVehButton): NevRscButton {
			text = "Refuel";
			x = "SafeZoneX + (500 / 1920) * SafeZoneW";
			y = "SafeZoneY + (310 / 1080) * SafeZoneH";
			action = "_target = [cursorTarget, vehicle player] select isNull cursorTarget;\
					 [_target, 1] remoteExec ['setFuel', _target];\
					 systemChat '[Debug Menu] The vehicle has been refuled'";
			tooltip = "Refuel the current vehicle";
		};

		// Rearm the current vehicle
		class GVAR(rearmVehButton): NevRscButton {
			text = "Rearm";
			x = "SafeZoneX + (500 / 1920) * SafeZoneW";
			y = "SafeZoneY + (345 / 1080) * SafeZoneH";
			action = "_target = [cursorTarget, vehicle player] select isNull cursorTarget;\
					 [_target, 1] remoteExec ['setVehicleAmmoDef', _target];\
					 systemChat '[Debug Menu] The vehicle has been rearmed'"; // TODO: find alternetive for setVehicleAmmoDef as it's somewhat broken
			tooltip = "Rearm the current vehicle";
		};

		// Debug Console's edit box
		class GVAR(debugConsole): RscEdit {
			idc = IDC_debugConsole;
			x = "SafeZoneX + (1340 / 1920) * SafeZoneW";
			y = "SafeZoneY + (275 / 1080) * SafeZoneH";
			w = "(415 / 1920) * SafeZoneW";
			h = "(275 / 1080) * SafeZoneH";
			type = CT_EDIT;
			style = ST_MULTI;
			tooltip = "Execute code";
			autocomplete = "scripting";
			colorBackground[] = {0, 0, 0, 0.5};
		};

		// Execute local code
		class GVAR(execLocalButton): NevRscButton {
			text = "Local";
			x = "SafeZoneX + (1340 / 1920) * SafeZoneW";
			y = "SafeZoneY + (555 / 1080) * SafeZoneH";
			action = QUOTE([ARR_1(0)] call FUNC(debugConsoleExec));
			tooltip = "Execute local code";
		};

		// Execute global code
		class GVAR(execGlobalButton): NevRscButton {
			idc = IDC_execGlobalButton;
			text = "Global";
			x = "SafeZoneX + (1480 / 1920) * SafeZoneW";
			y = "SafeZoneY + (555 / 1080) * SafeZoneH";
			action = QUOTE([ARR_1(1)] call FUNC(debugConsoleExec));
			tooltip = "Execute global code";
		};

		// Execute server code
		class GVAR(execServerButton): NevRscButton {
			idc = IDC_execServerButton;
			text = "Server";
			x = "SafeZoneX + (1620 / 1920) * SafeZoneW";
			y = "SafeZoneY + (555 / 1080) * SafeZoneH";
			action = QUOTE([ARR_1(2)] call FUNC(debugConsoleExec));
			tooltip = "Execute server code";
		};

		// Various mission info
		class GVAR(missionInfo): RscStructuredText {
			idc = IDC_missionInfo;
			x = "SafeZoneX + (360 / 1920) * SafeZoneW";
			y = "SafeZoneY + (155 / 1080) * SafeZoneH";
			w = "(695 / 1920) * SafeZoneW";
			h = "(153 / 1920) * SafeZoneW";
			type = CT_STRUCTURED_TEXT;
			style = ST_MULTI;
			size = 0.037;
			colorBackground[] = {0, 0, 0, 0.5};
		};

		// BIS camera
		class GVAR(bisCameraButton): NevRscButton {
			text = "BIS Camera";
			x = "SafeZoneX + (360 / 1920) * SafeZoneW";
			y = "SafeZoneY + (345 / 1080) * SafeZoneH";
			action = "closeDialog 0; [] spawn BIS_fnc_camera";
			tooltip = "Open BIS' splendid camera";
		};

		// Config viewer
		class GVAR(bisCfgViewerButton): NevRscButton {
			text = "Config viewer";
			x = "SafeZoneX + (360 / 1920) * SafeZoneW";
			y = "SafeZoneY + (310 / 1080) * SafeZoneH";
			action = "closeDialog 0; [] call BIS_fnc_configViewer";
			tooltip = "Open BIS' config viewer";
		};

		// Function viewer
		class GVAR(bisFncViewerButton): NevRscButton {
			text = "Function viewer";
			x = "SafeZoneX + (360 / 1920) * SafeZoneW";
			y = "SafeZoneY + (275 / 1080) * SafeZoneH";
			action = "closeDialog 0; [] call BIS_fnc_help";
			tooltip = "Open BIS' functions viewer";
		};

		// Delete editor placed smoke modules are their effect
		class GVAR(deleteEffectModules): NevRscButton {
			text = "Delete effect modules";
			x = "SafeZoneX + (640 / 1920) * SafeZoneW";
			y = "SafeZoneY + (415 / 1080) * SafeZoneH";
			action = QUOTE(call FUNC(deleteEffectModules));
			tooltip = "Delete effect modules";
		};
	};
};

/*
<--140--> Horizontal distance between elements

/\
||
35 Vertrical distance between elements
||
\/
*/
