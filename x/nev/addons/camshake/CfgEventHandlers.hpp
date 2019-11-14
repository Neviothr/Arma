class Extended_PostInit_EventHandlers {
    class ADDON {
        clientInit = QUOTE(call COMPILE_FILE(XEH_postInitClient));
    };
};

class Extended_preInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};

class Extended_Killed_EventHandlers {
    class Car {
        class GVAR(explosionShakeEH) {
            killed = QUOTE(_this call FUNC(explosionShake));
        };
    };

    class Tank {
        class GVAR(explosionShakeEH) {
            killed = QUOTE(_this call FUNC(explosionShake));
        };
    };
};
