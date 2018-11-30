#include "script_component.hpp"

(_this select 0) params ["_control", "_value"];
(fogParams) params ["_fogValue", "_fogDecay", "_fogBase"];

switch (str _control) do {
	// Overcast
	case "Control #80001": {
		// To say on the same date
		skipTime -24;
		86400 setOvercast _value;
		skipTime 24;
	};
	case "Control #80002": {
		// Fog value
		0 setFog [_value, _fogDecay, _fogBase];
	};
	case "Control #80003": {
		// Fog decay
		0 setFog [_fogValue, _value, _fogBase];
	};
	case "Control #80004": {
		// Fog base
		0 setFog [_fogValue, _fogDecay, _value];
	};
	case "Control #80005": {
		// Rain
		0 setRain _value;
	};
};

// Sync weather effects
simulWeatherSync;
forceWeatherChange;
