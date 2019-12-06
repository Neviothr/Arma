class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
        clientInit = QUOTE(call COMPILE_FILE(XEH_preInitClient));
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
        clientInit = QUOTE(call COMPILE_FILE(XEH_postInitClient));
    };
};

class Extended_DisplayLoad_EventHandlers {
    class Display3DEN {
        ADDON = QUOTE(call COMPILE_FILE(init3DEN));
    };
};
