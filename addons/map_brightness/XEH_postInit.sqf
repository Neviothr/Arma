#include "script_component.hpp"

((findDisplay 12) displayCtrl 51) ctrlAddEventHandler ["Draw", {_this call FUNC(onDraw)}];
