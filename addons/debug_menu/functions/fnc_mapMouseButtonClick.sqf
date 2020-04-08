#include "script_component.hpp"

params ["_control"];

ctrlMapMouseOver _control params [["_type", ""], "_marker"];

if (_type == "marker" && {_marker find "wave_spawner" != -1}) then { // check if marker is named in case mission maker ingnores the module's warning
    private _button = findDisplay (IDD_debugMenuDisplay) ctrlCreate ["RscButton", -1];

    GVAR(moduleForDeletion) = _marker; // We create a global variable because local arguments can't be passed to a ctrlEH

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
