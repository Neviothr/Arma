#define COMPONENT interact

#include "\x\nev\addons\main\script_mod.hpp"
#include "\x\nev\addons\main\script_macros.hpp"

	#define UNFLIP_ACTION \
        class ACE_Actions { \
            class ACE_MainActions { \
                class GVAR(test1) { \
                    displayName = "Unflip Vehicle"; \
                    condition = "1 < (vectorUp _target) vectorDistance (surfaceNormal getPosATL _target)"; \
                    statement = "private _position = getPosATL _target; _target setVectorUp surfaceNormal _position; _target setPosATL _position;"; \
                    exceptions[] = {"isNotSwimming"}; \
                }; \
            }; \
        }
