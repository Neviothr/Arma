#include "script_component.hpp"

(GVAR(bloodDrops) deleteAt 0) params ["", "_deletedBloodDrop"];
deleteVehicle _deletedBloodDrop;

// Exit the loop if we have cleaned out the array
if (GVAR(bloodDrops) isEqualTo []) exitWith {};

// Wait until the next blood drop in the queue will expire
(GVAR(bloodDrops) select 0) params ["_expireTime"];
[FUNC(cleanupLoop), [], _expireTime - CBA_missionTime] call CBA_fnc_waitAndExecute;
