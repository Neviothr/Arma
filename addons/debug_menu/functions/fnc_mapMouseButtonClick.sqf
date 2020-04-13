#include "script_component.hpp"

/*
 * Author: Neviothr
 * Handle clicking on the debug menu's map control, delete wave spawner modules and attached markers.
 *
 * Arguments:
 * 0: Map control <CONTROL>
 *
 * Return Value:
 * None.
 *
 * Example:
 * _mapDisplay ctrlAddEventHandler ["MouseButtonDown", {_this call nev_debug_menu_fnc_mapMouseButtonClick}];
 *
 * Public: No
*/

params ["_control"];

TRACE_1("",_control);

ctrlMapMouseOver _control params [["_type", ""], "_marker"];

if (_type == "marker") then {
    // Assign to a global variable because _marker can't be passed to the ctrlEH.
    GVAR(moduleForDeletion) = _marker;

    private _button = findDisplay (IDD_debugMenuDisplay) ctrlCreate ["RscButton", -1];
    _button ctrlSetPosition getMousePosition;
    _button ctrlSetText "Delete";
    ctrlSetFocus _button;
    _button ctrlCommit 0;

    _button ctrlAddEventHandler ["ButtonClick", {
        params ["_control"];

        // Unstring the marker name to get a usable wave spawner name for deletion.
        deleteVehicle call compile GVAR(moduleForDeletion);
        deleteMarkerLocal GVAR(moduleForDeletion);
        GVAR(moduleForDeletion) = nil;
        ctrlDelete _control;
    }];
};
