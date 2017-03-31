#include "script_component.hpp"

{
	_x allowFleeing 0; // We don't want EI to retreat
	_x disableAI "SUPPRESSION"; // Shooting will not be effected by supperssion
	_x disableAI "COVER"; // Seeking cover is not needed, red army style
	_x disableAI "AUTOCOMBAT"; // Disable switch combat modes, thus making sure EI is always in combat mode
	_x setBehaviour "AWARE"; // EI will keep their guard up
	_x setSpeedMode "FULL"; // EI will move quickly
	_x setSkill ["aimingAccuracy", 0.03]; // EI's default aimbot will be disabled to allow for a fairer firefight
	_x reveal allPlayers; // So EI knows where friends are
} forEach allUnits; // Apply to all units