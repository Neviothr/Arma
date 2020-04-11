#include "script_component.hpp"

params ["_control"];

ctrlMapMouseOver _control params [["_type", ""], "_marker"];

if (_type == "marker") then {
    private _button = findDisplay (IDD_debugMenuDisplay) ctrlCreate ["RscButton", -1];

    GVAR(moduleForDeletion) = _marker; // Assign to a global variable because _marker can't be passed to the ctrlEH

    _button ctrlSetPosition getMousePosition;
    _button ctrlSetText "Delete";
    ctrlSetFocus _button;
    _button ctrlCommit 0;

    _button ctrlAddEventHandler ["ButtonClick", {
        params ["_control"];

        deleteVehicle call compile GVAR(moduleForDeletion);
        deleteMarkerLocal GVAR(moduleForDeletion);
        GVAR(moduleForDeletion) = nil;
        ctrlDelete _control;
    }];
};
