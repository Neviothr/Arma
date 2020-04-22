class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_PostInit));
    };
};

// https://github.com/acemod/ACE3/pull/6029/files#diff-11a98024d39dfc072d9f4c9ee31ba0cc
class Extended_Init_EventHandlers {
    class WeaponHolder {
        class ADDON {
            init = QUOTE(_this call DFUNC(initObject));
        };
    };
};
