// https://github.com/uksf/modpack/blob/master/addons/mission/CfgVehicles.hpp
class GVAR(zoneSpawnModule): Module_F {
    scope = 2;
    displayName = "Zone Spawner";
    category = "NO_CATEGORY"; // Adds modules under "misc." in the editor
    function = QFUNC(zoneInit);
    functionPriority = 0;
    isGlobal = 0;
    isTriggerActivated = 1;
    isDisposable = 0;
    canSetArea = 1;
    canSetAreaHeight = 0;
    canSetAreaShape = 1;

    class AttributeValues {
        size3[] = {500, 500, -1};
        isRectangle = 0;
    };

    class Arguments: ArgumentsBaseUnits {
        class GVAR(maxGroups) {
            displayName = "Max Spawned Groups";
            description = "Defines the maximum number of groups that will be spawned in the area at one time.";
            typeName = "NUMBER";
            defaultValue = "4";
        };
        class GVAR(groupPoolSize) {
            displayName = "Group Pool Size";
            description = "Defines the total number of groups that will spawn in this area.";
            typeName = "NUMBER";
            defaultValue = "8";
        };
        class GVAR(unitArray) {
            displayName = "Unit Array";
            description = "Defines the array of units from which spawned groups will consist of.";
            typeName = "CODE";
            defaultValue = "[]";
        };
        class GVAR(side) {
            displayName = "Group Side";
            description = "Defines spawned group's side.";
            typeName = "COMBO";
            defaultValue = "";
            class Values {
				class GVAR(west)        {name = "WEST"; value = west;}; // Listbox item
				class GVAR(east)        {name = "EAST"; value = east;};
                class GVAR(independent) {name = "INDEPENDENT"; value = independent;};
                class GVAR(civilian)    {name = "CIVILIAN"; value = civilian;};
			};
        };
    };
    class ModuleDescription: ModuleDescription {};
};
