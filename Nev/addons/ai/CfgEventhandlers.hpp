class Extended_PostInit_EventHandlers {
	class Tank {
		class GVAR(tankCrewInTracked) {
			init = "(_this select 0) allowCrewInImmobile true;";
		};
	};

	class ADDON {
        serverInit = QUOTE(call COMPILE_FILE(XEH_postInitServer));
    };
};
