private "_flyby";

_flyby = false;

while {alive _this} do {
	_sleeptime = 19;
	while {!_flyby} do {
		sleep 2;
		_dist = player distance _this;
		_speed = speed _this;
		_ex = (_this != vehicle player && {!(vehicle player isKindOf "Plane")});
		if (!_ex) exitWith {};
		
		_a10 = (_this isKindOf "A10" || {_this isKindOf "Su25_base"});
		_su = (_this isKindOf "Su34" || {_this isKindOf "ACE_T10"} || {_this isKindOf "L39_TK_EP1"} || {_this isKindOf "ACE_Su30"} || {_this isKindOf "ACE_Su34"});

		if (!_a10 && {!_su} && {_dist > 1000} && {_dist <= 1800} && {_speed > 350}) exitWith {
			playsound "ace_fx_jetflybyfar";
			_flyby = true;
		};

		if (_su && {_dist > 800} && {_dist <= 1800} && {_speed > 350}) exitWith {
			playsound "ace_fx_jetflybyfar";
			_flyby = true;
		};

		if (_su && {_dist > 99} && {_dist <= 800} && {_speed > 350}) exitWith {
			playsound "ace_fx_jetflybysu";
			_flyby = true;
		};

		_av8 = (_this isKindOf "AV8B2");
		if (_av8 && {_dist > 99} && {_dist <= 1000} && {_speed > 350}) exitWith {
			playsound "ace_fx_jetflybyharrier";
			_flyby = true;
		};

		if (_a10 && {_dist > 99} && {_dist <= 500} && {_speed > 180}) exitWith {
			playsound "ace_fx_jetflybya10";
			_flyby = true;
		};

		if (!_a10 && {_dist > 99} && {_dist <= 1000} && {_speed > 350}) exitWith {
			playsound "ace_fx_jetflybyshort";
			_flyby = true;
		};
	};
	sleep _sleeptime;
	_flyby = false;
};
