// check if calling machine has interface
if !(hasInterface) exitWith {};

_this params [
	["_mode", "", [""]],
	["_params", [], [[]]]
];

switch (_mode) do {
	//-------------------------------------------------------
	// onload - executed when interface load handler is fired
	case "onLoad": {
		_params params [
			["_display", displayNull, [displayNull]]
		];

		// check if display was passed
		if (isNull _display) exitWith {};

		// Overcast slider
		_overcastSlider = _display displayCtrl 80003;
		_overcastSlider sliderSetRange [0, 1];
		_overcastSlider sliderSetPosition overcast;

		// Lightnings slider
		_lightningSlider = _display displayCtrl 80004;
		_lightningSlider sliderSetRange [0, 1];
		_lightningSlider sliderSetPosition lightnings;

		// Fog value slider
		_fogValueSlider = _display displayCtrl 80005;
		_fogValueSlider sliderSetRange [0, 1];
		_fogValueSlider sliderSetPosition (fogParams select 0);

		// Fog decay slider
		_fogDecaySlider = _display displayCtrl 80006;
		_fogDecaySlider sliderSetRange [0, 1];
		_fogDecaySlider sliderSetPosition (fogParams select 1);

		// Fog base slider
		_fogBaseSlider = _display displayCtrl 80007;
		_fogBaseSlider sliderSetRange [0, 1];
		_fogBaseSlider sliderSetPosition (fogParams select 2);

		// Rain slider
		_rainSlider = _display displayCtrl 80008;
		_rainSlider sliderSetRange [0, 1];
		_rainSlider sliderSetPosition rain;

		// Waves slider
		_wavesSlider = _display displayCtrl 80009;
		_wavesSlider sliderSetRange [0, 1];
		_wavesSlider sliderSetPosition waves;
	};
	//-------------------------------------------------------
	// sliderMoved - executed when slider position is changed
	case "sliderMoved": {
		_params params [
			["_sliderCtrl", controlNull, [controlNull]],
			["_sliderPos", 0, [0]]
		];

		// check control was passed
		if (isNull _sliderCtrl) exitWith {};

		// get display to update other controls
		_display = ctrlParent _sliderCtrl;

		// set the overcast from slider value
		0 setOvercast _sliderPos;
	};
	//-------------------------------------------------------
	// default case - displays error message for invalid mode
	default {
		_nul = ["NEV_fnc_debugMenu: '_mode' was invalid!"] call BIS_fnc_error;
	};
};