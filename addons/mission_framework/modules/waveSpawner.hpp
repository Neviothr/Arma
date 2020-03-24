class GVAR(waveSpawnModule): Module_F {
    scope = 2;
    displayName = "Wave Spawner"; // Name displayed in the menu
    category = "NO_CATEGORY";
    function = QFUNC(waveInit);
    functionPriority = 0;
    isGlobal = 0;
    isTriggerActivated = 1;
    isDisposable = 0;

    class EventHandlers {
        init = "if (isServer && !is3DEN) then {[{_this call tmf_AI_fnc_waveInit;}, [_this select 0 ,[], false]] call CBA_fnc_execNextFrame;}; _this call bis_fnc_moduleInit;";
    };

    class Arguments: ArgumentsBaseUnits {
        class Delay {
            displayName = "Execution delay";
            description = "The time in seconds to wait before spawning the first wave";
            typeName = "NUMBER";
            defaultValue = "0";
        };
        class Waves {
            displayName = "Number of waves";
            description = "";
            typeName = "NUMBER";
            defaultValue = "1";
        };
        class Time {
            displayName = "Time between waves";
            description = "In seconds.";
            typeName = "NUMBER";
            defaultValue = "10";
        };
        class WhenDead {
            displayName = "Previous wave must be dead";
            description = "Well should they?";
            typeName = "bool";
            defaultValue = "false";
        };
    };
    class ModuleDescription: ModuleDescription {};
};
