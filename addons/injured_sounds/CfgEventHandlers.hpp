class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};

class Extended_Hit_EventHandlers {
    class CAManBase {
        class GVAR(hitEH) {
            hit = QUOTE([_this select 0] call FUNC(playInjuredSound));
        };
    };
};
