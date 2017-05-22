#include "\A3\ui_f\hpp\defineResincl.inc"
#include "\A3\ui_f\hpp\defineResinclDesign.inc"
#include "\A3\ui_f\hpp\defineDIKCodes.inc"

#define UTILITIES_KEYWORD "utils"

disableSerialization;

params ["_mode", "_params", "_class"];

switch _mode do {
	case "onLoad": {

		_display = _params select 0;

		_ctrlLink = _display displayCtrl IDC_RSCDEBUGCONSOLE_LINK;
		_ctrlLink htmlLoad "a3\ui_f\data\html\RscDebugConsole.html";

		_ctrlExpression = _display displayCtrl IDC_RSCDEBUGCONSOLE_EXPRESSION;
		_ctrlExpression ctrlSetText (profileNamespace getVariable ["RscDebugConsole_expression", ""]);
		ctrlSetFocus _ctrlExpression;

		_ctrlExecuteLocal = _display displayCtrl IDC_OK;
		_ctrlExecuteLocal ctrlAddEventhandler ["buttonClick", "with uiNamespace do {['executeButton', [_this, 0], 'RscDebugConsole'] call RscDebugConsole_script};"];

		_ctrlExecuteGlobal = _display displayCtrl IDC_RSCDEBUGCONSOLE_BUTTONEXECUTEALL;
		_ctrlExecuteGlobal ctrlAddEventhandler ["buttonClick", "with uiNamespace do {['executeButton', [_this, 1], 'RscDebugConsole'] call RscDebugConsole_script};"];

		_ctrlExecuteServer = _display displayCtrl IDC_RSCDEBUGCONSOLE_BUTTONEXECUTESERVER;
		_ctrlExecuteServer ctrlAddEventhandler ["buttonClick", "with uiNamespace do {['executeButton', [_this, 2], 'RscDebugConsole'] call RscDebugConsole_script};"];

		_ctrlCodePerformance = _display displayCtrl IDC_RSCDEBUGCONSOLE_BUTTONCODEPERFORMANCE;
		_ctrlCodePerformance ctrlAddEventhandler ["buttonClick", "with uiNamespace do {['executeButton', [_this, 3], 'RscDebugConsole'] call RscDebugConsole_script};"];

		if !(ismultiplayer) then {
			_ctrlExecuteGlobal ctrlenable false;
			_ctrlExecuteServer ctrlenable false;
		};

		{
			disableSerialization;
			private _input = _display displayCtrl _x;
			private _value = profileNamespace getVariable ["RscDebugConsole_watch" + str (_forEachIndex + 1), [true, ""]];
			if !(_value isEqualTypeParams [true, ""]) then {_value = [true, _value]};
			_input ctrlSetText (_value select 1);
			_input setVariable ["RscDebugConsole_watchStatus", _value];
		} forEach [IDC_RSCDEBUGCONSOLE_WATCHINPUT1, IDC_RSCDEBUGCONSOLE_WATCHINPUT2, IDC_RSCDEBUGCONSOLE_WATCHINPUT3, IDC_RSCDEBUGCONSOLE_WATCHINPUT4];

		#define LIMIT_WARNING 0.003
		#define COLOR_WARNING [0.8, 0.4, 0, 0.5]
		#define LIMIT_CRITICAL 0.1
		#define COLOR_CRITICAL [0.5, 0.1, 0, 0.8]
		#define WATCH_FIELD_FNC(WATCHINPUT,WATCHOUTPUT) \
		{ \
			disableSerialization; \
			private _display = _this select 0; \
			private _input = _display displayCtrl WATCHINPUT; \
			private _this = ctrlText _input; \
			if (_this isEqualTo "") exitWith { \
				_input ctrlSetBackgroundColor [0, 0, 0, 0]; \
				_display displayCtrl WATCHOUTPUT ctrlSetText ""; \
			}; \
			private _status = _input getVariable "RscDebugConsole_watchStatus"; \
			if (!(_status select 0) && {_status select 1 isEqualTo _this}) exitWith {_input ctrlSetBackgroundColor COLOR_CRITICAL}; \
			private _timeStart = diag_tickTime; \
			_display displayCtrl WATCHOUTPUT ctrlSetText (_this call { \
				private ["_display", "_input", "_status", "_timeStart", "_x"]; \
				_this = [nil] apply compile _this select 0; \
				if (isNil "_this") exitWith {""}; \
				str _this \
			}); \
			private _duration = diag_tickTime - _timeStart; \
			if (_duration < LIMIT_WARNING) exitWith { \
				_input ctrlSetBackgroundColor [0, 0, 0, 0]; \
				_status set [0, true]; \
			}; \
			_input ctrlSetBackgroundColor COLOR_WARNING; \
			_status set [0, false]; \
			if (_duration > LIMIT_CRITICAL) exitWith {_status set [1, _this]}; \
			_status set [1, ""]; \
		}

		_display displayAddEventHandler ["MouseMoving", WATCH_FIELD_FNC(IDC_RSCDEBUGCONSOLE_WATCHINPUT1,IDC_RSCDEBUGCONSOLE_WATCHOUTPUT1)];
		_display displayAddEventHandler ["MouseHolding", WATCH_FIELD_FNC(IDC_RSCDEBUGCONSOLE_WATCHINPUT1,IDC_RSCDEBUGCONSOLE_WATCHOUTPUT1)];
		_display displayAddEventHandler ["MouseMoving", WATCH_FIELD_FNC(IDC_RSCDEBUGCONSOLE_WATCHINPUT2,IDC_RSCDEBUGCONSOLE_WATCHOUTPUT2)];
		_display displayAddEventHandler ["MouseHolding", WATCH_FIELD_FNC(IDC_RSCDEBUGCONSOLE_WATCHINPUT2,IDC_RSCDEBUGCONSOLE_WATCHOUTPUT2)];
		_display displayAddEventHandler ["MouseMoving", WATCH_FIELD_FNC(IDC_RSCDEBUGCONSOLE_WATCHINPUT3,IDC_RSCDEBUGCONSOLE_WATCHOUTPUT3)];
		_display displayAddEventHandler ["MouseHolding", WATCH_FIELD_FNC(IDC_RSCDEBUGCONSOLE_WATCHINPUT3,IDC_RSCDEBUGCONSOLE_WATCHOUTPUT3)];
		_display displayAddEventHandler ["MouseMoving", WATCH_FIELD_FNC(IDC_RSCDEBUGCONSOLE_WATCHINPUT4,IDC_RSCDEBUGCONSOLE_WATCHOUTPUT4)];
		_display displayAddEventHandler ["MouseHolding", WATCH_FIELD_FNC(IDC_RSCDEBUGCONSOLE_WATCHINPUT4,IDC_RSCDEBUGCONSOLE_WATCHOUTPUT4)];

		_ctrlSpectatorCamera = _display displayCtrl IDC_RSCDEBUGCONSOLE_BUTTONSPECTATORCAMERA;
		_ctrlSpectatorCamera ctrlAddEventhandler ["buttonClick", {
			if (["IsInitialized"] call BIS_fnc_EGSpectator) then {
				["Terminate"] call BIS_fnc_EGSpectator;
			} else {
				["Initialize", [player, nil, true, true]] spawn BIS_fnc_EGSpectator;
			};
		}];

		_ctrlSplendidCamera = _display displayCtrl IDC_RSCDEBUGCONSOLE_BUTTONSPLENDIDCAMERA;
		_ctrlSplendidCamera ctrlAddEventhandler ["buttonClick", "[] spawn (uiNamespace getVariable 'bis_fnc_camera');"];

		_ctrlConfig = _display displayCtrl IDC_RSCDEBUGCONSOLE_BUTTONCONFIG;
		_ctrlConfig ctrlAddEventhandler ["buttonClick", "[ctrlParent (_this select 0)] spawn (uiNamespace getVariable 'bis_fnc_configViewer');"];

		_ctrlFunctions = _display displayCtrl IDC_RSCDEBUGCONSOLE_BUTTONFUNCTIONS;
		_ctrlFunctions ctrlAddEventhandler ["buttonClick", "[ctrlParent (_this select 0)] spawn (uiNamespace getVariable 'bis_fnc_help');"];

		_ctrlAnimations = _display displayCtrl IDC_RSCDEBUGCONSOLE_BUTTONANIMATIONS;
		_ctrlAnimations ctrlAddEventhandler ["buttonClick", "[] spawn (uiNamespace getVariable 'bis_fnc_animViewer');"];

		_ctrlGUI = _display displayCtrl IDC_RSCDEBUGCONSOLE_BUTTONGUI;
		_ctrlGUI ctrlAddEventhandler ["buttonClick", "[] spawn bis_fnc_guiEditor;"];

		_splendidCameraOpened = if !(isNil "BIS_fnc_camera_display") then {
			!(isNull BIS_fnc_camera_display);
		} else {
			false;
		};
		if (isNull ([] call (uiNamespace getVariable "BIS_fnc_displayMission")) || _splendidCameraOpened) then {
			{
				_x ctrlEnable false;
			} foreach [_ctrlSplendidCamera, _ctrlSpectatorCamera, _ctrlAnimations, _ctrlGUI];
		};

		if !(isNull findDisplay 312) then {
			{
				_x ctrlEnable false;
				_x call BIS_fnc_log;
			} foreach [_ctrlSplendidCamera, _ctrlSpectatorCamera, _ctrlAnimations];
		};
	};

	case "executeButton": {
		_args = _params select 0;
		_mode = _params select 1;
		_display = ctrlParent (_args select 0);
		_input = _display displayCtrl IDC_RSCDEBUGCONSOLE_EXPRESSION;
		_inputValue = "";

		with missionNamespace do {
			_input = ctrlText _input;

			private _args = "";
			private _len = count UTILITIES_KEYWORD;
			if (_input select [0, _len] == UTILITIES_KEYWORD && {_args = _input select [_len] splitString " " joinString ""; _args isEqualTo "" || {"0123456789" find (_args select [0, 1]) > -1}}) exitWith {parseNumber _args execVM "\A3\Functions_F\Debug\Utilities\lib\index.sqf";};

			switch _mode do {
				case 0;
				case 1;
				case 2: {
					[_mode, compile _input] remoteExec ["BIS_fnc_debugConsoleExec", 2];
				};
				case 3: {
					[_input, nil, nil, _display] spawn BIS_fnc_codePerformance;
				};
			};
		};
		true
	};

	case "onUnload": {
		_display = _params select 0;

		_ctrlExpression = _display displayCtrl IDC_RSCDEBUGCONSOLE_EXPRESSION;
		profileNamespace setVariable ["RscDebugConsole_expression", ctrlText _ctrlExpression];

		{
			disableSerialization;
			private _input = _display displayCtrl _x;
			private _value = _input getVariable ["RscDebugConsole_watchStatus", [true, ""]];
			if (_value select 1 isEqualTo "") then {
				_value set [0, true];
			};
			_value set [1, ctrlText _input];
			profileNamespace setVariable ["RscDebugConsole_watch" + str (_forEachIndex + 1), _value];
		} forEach [IDC_RSCDEBUGCONSOLE_WATCHINPUT1, IDC_RSCDEBUGCONSOLE_WATCHINPUT2, IDC_RSCDEBUGCONSOLE_WATCHINPUT3, IDC_RSCDEBUGCONSOLE_WATCHINPUT4];
		saveProfileNamespace;
	};
};