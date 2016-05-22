/*
File: skill.sqf
Author: cx64
Credits: BIS Wiki

Description:
Sets 'setSkill' parameter (sub-skills) for each unit in a scenario, doesn't effect player/playable (until used) units.

Parameter(s):
None.

Returns:
Nothing.

How to use:
Initiate through 'init.sqf'. Change 'setSkill' values as needed for personal preference.
*/
/*
NOTE: This function/script is no longer needed, valid or used! ASR_AI is now part of the base addons for any mission. Although, this script is still useful for testing purposes and might prove itself useful again in the future after some AI enchantments by BIS.
*/

{
	_x setSkill ["aimingAccuracy", 0.10]; //leading, drop, spread, recoil, think > shoot (higher = more accureate).
	_x setSkill ["aimingShake", 0.15]; //gun stability (high = less sway).
	_x setSkill ["aimingSpeed", 0.30]; //rotation stability (higher = faster, less error).
	_x setSkill ["commanding", 1]; //target sharing (higher = faster).
	_x setskill ["courage",1]; //morale (higher = more morale).
	_x setSkill ["general", 1]; //affects decision making (null).
	_x setSkill ["reloadSpeed", 1]; //time to reload or switch gun (higher = less delay).
	_x setSkill ["spotDistance", 1]; //visual & audible, info accuracy (higher = more likely to spot, better info).
	_x setSkill ["spotTime", 1]; //react to dead, damage or enemy (higher = quicker reaction).
	_x enableAttack true;
	_x allowFleeing 1;
} forEach allUnits;
