#include "script_component.hpp"

private "_curator";

// Create curator module, needed to assign curator
_curator = (createGroup sideLogic) createUnit ["ModuleCurator_F", [0, 0, 0] , [], 0, ""];
player assignCurator _curator;

// Make all entites editable by all curators
{
	_x addCuratorEditableObjects [entities "", true];
} forEach allCurators;

hint "Zeus has been created, all entities are editable.";
