disableSerialization;

_dialog = findDisplay 17000;
_slider = _dialog displayCtrl 17001;
_sliderPos = sliderPosition _slider;

setDate [nil, nil, nil, nil, _sliderPos];