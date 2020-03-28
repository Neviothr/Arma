class GVAR(debugMenuDisplay) {
    duration = 1e6;
    idd = IDD_debugMenuDisplay;
    movingEnable = true;
    onLoad = QUOTE(call FUNC(onLoad));

    class Controls {
        // Keep button out of Tools.hpp and as the top class to insure it as the default selection
        class GVAR(removeDeadButton): NevRscButton {
            text = "Remove Dead";
            x = "SafeZoneX + (1220 / 1920) * SafeZoneW";
            y = "SafeZoneY + (505 / 1080) * SafeZoneH";
            action = QUOTE({deleteVehicle _x} forEach allDead - GVAR(deadOnStart) + nev_blood_bloodDrops);
        };

        #include "Arsenal.hpp"
        #include "Date.hpp"
        #include "DebugConsole.hpp"
        #include "Mission.hpp"
        #include "Static.hpp"
        #include "Teleportation.hpp"
        #include "Tools.hpp"
        #include "Vehicle.hpp"
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
