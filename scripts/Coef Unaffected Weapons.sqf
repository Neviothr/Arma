private _allWeapons = (("true" configClasses (configFile >> "CfgWeapons")) apply {configName _x});
nev_unaffectedWeapons = [];

{
	private _coefNumber = getNumber (configfile >> "CfgWeapons" >> _x >> "aiDispersionCoefX");

	if ((_coefNumber < 50) && _x call BIS_fnc_itemType select 0 == "Weapon") then {
		nev_unaffectedWeapons pushBack _x;
	};
} forEach _allWeapons;
