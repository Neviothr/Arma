class GVAR(debugMenuDisplay) {
    duration = 1e6;
    idd = IDD_debugMenuDisplay;
    movingEnable = true;
    onLoad = QUOTE(call FUNC(onLoad));

    class Controls {
        #include "Date.hpp"
        #include "DebugConsole.hpp"
        #include "Misc.hpp"
        #include "Static.hpp"
        #include "Teleportation.hpp"
        #include "Vehicle.hpp"
        #include "VirtualArsenal.hpp"
        #include "Visability.hpp"
        #include "Weather.hpp"
    }; 
};

/*
<--140--> Horizontal distance between elements

/\
||
35 Vertrical distance between elements
||
\/
*/