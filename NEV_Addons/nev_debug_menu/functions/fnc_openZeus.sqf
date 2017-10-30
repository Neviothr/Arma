#include "script_component.hpp"

private "_curator";

// Create curator module, needed in order to assign a curator
_curator = (createGroup sideLogic) createUnit ["ModuleCurator_F", [0, 0, 0] , [], 0, ""];
player assignCurator _curator; // Assign curator

// Notify the user
hint "Zeus has been created.";