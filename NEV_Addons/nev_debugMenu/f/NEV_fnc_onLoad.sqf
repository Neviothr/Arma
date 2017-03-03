NEV_fnc_onLoad = {
	_dialog = _this select 0;

	// Overcast slider
	_overcastSlider = _dialog displayCtrl 80003;
	_overcastSlider sliderSetRange [0, 1];
	_overcastSlider sliderSetPosition overcast;

	// Lightnings slider
	_lightningSlider = _dialog displayCtrl 80004;
	_lightningSlider sliderSetRange [0, 1];
	_lightningSlider sliderSetPosition lightnings;

	// Fog value slider
	_fogValueSlider = _dialog displayCtrl 80005;
	_fogValueSlider sliderSetRange [0, 1];
	_fogValueSlider sliderSetPosition (fogParams select 0);

	// Fog decay slider
	_fogDecaySlider = _dialog displayCtrl 80006;
	_fogDecaySlider sliderSetRange [0, 1];
	_fogDecaySlider sliderSetPosition (fogParams select 1);

	// Fog base slider
	_fogBaseSlider = _dialog displayCtrl 80007;
	_fogBaseSlider sliderSetRange [0, 1];
	_fogBaseSlider sliderSetPosition (fogParams select 2);

	// Rain slider
	_rainSlider = _dialog displayCtrl 80008;
	_rainSlider sliderSetRange [0, 1];
	_rainSlider sliderSetPosition rain;

	// Waves slider
	_wavesSlider = _dialog displayCtrl 80009;
	_wavesSlider sliderSetRange [0, 1];
	_wavesSlider sliderSetPosition waves;
}