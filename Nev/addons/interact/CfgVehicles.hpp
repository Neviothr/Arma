class CfgVehicles {
	class Man;
	class CAManBase: Man {
		class ACE_Actions {
			class ACE_MainActions {
				class GVAR(backpackAction) {
					displayName = "Backpack";
					condition = "_target isKindOf 'CAManBase' && {alive _target} && !(isNull unitBackpack _target)";
					statement = "_player action ['GEAR', unitBackpack _target]";
					distance = 5;
					icon = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Backpack_ca.paa";
				};
			};
		};
	};
};
