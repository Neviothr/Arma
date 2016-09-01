/*
File: customLoadouts.sqf
Author: @Davidoss (BIS Forums), Neviothr
Credits: BIS Forums, https://forums.bistudio.com/topic/187197-help-with-custom-loadouts/

Description:
_unit script allows the mission maker to apply different loadouts to units based on which role they're.

Parameter(s):
_t-h-i-s select 0: <object> unit that is issued a new loadout.
_t-h-i-s select 1: <string> side of unit that is issued a new loadout.

Returns:
Nothing

How to use:
Initiate through 'init.sqf'. Add 'case VALUE:' (VALUE = Faction) as needed, in the curly brackets after the 'VALUE' insert the desired loadout. Change all occurrences of 'this' to '_unit'.
*/
/*
NOTE: This function/script is no longer needed, valid or used! After update 1.56 for ArmA 3, the mission creator is able to change the loadout, gear using the 3DEN Editor. Utilize said feature.
*/


fnc_loadout = {

params ["_unit", "_role"];

_role = (typeOf _unit);

//Remove all current gear
removeGoggles _unit;
removeBackpack _unit;
removeHeadgear _unit:
removeVest _unit;
removeUniform _unit;
removeAllWeapons _unit:
removeAllAssignedItems _unit;

	switch (typeOf _unit) do
	{
		//Ammo Bearer
		case "I_Soldier_A_F":
		{
			_unit forceAddUniform "rhs_chdkz_uniform_5";
			_unit addItemToUniform "FirstAidKit";
			for "_i" from 1 to 3 do {_unit addItemToUniform "30Rnd_556x45_Stanag_Tracer_Yellow";};
			for "_i" from 1 to 2 do {_unit addItemToUniform "rhs_VOG25";};
			_unit addVest "V_TacVest_oli";
			for "_i" from 1 to 8 do {_unit addItemToVest "30Rnd_556x45_Stanag_Tracer_Yellow";};
			for "_i" from 1 to 2 do {_unit addItemToVest "16Rnd_9x21_Mag";};
			for "_i" from 1 to 2 do {_unit addItemToVest "HandGrenade";};
			 addItemToVest "SmokeShell";
			_unit addBackpack "B_Carryall_mcamo";
			for "_i" from 1 to 4 do {_unit addItemToBackpack "FirstAidKit";};
			_unit addItemToBackpack "SmokeShellGreen";
			for "_i" from 1 to 2 do {_unit addItemToBackpack "Chemlight_green";};
			for "_i" from 1 to 8 do {_unit addItemToBackpack "30Rnd_556x45_Stanag_Tracer_Yellow";};
			_unit addItemToBackpack "rhs_100Rnd_762x54mmR";
			for "_i" from 1 to 3 do {_unit addItemToBackpack "hlc_20Rnd_762x51_B_fal";};
			_unit addItemToBackpack "rhs_rpg7_PG7VL_mag";
			for "_i" from 1 to 2 do {_unit addItemToBackpack "HandGrenade";};
			for "_i" from 1 to 2 do {_unit addItemToBackpack "MiniGrenade";};
			for "_i" from 1 to 4 do {_unit addItemToBackpack "rhs_VOG25";};
			_unit addHeadgear "H_Bandanna_gry";
			_unit addWeapon "RH_M16a1";
			_unit addWeapon "hgun_P07_F";
			_unit linkItem "ItemMap";
			_unit linkItem "ItemCompass";
			_unit linkItem "ItemWatch";
			_unit linkItem "ItemRadio";
			_unit linkItem "ItemGPS";
		};

		//Auto Rifleman
		case "I_Soldier_AR_F":
		{
			_unit forceAddUniform "rhs_chdkz_uniform_4";
			_unit addItemToUniform "FirstAidKit";
			for "_i" from 1 to 2 do {_unit addItemToUniform "16Rnd_9x21_Mag";};
			_unit addItemToUniform "HandGrenade";
			_unit addItemToUniform "SmokeShell";
			_unit addVest "V_TacVestIR_blk";
			for "_i" from 1 to 2 do {_unit addItemToVest "rhs_100Rnd_762x54mmR";};
			_unit addItemToVest "SmokeShellGreen";
			for "_i" from 1 to 2 do {_unit addItemToVest "Chemlight_green";};
			_unit addHeadgear "H_Bandanna_blu";
			_unit addWeapon "rhs_weap_pkm";
			_unit addWeapon "hgun_P07_F";
			_unit linkItem "ItemMap";
			_unit linkItem "ItemCompass";
			_unit linkItem "ItemWatch";
			_unit linkItem "ItemRadio";
		};

		//Combat Life Saver
		case "I_medic_F":
		{
			_unit forceAddUniform "rhs_chdkz_uniform_3";
			_unit addItemToUniform "FirstAidKit";
			for "_i" from 1 to 3 do {_unit addItemToUniform "rhs_30Rnd_762x39mm";};
			_unit addVest "V_TacVest_camo";
			for "_i" from 1 to 2 do {_unit addItemToVest "rhs_30Rnd_762x39mm";};
			for "_i" from 1 to 2 do {_unit addItemToVest "16Rnd_9x21_Mag";};
			_unit addItemToVest "SmokeShell";
			_unit addItemToVest "SmokeShellGreen";
			_unit addItemToVest "SmokeShellOrange";
			_unit addItemToVest "SmokeShellPurple";
			for "_i" from 1 to 2 do {_unit addItemToVest "Chemlight_green";};
			_unit addBackpack "B_FieldPack_oli";
			for "_i" from 1 to 10 do {_unit addItemToBackpack "FirstAidKit";};
			_unit addItemToBackpack "Medikit";
			_unit addHeadgear "H_Bandanna_cbr";
			_unit addWeapon "rhs_weap_akms";
			_unit addWeapon "hgun_P07_F";
			_unit linkItem "ItemMap";
			_unit linkItem "ItemCompass";
			_unit linkItem "ItemWatch";
			_unit linkItem "ItemRadio";
		};

		//Crewman
		case "I_crew_F":
		{
			_unit forceAddUniform "rhs_chdkz_uniform_2";
			_unit addItemToUniform "FirstAidKit";
			for "_i" from 1 to 3 do {_unit addItemToUniform "rhs_30Rnd_762x39mm";};
			_unit addVest "V_BandollierB_blk";
			for "_i" from 1 to 2 do {_unit addItemToVest "rhs_30Rnd_762x39mm";};
			for "_i" from 1 to 2 do {_unit addItemToVest "16Rnd_9x21_Mag";};
			for "_i" from 1 to 2 do {_unit addItemToVest "HandGrenade";};
			for "_i" from 1 to 2 do {_unit addItemToVest "Chemlight_green";};
			_unit addItemToVest "SmokeShell";
			_unit addItemToVest "SmokeShellGreen";
			_unit addHeadgear "rhs_tsh4";
			_unit addWeapon "rhs_weap_akms";
			_unit addWeapon "hgun_P07_F";
			_unit linkItem "ItemMap";
			_unit linkItem "ItemCompass";
			_unit linkItem "ItemWatch";
			_unit linkItem "ItemRadio";
		};

		//Engineer
		case "I_engineer_F":
		{
			_unit forceAddUniform "rhs_chdkz_uniform_1";
			_unit addItemToUniform "FirstAidKit";
			for "_i" from 1 to 3 do {_unit addItemToUniform "30Rnd_556x45_Stanag_Tracer_Yellow";};
			_unit addVest "V_I_G_resistanceLeader_F";
			for "_i" from 1 to 2 do {_unit addItemToVest "16Rnd_9x21_Mag";};
			for "_i" from 1 to 2 do {_unit addItemToVest "30Rnd_556x45_Stanag_Tracer_Yellow";};
			for "_i" from 1 to 2 do {_unit addItemToVest "HandGrenade";};
			for "_i" from 1 to 2 do {_unit addItemToVest "Chemlight_green";};
			_unit addItemToVest "SmokeShellYellow";
			_unit addItemToVest "SmokeShellGreen";
			_unit addItemToVest "SmokeShellOrange";
			_unit addItemToVest "SmokeShellPurple";
			_unit addBackpack "B_Kitbag_mcamo";
			_unit addItemToBackpack "ToolKit";
			_unit addItemToBackpack "MineDetector";
			_unit addItemToBackpack "SatchelCharge_Remote_Mag";
			for "_i" from 1 to 2 do {_unit addItemToBackpack "DemoCharge_Remote_Mag";};
			_unit addHeadgear "H_Bandanna_khk";
			_unit addWeapon "RH_M16a1";
			_unit addWeapon "hgun_P07_F";
			_unit linkItem "ItemMap";
			_unit linkItem "ItemCompass";
			_unit linkItem "ItemWatch";
			_unit linkItem "ItemRadio";
		};

		//Explosives Specialist
		case "I_Soldier_exp_F":
		{
			_unit forceAddUniform "MNP_CombatUniform_Militia_DC";
			_unit addItemToUniform "FirstAidKit";
			for "_i" from 1 to 3 do {_unit addItemToUniform "rhs_30Rnd_762x39mm";};
			_unit addItemToUniform "Chemlight_green";
			_unit addVest "V_TacVestIR_blk";
			_unit addItemToVest "SmokeShellGreen";
			for "_i" from 1 to 2 do {_unit addItemToVest "16Rnd_9x21_Mag";};
			for "_i" from 1 to 2 do {_unit addItemToVest "rhs_30Rnd_762x39mm";};
			for "_i" from 1 to 3 do {_unit addItemToVest "APERSMine_Range_Mag";};
			for "_i" from 1 to 2 do {_unit addItemToVest "HandGrenade";};
			_unit addItemToVest "SmokeShellYellow";
			_unit addItemToVest "Chemlight_green";
			_unit addBackpack "B_Carryall_cbr";
			_unit addItemToBackpack "ToolKit";
			for "_i" from 1 to 2 do {_unit addItemToBackpack "MineDetector";};
			for "_i" from 1 to 2 do {_unit addItemToBackpack "APERSBoundingMine_Range_Mag";};
			for "_i" from 1 to 2 do {_unit addItemToBackpack "ClaymoreDirectionalMine_Remote_Mag";};
			for "_i" from 1 to 2 do {_unit addItemToBackpack "SLAMDirectionalMine_Wire_Mag";};
			_unit addItemToBackpack "DemoCharge_Remote_Mag";
			_unit addHeadgear "H_Bandanna_khk_hs";
			_unit addWeapon "rhs_weap_akms";
			_unit addWeapon "hgun_P07_F";
			_unit linkItem "ItemMap";
			_unit linkItem "ItemCompass";
			_unit linkItem "ItemWatch";
			_unit linkItem "ItemRadio";
		};

		//Grenadier
		case "I_Soldier_GL_F":
		{
			_unit forceAddUniform "MNP_CombatUniform_Militia_DE";
			for "_i" from 1 to 2 do {_unit addItemToUniform "30Rnd_556x45_Stanag_Tracer_Yellow";};
			_unit addVest "V_HarnessOGL_brn";
			_unit addItemToVest "FirstAidKit";
			for "_i" from 1 to 3 do {_unit addItemToVest "30Rnd_556x45_Stanag_Tracer_Yellow";};
			_unit addItemToVest "1Rnd_SmokePurple_Grenade_shell";
			for "_i" from 1 to 2 do {_unit addItemToVest "16Rnd_9x21_Mag";};
			for "_i" from 1 to 2 do {_unit addItemToVest "MiniGrenade";};
			for "_i" from 1 to 2 do {_unit addItemToVest "HandGrenade";};
			for "_i" from 1 to 5 do {_unit addItemToVest "1Rnd_HE_Grenade_shell";};
			_unit addItemToVest "SmokeShell";
			_unit addItemToVest "SmokeShellGreen";
			for "_i" from 1 to 2 do {_unit addItemToVest "Chemlight_green";};
			for "_i" from 1 to 2 do {_unit addItemToVest "1Rnd_Smoke_Grenade_shell";};
			_unit addBackpack "B_AssaultPack_mcamo";
			_unit addItemToBackpack "1Rnd_SmokeGreen_Grenade_shell";
			for "_i" from 1 to 2 do {_unit addItemToBackpack "1Rnd_SmokeOrange_Grenade_shell";};
			_unit addHeadgear "H_Bandanna_mcamo";
			_unit addWeapon "RH_M16A1gl";
			_unit addWeapon "hgun_P07_F";
			_unit linkItem "ItemMap";
			_unit linkItem "ItemCompass";
			_unit linkItem "ItemWatch";
			_unit linkItem "ItemRadio";
		};
	// Close the switch
	};

// Close the function
};
