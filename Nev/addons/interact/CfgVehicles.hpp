class CfgVehicles {
	class Man;
	class CAManBase: Man {
		class ACE_Actions {
			class ACE_MainActions {
				class GVAR(openBackpack) {
					displayName = "Gear (backpack)";
					condition = "_target isKindOf 'CAManBase' && {alive _target}";
					statement = "_player action ['GEAR', unitBackpack _target]";
					distance = 5;
					icon = "\x\nev\addons\interact\data\backpack_ca.paa";
				};
			};
		};
	};
};
