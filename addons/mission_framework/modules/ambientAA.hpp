class GVAR(ambientAA): Module_F {
    scope = 2;
    displayName = "Ambient Anti-Air";
    category = "NO_CATEGORY"; // Adds modules under "misc." in the editor
    function = QFUNC(ambientAA);
    functionPriority = 0;
    isGlobal = 1;
    isTriggerActivated = 1;
    isDisposable = 1;

    class ModuleDescription: ModuleDescription {};
};
