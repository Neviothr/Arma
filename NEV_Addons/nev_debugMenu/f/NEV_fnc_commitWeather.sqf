NEV_fnc_commitWeather = {
	// Overcast
	_overcast = sliderPosition 80003;
	skipTime -24;
	sleep 0.1;
	86400 setOvercast _overcast;
	sleep 0.1;
	skipTime 24;

	// Lightnings
	_lightning = sliderPosition 80004;
	0 setLightnings _lightning;

	// Fog
	_fogValue = sliderPosition 80005;
	_fogDecay = sliderPosition 80006;
	_fogBase = sliderPosition 80007;
	0 setFog [_fogValue, _fogDecay, _fogBase];

	// Rain
	_rain = sliderPosition 80008;
	0 setRain _rain;

	// Waves
	_waves = sliderPosition 80009;
	0 setWaves _waves;

	// Sync
	simulWeatherSync;
	forceWeatherChange;
};