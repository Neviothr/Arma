class CfgPatches
{
	class ace_anims_fastswitch
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.01;
		requiredAddons[]=
		{
			"CA_Anims",
			"CA_Anims_E",
			"CA_Anims_Sdr",
			"CA_Anims_E_Sdr"
		};
		version=0;
	};
};
class CfgMovesBasic
{
	class Default;
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class TransAnimBase;
		class amovpercmstpslowwlnrdnon;
		class AmovPercMstpSlowWpstDnon;
		class AmovPercMstpSlowWrflDnon;
		class AmovPercMstpSnonWnonDnon;
		class amovpercmstpsraswlnrdnon;
		class AmovPercMstpSrasWpstDnon;
		class AmovPercMstpSrasWrflDnon;
		class AovrPercMstpSlowWlnrDf: amovpercmstpslowwlnrdnon
		{
			speed=0.69999999;
		};
		class AovrPercMstpSlowWpstDf: AmovPercMstpSlowWpstDnon
		{
			speed=0.72413701;
		};
		class AovrPercMstpSlowWrflDf: AmovPercMstpSlowWrflDnon
		{
			speed=0.61764598;
		};
		class AovrPercMstpSnonWnonDf: AmovPercMstpSnonWnonDnon
		{
			speed=0.80769002;
		};
		class AovrPercMstpSrasWlnrDf: amovpercmstpsraswlnrdnon
		{
			speed=0.69999999;
		};
		class AovrPercMstpSrasWpstDf: AmovPercMstpSrasWpstDnon
		{
			speed=0.72413701;
		};
		class AovrPercMstpSrasWrflDf: AmovPercMstpSrasWrflDnon
		{
			speed=0.61764598;
		};
		class AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon: TransAnimBase
		{
			speed=1.4;
		};
		class AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon_end: AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon
		{
			speed=2.7;
		};
		class AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWpstDnon: TransAnimBase
		{
			speed=0.97500002;
		};
		class AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWpstDnon_end: AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWpstDnon
		{
			speed=2;
		};
		class AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon: TransAnimBase
		{
			speed=0.71499997;
		};
		class AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon_end: AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon
		{
			speed=1.4299999;
		};
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon: TransAnimBase
		{
			speed=2.7;
		};
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon_end: AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon
		{
			speed=1.17;
		};
		class AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWrflDnon: TransAnimBase
		{
			speed=1.955;
		};
		class AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWrflDnon_end: AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWrflDnon
		{
			speed=0.82800001;
		};
		class AmovPknlMstpSrasWlnrDnon_AmovPknlMstpSrasWrflDnon: TransAnimBase
		{
			speed=0.60000002;
		};
		class AmovPknlMstpSrasWlnrDnon_AmovPpneMstpSnonWnonDnon: TransAnimBase
		{
			speed=1;
		};
		class AmovPpneMstpSnonWnonDnon_AmovPpneMstpSrasWrflDnon: TransAnimBase
		{
			speed=0.60000002;
		};
		class AwopPercMstpSgthWrflDnon_Start1: Default
		{
		};
		class AwopPercMstpSgthWrflDnon_Throw1: AwopPercMstpSgthWrflDnon_Start1
		{
		};
		class AwopPercMstpSgthWrflDnon_End1: AwopPercMstpSgthWrflDnon_Start1
		{
		};
		class AwopPercMstpSgthWrflDnon_Start2: AwopPercMstpSgthWrflDnon_Start1
		{
		};
		class AwopPercMstpSgthWrflDnon_Throw2: AwopPercMstpSgthWrflDnon_Throw1
		{
		};
		class AwopPercMstpSgthWrflDnon_End2: AwopPercMstpSgthWrflDnon_End1
		{
			speed=1;
		};
		class AwopPknlMstpSgthWrflDnon_Start;
		class AwopPknlMstpSgthWrflDnon_End: AwopPknlMstpSgthWrflDnon_Start
		{
			speed=1.2;
		};
		class AwopPpneMstpSgthWrflDnon_Start;
		class AwopPpneMstpSgthWrflDnon_End: AwopPpneMstpSgthWrflDnon_Start
		{
			speed=1.7;
		};
	};
};
