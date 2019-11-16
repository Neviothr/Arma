#include "script_component.hpp"

(_this select 0) params ["_control", "_value"];
(fogParams) params ["_fogValue", "_fogDecay", "_fogBase"];

switch (str _control) do {
    case "Control #80001": {
        skipTime -24;
        86400 setOvercast _value;
        skipTime 24;

        forceWeatherChange;
        simulWeatherSync;
    };

    case "Control #80002": { // Fog value
        0 setFog [_value, _fogDecay, _fogBase];
    };

    case "Control #80003": { // Fog decay
        0 setFog [_fogValue, _value, _fogBase];
    };

    case "Control #80004": { // Fog base
        0 setFog [_fogValue, _fogDecay, _value];
    };

    case "Control #80005": {
        0 setRain _value;

        forceWeatherChange;
    };

    case "Control #80006": {
        0 setGusts _value;
    };

    case "Control #80007": {
        0 setWindStr _value;
    };

    case "Control #80008": {
        0 setWindDir _value;
    };

    case "Control #80009": {
        0 setLightnings _value;
    };

    case "Control #80010": {
        0 setWaves _value;
    };
};
