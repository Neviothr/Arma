#include "script_component.hpp"

private "_curator";

// Create curator module, needed to assign curator
_curator = (createGroup sideLogic) createUnit ["ModuleCurator_F", [0, 0, 0] , [], 0, ""];
player assignCurator _curator;

hint "Zeus has been created.";