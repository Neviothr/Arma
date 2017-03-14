#include "script_component.hpp"

[QGVAR(message), ["MAP TELEPORT", "Click on the location to which you'd like to be teleported."], 10] call bis_fnc_showNotification;

openMap true;
[QGVAR(teleport), "onMapSingleClick", {
    vehicle player setPos _pos;
    [QGVAR(teleport), "onMapSingleClick"] call BIS_fnc_removeStackedEventHandler;
}] call BIS_fnc_addStackedEventHandler;