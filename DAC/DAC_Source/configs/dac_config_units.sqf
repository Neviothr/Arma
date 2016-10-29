//////////////////////////////
//    Dynamic-AI-Creator    //
//    Version 2.1 - 2009    //
//--------------------------//
//    DAC_Config_Units      //
//--------------------------//
//    Script by Silola      //
//    silola@freenet.de     //
//////////////////////////////

private ["_TypNumber","_TempArray","_Unit_Pool_S","_Unit_Pool_V","_Unit_Pool_T","_Unit_Pool_A"];
_TypNumber = _this select 0;_TempArray = [];

switch (_TypNumber) do
{
//-------------------------------------------------------------------------------------------------
// CSAT (OPFOR, A3)
  case 0:
  {
    _Unit_Pool_S = ["O_crew_F","O_Helipilot_F","O_Soldier_SL_F","O_Soldier_AR_F","O_Soldier_F","O_Soldier_LAT_F"];
    _Unit_Pool_V = ["O_MRAP_02_F","O_MRAP_02_gmg_F","O_MRAP_02_hmg_F","O_LSV_02_armed_F","O_LSV_02_unarmed_F"];
    _Unit_Pool_T = ["O_APC_Tracked_02_cannon_F","O_APC_Wheeled_02_rcws_F","O_MBT_02_cannon_F","O_APC_Tracked_02_AA_F"];
	  _Unit_Pool_A = ["O_Heli_Transport_04_F","O_Heli_Attack_02_F","O_Heli_Light_02_F","O_Plane_CAS_02_F"];
  };
//-------------------------------------------------------------------------------------------------
// CSAT Pacific (OPFOR, A3)
  case 1:
  {
    _Unit_Pool_S = ["O_T_Crew_F","O_T_Pilot_F","O_T_Soldier_SL_F","O_T_Soldier_AR_F","O_T_Soldier_F","O_T_Soldier_LAT_F"];
    _Unit_Pool_V = ["O_T_MRAP_02_ghex_F","O_T_MRAP_02_gmg_ghex_F","O_T_MRAP_02_hmg_ghex_F","O_T_LSV_02_armed_F","O_T_LSV_unarmed_F"];
    _Unit_Pool_T = ["O_T_APC_Tracked_02_AA_ghex_F","O_T_APC_Tracked_02_cannon_ghex_F","O_T_APC_Wheeled_02_rcws_ghex_F","O_T_MBT_02_cannon_ghex_F"];
    _Unit_Pool_A = ["O_T_VTOL_02_infantry_F"];
  };
//-------------------------------------------------------------------------------------------------
// FIA (OPFOR, A3)
  case 2:
  {
    _Unit_Pool_S = ["O_G_Soldier_lite_F","O_G_Soldier_unarmed_F","O_G_Soldier_SL_F","O_G_Soldier_AR_F","O_G_Soldier_F","O_G_Soldier_LAT_F"];
    _Unit_Pool_V = ["O_G_Offroad_01_armed_F"];
    _Unit_Pool_T = [];
    _Unit_Pool_A = [];
  };
//-------------------------------------------------------------------------------------------------
// CTRG Pacific (BLUFOR, A3)
  case 3:
  {
    _Unit_Pool_S = ["B_CTRG_Soldier_Medic_tna_F","B_CTRG_Soldier_JTAC_tna_F","B_CTRG_Soldier_TL_tna_F","B_CTRG_Soldier_AR_tna_F","B_CTRG_Soldier_tna_F","B_CTRG_Soldier_LAT_tna_F"];
    _Unit_Pool_V = ["B_CTRG_LSV_01_light_F"];
    _Unit_Pool_T = [];
    _Unit_Pool_A = ["B_CTRG_Heli_Transport_01_sand_F","B_CTRG_Heli_Transport_01_tropic_F"];
  };
//-------------------------------------------------------------------------------------------------
// FIA (BLUFOR, A3)
  case 4:
  {
    _Unit_Pool_S = ["B_G_officer_F","B_G_Soldier_lite_F","B_G_Soldier_SL_F","B_G_Soldier_AR_F","B_G_Soldier_F","B_G_Soldier_LAT_F"];
    _Unit_Pool_V = ["B_G_Offroad_01_armed_F"];
    _Unit_Pool_T = [];
    _Unit_Pool_A = [];
  };
//-------------------------------------------------------------------------------------------------
// Gendarmerie (BLUFOR, A3)
  case 5:
  {
    _Unit_Pool_S = ["B_GEN_Soldier_F","B_GEN_Soldier_F","B_GEN_Commander_F","B_GEN_Soldier_F"];
    _Unit_Pool_V = ["B_GEN_Offroad_01_gen_F"];
    _Unit_Pool_T = [];
    _Unit_Pool_A = [];
  };
//-------------------------------------------------------------------------------------------------
  Default
  {
    if(DAC_Basic_Value != 5) then
    {
      DAC_Basic_Value = 5;publicvariable "DAC_Basic_Value",
      hintc "Error: DAC_Config_Units > No valid config number";
    };
    if(true) exitwith {};
  };
};

if(count _this == 2) then
{
  _TempArray = _TempArray + [_Unit_Pool_S,_Unit_Pool_V,_Unit_Pool_T,_Unit_Pool_A];
}
else
{
  _TempArray = _Unit_Pool_V + _Unit_Pool_T + _Unit_Pool_A;
};
_TempArray
