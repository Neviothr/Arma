/*
    Point of this file is to disable "auto-weather" by default
    We want this, because it breaks weather commands used in debug_menu component

    https://github.com/acemod/ACE3/blob/e5a15d200f44df5fccc0bc5575d18d80b35538dd/addons/weather/init3DEN.sqf
*/

#include "script_component.hpp"

/*
    Cannot create checkboxes which have the default value "true"
    3den uses inverted checkboxes instead, but those only change in appearence
    We have to auto set these settings manually - on mission creation
*/
add3DENEventHandler ["onMissionNew", {
    set3DENMissionAttributes [
        // Compatibility for debug_menu weather control
        ["Intel", "IntelRainIsForced", true],
        ["Intel", "IntelLightningIsForced", true],
        ["Intel", "IntelWavesIsForced", true],
        ["Intel", "IntelWindIsForced", true],
    ];
}];
