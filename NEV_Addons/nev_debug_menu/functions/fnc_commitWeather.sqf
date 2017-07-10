#include "script_component.hpp"

// param [0] is _this select 0 but faster, said commy2
param [0] params ["_control", "_value"];

switch (str _control) do {
	// Overcast
	case "Control #80003": {
		// To say on the same date
		skipTime -24;
		86400 setOvercast _value;
		skipTime 24;
	};
	case "Control #80004": {
		// Lightnings
		0 setLightnings _value;
	};
	case "Control #80005": {
		// Fog decay
		0 setFog [_value, fogParams select 1, fogParams select 2];
	};
	case "Control #80006": {
		// Fog decay
		0 setFog [fogParams select 0, _value, fogParams select 2];
	};
	case "Control #80007": {
		// Fog base
		0 setFog [fogParams select 0, fogParams select 1, _value];
	};
	case "Control #80008": {
		// Rain
		0 setRain _value;
	};
	case "Control #80009": {
		// Waves
		0 setWaves _value;
	}
};

// Sync weather effects
simulWeatherSync;
forceWeatherChange;