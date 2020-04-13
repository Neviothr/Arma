#include "script_component.hpp"

// https://github.com/Cyruz143/ark_inhouse/blob/master/addons/ark_blood_effects/server_postinit.sqf

GVAR(bloodDrops) = [];

GVAR(bloodEffectModels) = [
    "a3\Props_F_Orange\Humanitarian\Garbage\BloodPool_01_Large_F.p3d",
    "a3\Props_F_Orange\Humanitarian\Garbage\BloodPool_01_Medium_F.p3d",
    "a3\Props_F_Orange\Humanitarian\Garbage\BloodSplatter_01_Large_F.p3d",
    "a3\Props_F_Orange\Humanitarian\Garbage\BloodSplatter_01_Medium_F.p3d",
    "a3\Props_F_Orange\Humanitarian\Garbage\BloodSpray_01_F.p3d"
];

addMissionEventHandler ["EntityKilled", {call FUNC(createBlood)}];
