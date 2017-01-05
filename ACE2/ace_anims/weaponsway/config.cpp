class CfgPatches {
	class ace_anims_weaponsway {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.01;
		requiredAddons[] = {"CA_Anims", "CA_Anims_E", "CA_Anims_Sdr", "CA_Anims_E_Sdr"};
		version = 0;
	};
};

class CfgMovesBasic {
	class Default {
		aimPrecision = 1.25;
	};
	class StandBase;
};

class CfgMovesMaleSdr: CfgMovesBasic {
	class States {
		class AmovPercMstpSlowWrflDnon;
		class AmovPercMstpSrasWrflDnon: AmovPercMstpSlowWrflDnon {
			aimPrecision = 1.25;
		};
		class WeaponMagazineReloadStand;
		class PistolMagazineReloadStand;
		class AmovPercMstpSrasWpstDnon: StandBase {};
		class AmovPknlMstpSrasWpstDnon: AmovPercMstpSrasWpstDnon {};
		class AmovPknlMstpSlowWrflDnon: AmovPercMstpSlowWrflDnon {
			aimPrecision = 0.75;
		};
		class AmovPpneMstpSrasWrflDnon: AmovPercMstpSrasWrflDnon {
			aimPrecision = 0.375;
		};
		class AmovPknlMstpSrasWlnrDnon: Default {
			aimPrecision = 0.75;
		};
		class AmovPercMwlkSrasWrflDf: AmovPercMstpSrasWrflDnon {
			aimPrecision = 0.1875;
		};
		class AmovPercMrunSrasWrflDf: AmovPercMstpSrasWrflDnon {
			aimPrecision = 1.875;
		};
		class WeaponMagazineReloadProne: WeaponMagazineReloadStand {
			aimPrecision = 0.75;
		};
		class PistolMagazineReloadProne: PistolMagazineReloadStand {
			aimPrecision = 0.75;
		};
		class AmovPknlMstpSrasWrflDnon: AmovPknlMstpSlowWrflDnon {};
		class AmovPknlMwlkSrasWrflDf: AmovPknlMstpSrasWrflDnon {
			aimPrecision = 0.1875;
		};
		class AmovPercMwlkSrasWpstDf: AmovPercMstpSrasWpstDnon {
			aimPrecision = 0.1875;
		};
		class AmovPercMwlkSlowWpstDf: AmovPercMwlkSrasWpstDf {
			aimPrecision = 0.1875;
		};
		class AmovPknlMwlkSrasWpstDf: AmovPknlMstpSrasWpstDnon {
			aimPrecision = 0.1875;
		};
		class AmovPknlMwlkSrasWpstDfl: AmovPknlMwlkSrasWpstDf {
			aimPrecision = 0.1875;
		};
		class AmovPercMstpSnonWnonDnon;
		class AmovPpneMstpSnonWnonDnon;
		class AwopPercMstpSoptWbinDnon_non: AmovPercMstpSnonWnonDnon {
			aimPrecision = 1;
		};
		class AwopPpneMstpSoptWbinDnon_non: AmovPpneMstpSnonWnonDnon {
			aimPrecision = 0.375;
		};
	};
};