#include "script_component.hpp"

// Get slider postions of all weather controls, apply weather accordingly
// Overcast
86400 setOvercast sliderPosition 80003;
skipTime 24;

// Lightnings
0 setLightnings sliderPosition 80004;

// Fog
0 setFog [sliderPosition 80005, sliderPosition 80006, sliderPosition 80007];

// Rain
0 setRain sliderPosition 80008;

// Waves
0 setWaves sliderPosition 80009;

// Sync weather effects
simulWeatherSync;
forceWeatherChange;