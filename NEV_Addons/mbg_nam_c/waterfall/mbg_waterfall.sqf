_sh = [3420.54,3731.86,13.07018];
	_col=[0.9,0.9,1];
	_c1=_col select 0;
	_c2=_col select 1;
	_c3=_col select 2;
	
	_source2 = "#particlesource" createVehicleLocal _sh;
	_source2 setParticleParams [["\Ca\Data\ParticleEffects\Universal\Universal", 16, 12, 8, 0], "", "Billboard", 1, 10, [0, 0, 0], [-5, 0, -2], 0, 3.277, 1, 0.425, [1, 2, 4], [[_c1, _c2, _c3, 0.4], [_c1, _c2, _c3, 0.2], [_c1, _c2, _c3, 0]], [0.2], 1, 0.04, "", "", _sh];
	_source2 setParticleRandom [6, [0, 1.3, 0], [1, 1, 0.25], 0, 0.5, [0, 0, 0, 0.2], 0, 0, 360];
	_source2 setDropInterval 0.005;
	_pos = [(_sh select 0)-5, (_sh select 1), (_sh select 2)-8];

	
	_soundSource = createSoundSource ["MBG_Waterfall_Sound", _pos, [], 0];
	_soundSource = createSoundSource ["Sound_Stream", _pos, [], 0];
	
_sh = [1520.34,2542.73,9.04315];
	_col=[0.9,0.9,1];
	_c1=_col select 0;
	_c2=_col select 1;
	_c3=_col select 2;
	
	_source1 = "#particlesource" createVehicleLocal _sh;
	_source1 setParticleParams [["\Ca\Data\ParticleEffects\Universal\Universal", 16, 12, 8, 0], "", "Billboard", 1, 10, [0, 0, 0], [5, 0, -2], 0, 3.277, 1, 0.425, [1, 2, 4], [[_c1, _c2, _c3, 0.4], [_c1, _c2, _c3, 0.2], [_c1, _c2, _c3, 0]], [0.2], 1, 0.04, "", "", _sh];
	_source1 setParticleRandom [6, [0, 1.3, 0], [1, 1, 0.25], 0, 0.5, [0, 0, 0, 0.2], 0, 0, 360];
	_source1 setDropInterval 0.005;
	_pos = [(_sh select 0)+5, (_sh select 1), (_sh select 2)-9.5];

	
	_soundSource = createSoundSource ["MBG_Waterfall_Sound", _pos, [], 0];
	_soundSource = createSoundSource ["Sound_Stream", _pos, [], 0];	

	