#include "script_component.hpp"

{
	_x allowFleeing 0;
	_x disableAI "SUPPRESSION";
	_x disableAI "COVER";
	_x disableAI "AUTOCOMBAT";
	_x setBehaviour "AWARE";
	_x setSpeedMode "FULL";
	_x setSkill ["aimingAccuracy", 0.03];
	_x reveal player;
} forEach allUnits;