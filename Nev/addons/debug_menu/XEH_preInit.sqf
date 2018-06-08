#include "script_component.hpp"

#include "XEH_PREP.hpp"

[QGVAR(registerCurator), {
    params ["_unit"];

    private _curator = createGroup sideLogic createUnit ["ModuleCurator_F", [0, 0, 0], [], 0, "CAN_COLLIDE"];

    _curator setVariable ["addons", 3, true];
    _curator addCuratorEditableObjects [allMissionObjects "", true];
    _unit assignCurator _curator;

    "Registered as Curator." remoteExec ["systemChat", _unit];
}] call CBA_fnc_addEventHandler;
