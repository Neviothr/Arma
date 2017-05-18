// https://github.com/TMF3/TMF/blob/0038a0ac3e743ef8adb0df66e6e314b1dd5d4360/addons/common/CfgVehicles.hpp
class cfgVehicles {
    class All;
    class Logic: All {
        class Eventhandlers;
    };
    class GVAR(hideMapObjects): Logic {
        displayName = "Hide Map Objects";
        class Eventhandlers {
            init = "call cba_xeh_fnc_init";
        };
    };
};