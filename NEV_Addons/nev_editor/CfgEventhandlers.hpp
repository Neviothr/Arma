class Extended_PreStart_EventHandlers {
	class ADDON {
		init = QUOTE(call COMPILE_FILE(XEH_preStart));
	};
};

class Extended_PreInit_EventHandlers {
	class ADDON {
		init = QUOTE(call COMPILE_FILE(XEH_preInit));
	};
};

class Extended_PostInit_EventHandlers {
	class ADDON {
		init = QUOTE(call COMPILE_FILE(XEH_postInit));
	};
};

// https://github.com/TMF3/TMF/blob/0038a0ac3e743ef8adb0df66e6e314b1dd5d4360/addons/common/CfgEventHandlers.hpp
class Extended_Init_EventHandlers {
	class nev_hideMapObjects {
		class ADDON {
			init = QUOTE(_this call FUNC(hideMapObjects));
		};
	};
};