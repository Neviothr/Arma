class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};

class Extended_Reloaded_EventHandlers {
    class CAManBase {
        class GVAR(manReloadedEH) {
            reloaded = QUOTE(_this call FUNC(manReloadedEH));
        };
    };

    class Air {
        class GVAR(vehicleReloadedEH) {
            reloaded = QUOTE(_this call FUNC(vehicleReloadedEH));
        };
    };

    class Car {
        class GVAR(vehicleReloadedEH) {
            reloaded = QUOTE(_this call FUNC(vehicleReloadedEH));
        };
    };

    class Tank {
        class GVAR(vehicleReloadedEH) {
            reloaded = QUOTE(_this call FUNC(vehicleReloadedEH));
        };
    };
};