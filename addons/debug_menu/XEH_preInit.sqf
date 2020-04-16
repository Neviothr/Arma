#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

// Weather commands are inconsistant after save load.
// Detect this using EH, and define a variable.
// When defined - weather control sliders will be disabled when the debug menu loads.
addMissionEventHandler ["Loaded", {
    LOG("Loaded EH fired, disabling weather control sliders.");
    GVAR(disableWeatherSliders) = true;
}];

// Sort ACE VA by mod/weight upon opening.
["ace_arsenal_leftPanelFilled", {
	params ["_display"];

	private _leftPanelCtrl = _display displayCtrl 16; // IDC_sortLeftTab
	_leftPanelCtrl lbSetCurSel 1;

	private _rightPanelCtrl = _display displayCtrl 17; // IDC_sortRightTab
	_rightPanelCtrl lbSetCurSel 1;
}] call CBA_fnc_addEventHandler;


[
    "Debug Menu",
    "debug_menu_key",
    "Open debug menu",
    {
        if (hasInterface && !dialog) then {
            createDialog QGVAR(debugMenuDisplay);
        };

        // Check if the AI counter display is shown, if not - load it.
        if (isNull (uiNamespace getVariable ["nev_ai_counter_aiCounterDisplay", displayNull])) then {
            QGVAR(aiCounterLayer) cutRsc ["nev_ai_counter_aiCounter", "PLAIN", -1, true];
        };
    },
    ""
] call CBA_fnc_addKeybind;

#include "initSettings.sqf"

ADDON = true;
