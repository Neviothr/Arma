#include "script_component.hpp"

hint "Click on the location to which you'd like to be teleported.";
openMap true;

addMissionEventHandler ["MapSingleClick", {
	params ["_units", "_pos", "_alt", "_shift"];

	vehicle player setPos _pos;
	removeMissionEventHandler ["MapSingleClick", _thisEventhandler]; // Remove EH to allow compatablity with custom waypoint in a3_overrides
}];
