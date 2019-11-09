class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};

class Extended_InitPost_EventHandlers {
    class CAManBase {
        class GVAR(addHandleDamage) {
            init = QUOTE(ARR_1([_this select 0])call FUNC(addHandleDamage));
        };
    };
};

class Extended_HandleHeal_EventHandlers {
    class CAManBase {
        class GVAR(handleHealEH) {
            handleHeal = QUOTE(ARR_1([_this select 0]) call FUNC(handleHeal));
        };
    };
};
