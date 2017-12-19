class CfgVehicles {
	class Man;
	class CAManBase: Man {
		class ACE_Actions {
			class ACE_MainActions {
				class GVAR(backpackAction) {
					displayName = "Backpack";
					condition = "_target isKindOf 'CAManBase' && {alive _target}";
					statement = "_player action ['GEAR', unitBackpack _target]";
					distance = 5;
					icon = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Backpack_ca.paa";
				};

				class GVAR(gearAction) {
					displayName = "Gear";
					condition = "_target isKindOf 'CAManBase' && {!alive _target}";
					statement = "_player action ['Gear', _target]";
					distance = 5;
					icon = "\x\nev\addons\interact\data\gear_ca.paa";
				};
			};
		};
	};
};
