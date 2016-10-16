// Night Vision Script Made by 7R1P0D with the use of Killzone Kid's get zoom function to scale the effect with zoom levels


// This script does seem to slow down if other scripts are being used
// Sometimes delaying the effects for a noticeable amount of time depending on how big the other scripts you added to your mission are



if (isDedicated) exitWith {};
if (player != player) then {waitUntil {player == player};};

// Figures out how zoomed in you are
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

    // Adds Effects When NV Enabled
    ((vehicle player) == player) && ((currentVisionMode player) == 1)};

    // Effects below. If you wanna know what this stuff means so you can change the effects, go to https://community.bistudio.com/wiki/Post_process_effects

    // Dynamic Blur
    ppBlur = ppEffectCreate ["dynamicBlur", 500];
    ppBlur ppEffectEnable true;
    500 ppEffectForceInNVG true;


    // Edge Blur
    ppRim = ppEffectCreate ["RadialBlur", 501];
    ppRim ppEffectEnable true;
    ppRim ppEffectAdjust [0.00, 0.00, 0.22, 0.3];
    ppRim ppEffectCommit 0;
    501 ppEffectForceInNVG true;


    // Color and Contrast
    ppColor = ppEffectCreate ["ColorCorrections", 1500];  ppColor ppEffectEnable true;
    ppColor
    ppEffectForceInNVG true;


    // Film Grain
    ppFilm = ppEffectCreate ["FilmGrain", 2501];
    ppFilm ppEffectEnable true;
    2501 ppEffectForceInNVG true;

    waitUntil {
    // Scaling effects during Zooming

    _zoomintensity = (call kk_fnc_getZoom * 10) /30;
    //Intense coloring, if you want super bright green, just get rid of the two slash marks on the line under this one and add them infront of the subdued coloring script line
    //ppColor ppEffectAdjust [1.05, 4, -0.4, [0, 0, 0, 0], [1, 1, 1, 1], [0.299, 0.587, 0.114, 0]];

    //Subdued coloring
    ppColor ppEffectAdjust [1.05, 2, -0.1, [0, 0, 0, 0], [1, 1, 1, 1], [0.299, 0.587, 0.114, 0]];
    ppColor ppEffectCommit 0;


    ppBlur ppEffectAdjust [0.25 + (_zoomIntensity * 0.25)];
    ppBlur ppEffectCommit 0;


    ppFilm ppEffectAdjust [0.5, 5, 8, 1, 0, true];
    ppFilm ppEffectCommit 0;


    ((vehicle player) != player) || ((currentVisionMode player) != 1)
    };

    //Removes Effects When NV Disabled
    ppEffectDestroy ppBlur;
    ppEffectDestroy ppRim;
    ppEffectDestroy ppColor;
    ppEffectDestroy ppFilm;
    };
