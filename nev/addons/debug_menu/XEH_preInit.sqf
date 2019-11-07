#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

[QGVAR(registerCurator), {
    params ["_unit"];

    private _curator = createGroup sideLogic createUnit ["ModuleCurator_F", [0, 0, 0], [], 0, "CAN_COLLIDE"];

    _curator setVariable ["Addons", 3, true];
    _curator addCuratorEditableObjects [allMissionObjects "", true];
    _curator setCuratorWaypointCost 0;

    {
        _curator setCuratorCoef [_x, 0];
    } forEach ["Place", "Edit", "Delete", "Destroy", "Group", "Synchronize"];

    _unit assignCurator _curator;

    "[Debug Menu] Registered as Curator." remoteExec ["systemChat", _unit];
}] call CBA_fnc_addEventHandler;

["Debug Menu", QGVAR(debugMenuDisplay)] call CBA_fnc_addPauseMenuOption;

ADDON = true;
