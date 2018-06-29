#include "script_component.hpp"

private _assignedItems = assignedItems player;

if (["ItemMap", "ItemGPS", "I_UavTerminal", "C_UavTerminal", "O_UavTerminal", "B_UavTerminal"] findIf {_x in _assignedItems} == -1) exitWith {systemChat "Teleportion requires map, GPS or UAV terminal. You have none."};

systemChat "Click on the location to which you'd like to be teleported.";
openMap [true, true];

addMissionEventHandler ["MapSingleClick", {
	params ["_units", "_pos", "_alt", "_shift"];

	vehicle player setPos _pos;
	openMap [false, false];
	removeMissionEventHandler ["MapSingleClick", _thisEventhandler]; // Remove EH to allow compatablity with custom waypoint in a3_overrides
}];
