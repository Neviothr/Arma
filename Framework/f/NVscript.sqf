/*
File: NVscript.sqf
Author: @BroDouYouEvenBro (BIS Forums), @Tuboswaggg (BIS Forums), @Tripod27 (BIS Forums), @Killzone_Kid (BIS Forums/KK_Blog), @PabstMirror (/r/ArmaDev) and Neviothr.
Credits: BIS Forums, https://forums.bistudio.com/topic/168966-tweaked-night-vision-script/

Description:
Applys a custom post processing effects while night vision goggles are used, provides a more realistic view though them.

Parameter(s):
None.

Returns:
Nothing.

How to use:
Initiate through 'init.sqf'. Edit post processing effects to personal liking.
*/
/*
NOTE: This function/script is no longer needed, valid or used! @Turboswaggg on Reddit has created a better ppEffect for more realistic NVGs (https://www.reddit.com/r/arma/comments/4a7q0y/i_made_some_changes_to_the_magically_op_arma_3/), the said script was later turned into a mod and became part of 'cxAddons'. This script is therefore obsolete.
*/

if (isDedicated) exitWith {};
if (player != player) then {waitUntil {player == player};};

// Check how zoomed-in the player is.
KK_fnc_getZoom = {
    (
        [0.5,0.5]
        distance
        worldToScreen
        positionCameraToWorld
        [0,1.05,1]
    ) * (
        getResolution
        select
        5
    )
};

    while {true} do {
    waitUntil {

    // Adds processing effects while night vistion goggles are used.
    ((vehicle player) == player) && ((currentVisionMode player) == 1)};

    // Processing effects are listed below, edit to own liking.

    // Dynamic Blur
    ppBlur = ppEffectCreate ["dynamicBlur", 500];
    ppBlur ppEffectEnable true;
    ppBlur ppEffectAdjust [0.17];
    500 ppEffectForceInNVG true;

    // Film Grain
    ppFilm = ppEffectCreate ["FilmGrain", 2501];
    ppFilm ppEffectEnable true;
    PP_film ppEffectAdjust [0.7,3,8,0.4,0.4,false];
    2501 ppEffectForceInNVG true;

    // Remove post processing effects when nvgs are not used.
    ((vehicle player) != player) || ((currentVisionMode player) != 1)
    };
    ppEffectDestroy ppBlur;
    ppEffectDestroy ppFilm;
    };
