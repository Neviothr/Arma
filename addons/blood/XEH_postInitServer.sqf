#include "script_component.hpp"

GVAR(bloodEffectModels) = [
    "a3\Props_F_Orange\Humanitarian\Garbage\BloodPool_01_Large_F.p3d",
    "a3\Props_F_Orange\Humanitarian\Garbage\BloodPool_01_Medium_F.p3d",
    "a3\Props_F_Orange\Humanitarian\Garbage\BloodSplatter_01_Large_F.p3d",
    "a3\Props_F_Orange\Humanitarian\Garbage\BloodSplatter_01_Medium_F.p3d",
    "a3\Props_F_Orange\Humanitarian\Garbage\BloodSpray_01_F.p3d"
];

addMissionEventHandler ["EntityKilled", {call FUNC(createBlood)}];

if (isServer) then {
    GVAR(bloodDrops) = [];

    [QGVAR(bloodDropCreated), {
        params ["_bloodDrop"];

        // Add to created queue with format: [expire time, blood object]
        private _index = GVAR(bloodDrops) pushBack [CBA_missionTime + 4050, _bloodDrop];

        if (count GVAR(bloodDrops) >= 25) then {
            (GVAR(bloodDrops) deleteAt 0) params ["", "_deletedBloodDrop"];
            deleteVehicle _deletedBloodDrop;
        };

        // Start the cleanup loop
        if (_index == 0) then {
            [FUNC(cleanupLoop), [], 2025] call CBA_fnc_waitAndExecute;
        };
    }] call CBA_fnc_addEventHandler;
};
