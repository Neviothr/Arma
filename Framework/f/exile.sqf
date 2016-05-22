/*
File: exile.sqf
Author: @Grim (Exile Mod Forums)
Credits: Exile Mod Forums, http://www.exilemod.com/topic/3578-can-i-get-the-sweetfx-profile/

Description:
Applys a custom post processing effect based on the Exile Mod.

Parameter(s):
Yet to understand this script.

Returns:
Nothing.

How to use:
Initiate through 'init.sqf'.
*/
/*
NOTE: This function/script is no longer needed, valid or used!
*/

ExileClientPostProcessingColorCorrections = ppEffectCreate ["colorCorrections", 1500];
ExileClientPostProcessingColorCorrections ppEffectAdjust [1, 1.1, -0.05, [0.4, 0.2, 0.3, -0.1], [0.79, 0.72, 0.62, 1], [0.5,0.5,0.5,0], [0,0,0,0,0,0,4]];
ExileClientPostProcessingColorCorrections ppEffectCommit 0;
ExileClientPostProcessingColorCorrections ppEffectEnable true;
