#include "script_component.hpp"

({_x distance _leader < 1600} count GVAR(players) > 0) || !isNull (_leader findNearestEnemy _leader);