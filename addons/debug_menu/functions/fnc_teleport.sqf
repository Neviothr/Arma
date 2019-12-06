#include "script_component.hpp"

private _assignedItems = assignedItems player;

if (["ItemMap", "ItemGPS", "I_UavTerminal", "C_UavTerminal", "O_UavTerminal", "B_UavTerminal"] findIf {_x in _assignedItems} == -1) exitWith {systemChat "[Debug Menu] Teleportion function requires map, GPS or UAV terminal. You have none."};

systemChat "[Debug Menu] Choose location...";
openMap [true, true];

addMissionEventHandler ["MapSingleClick", {
    params ["", "_pos"];

    vehicle player setPos _pos;
    openMap [false, false];
    removeMissionEventHandler ["MapSingleClick", _thisEventhandler];
}];
