class GVAR(endMissionModule): Module_F {
    scope = 2;
    displayName = "End Mission";
    category = "NO_CATEGORY"; // Adds modules under "misc." in the editor
    function = QFUNC(endMission);
    functionPriority = 0;
    isGlobal = 1;
    isTriggerActivated = 1;
    isDisposable = 1;
    //is3DEN = 1;

    class Arguments: ArgumentsBaseUnits {
        class Title {
            displayName = "Title";
            description = "Notification Title.";
            typeName = "STRING";
            defaultValue = "";
        };
        class Description {
            displayName = "Description";
            description = "Notification Description.";
            typeName = "STRING";
            defaultValue = "";
        };
    };
    class ModuleDescription: ModuleDescription {};
};
