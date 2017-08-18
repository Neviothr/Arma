class Extended_PreStart_EventHandlers {
	class nev_cache {
		init = QUOTE(call COMPILE_FILE(XEH_preStart));
	};
};

class Extended_PreInit_EventHandlers {
	class nev_cache {
		init = QUOTE(call COMPILE_FILE(XEH_preInit));
	};
};

class Extended_PostInit_EventHandlers {
	class nev_cache {
		init = QUOTE(call COMPILE_FILE(XEH_postInit));
	};
};