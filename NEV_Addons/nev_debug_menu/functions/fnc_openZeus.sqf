#include "script_component.hpp"

private "_curator";

_curator = (createGroup sideLogic) createUnit ["ModuleCurator_F", [0, 0, 0] , [], 0, ""]; // Create curator module, needed in order to assign a curator
player assignCurator _curator; // Assign a curator, the user in our case
openCuratorInterface; // Force open the curator interface