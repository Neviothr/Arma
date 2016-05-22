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
// CSAT (A3)
  case 0:
  {
    _Unit_Pool_S = ["O_crew_F","O_Helipilot_F","O_Soldier_SL_F","O_soldier_AR_F","O_soldier_AR_F","O_soldier_exp_F","O_soldier_GL_F","O_soldier_GL_F","O_soldier_M_F","O_medic_F","O_soldier_AA_F","O_soldier_repair_F","O_Soldier_F","O_Soldier_F","O_soldier_LAT_F","O_soldier_LAT_F","O_soldier_lite_F","O_soldier_TL_F","O_soldier_TL_F"];
    _Unit_Pool_V = ["O_MRAP_02_F","O_MRAP_02_gmg_F","O_MRAP_02_hmg_F"];
    _Unit_Pool_T = ["O_MBT_02_arty_F","O_APC_Tracked_02_cannon_F","O_APC_Wheeled_02_rcws_F","O_MBT_02_cannon_F","O_APC_Tracked_02_AA_F"];
	 _Unit_Pool_A = ["O_Heli_Attack_02_F","O_Heli_Light_02_F","O_Heli_Light_02_armed_F"];
  };
//-------------------------------------------------------------------------------------------------
// NATO (A3)
  case 1:
  {
    _Unit_Pool_S = ["B_crew_F","B_Helipilot_F","B_Soldier_SL_F","B_soldier_AR_F","B_soldier_AR_F","B_soldier_exp_F","B_soldier_GL_F","B_soldier_GL_F","B_soldier_AA_F","B_soldier_M_F","B_medic_F","B_soldier_repair_F","B_Soldier_F","B_Soldier_F","B_soldier_LAT_F","B_soldier_LAT_F","B_soldier_lite_F","B_soldier_TL_F","B_soldier_TL_F"];
    _Unit_Pool_V = ["B_MRAP_01_F","B_MRAP_01_gmg_F","B_MRAP_01_hmg_F"];
    _Unit_Pool_T = ["B_APC_Wheeled_01_cannon_F","B_APC_Tracked_01_AA_F","B_APC_Tracked_01_rcws_F","B_MBT_01_cannon_F","B_MBT_01_arty_F","B_MBT_01_mlrs_F"];
    _Unit_Pool_A = ["B_Heli_Light_01_armed_F","B_Heli_Transport_01_camo_F","B_Heli_Light_01_F"];
  };
//-------------------------------------------------------------------------------------------------
// AAF (A3)
  case 2:
  {
    _Unit_Pool_S = ["I_crew_F","I_helipilot_F","I_officer_F","I_Soldier_AT_F","I_Soldier_AA_F","I_Soldier_M_F","I_Soldier_GL_F","I_Soldier_exp_F","I_engineer_F","I_medic_F","I_Soldier_AR_F","I_Soldier_A_F"];
    _Unit_Pool_V = ["I_Truck_02_covered_F","I_Truck_02_transport_F","I_MRAP_03_hmg_F","I_MRAP_03_gmg_F","I_MRAP_03_F"];
    _Unit_Pool_T = ["I_MBT_03_cannon_F","I_APC_tracked_03_cannon_F"];
    _Unit_Pool_A = ["I_Heli_light_03_F"];
  };
//-------------------------------------------------------------------------------------------------
// Civilians (A3)
  case 3:
  {
    _Unit_Pool_S = ["C_man_1","C_man_1","C_man_1","C_man_polo_1_F","C_man_polo_2_F","C_man_polo_3_F","C_man_polo_4_F","C_man_polo_5_F","C_man_polo_6_F","C_man_1_1_F","C_man_1_2_F","C_man_1_3_F"];
    _Unit_Pool_V = ["C_Van_01_box_F","C_Van_01_transport_F","C_Offroad_01_F","C_Hatchback_01_sport_F","C_Hatchback_01_F"];
    _Unit_Pool_T = ["C_Van_01_box_F","C_Van_01_transport_F","C_Offroad_01_F","C_Hatchback_01_sport_F","C_Hatchback_01_F"];
    _Unit_Pool_A = [];
  };
//-------------------------------------------------------------------------------------------------
// US Army - D, Multicam (RHS)
  case 4:
  {
    _Unit_Pool_S = ["rhs_army_ocp_combatcrewman","rhsusf_army_ocp_helipilot","rhsusf_army_ocp_squadleader","rhsusf_army_ocp_teamleader","rhsusf_army_ocp_rifleman","rhsusf_army_ocp_grenadier","rhsusf_army_ocp_autorifleman","rhsusf_army_ocp_riflemanat"];
    _Unit_Pool_V = [];
    _Unit_Pool_T = [];
    _Unit_Pool_A = [];
  };
//-------------------------------------------------------------------------------------------------
// US Army - W, Urban Multicam (RHS)
  case 5:
  {
    _Unit_Pool_S = ["rhs_army_ucp_combatcrewman","rhsusf_army_ucp_helipilot","rhsusf_army_ucp_squadleader","rhsusf_army_ucp_teamleader","rhsusf_army_ucp_rifleman","rhsusf_army_ucp_grenadier","rhsusf_army_ucp_autorifleman","rhsusf_army_ucp_riflemanat"];
    _Unit_Pool_V = [];
    _Unit_Pool_T = [];
    _Unit_Pool_A = [];
  };
//-------------------------------------------------------------------------------------------------
// USMC - D, Desert MARPAT (RHS)
  case 6:
  {
    _Unit_Pool_S = ["rhsusf_usmc_marpat_d_combatcrewman","rhsusf_usmc_marpat_d_helipilot","rhsusf_usmc_marpat_d_squadleader","rhsusf_usmc_marpat_d_teamleader","rhsusf_usmc_marpat_d_autorifleman","rhsusf_usmc_marpat_d_rifleman","rhsusf_usmc_marpat_d_rifleman_m4","rhsusf_usmc_marpat_d_riflemanat"];
    _Unit_Pool_V = [];
    _Unit_Pool_T = [];
    _Unit_Pool_A = [];
  };
//-------------------------------------------------------------------------------------------------
// USMC - WD, Woodland MARPAT (RHS)
  case 7:
  {
    _Unit_Pool_S = ["rhsusf_usmc_marpat_wd_combatcrewman","rhsusf_usmc_marpat_wd_helipilot","rhsusf_usmc_marpat_wd_squadleader","rhsusf_usmc_marpat_wd_teamleader","rhsusf_usmc_marpat_wd_autorifleman","rhsusf_usmc_marpat_wd_rifleman","rhsusf_usmc_marpat_wd_rifleman_m4","rhsusf_usmc_marpat_wd_riflemanat"];
    _Unit_Pool_V = [];
    _Unit_Pool_T = [];
    _Unit_Pool_A = [];
  };
//-------------------------------------------------------------------------------------------------
// VDV - EMR (RHS)
  case 8:
  {
    _Unit_Pool_S = ["rhs_vdv_armoredcrew","rhs_pilot","rhs_vdv_sergeant","rhs_vdv_efreitor","rhs_vdv_arifleman","rhs_vdv_machinegunner_assistant","rhs_vdv_LAT","rhs_vdv_grenadier"];
    _Unit_Pool_V = [];
    _Unit_Pool_T = [];
    _Unit_Pool_A = [];
  };
//-------------------------------------------------------------------------------------------------
// VDV - EMR Desert (RHS)
  case 9:
  {
    _Unit_Pool_S = ["rhs_vdv_des_armoredcrew","rhs_pilot","rhs_vdv_des_sergeant","rhs_vdv_des_efreitor","rhs_vdv_des_arifleman","rhs_vdv_des_machinegunner_assistant","rhs_vdv_des_LAT","rhs_vdv_des_grenadier"];
    _Unit_Pool_V = [];
    _Unit_Pool_T = [];
    _Unit_Pool_A = [];
  };
//-------------------------------------------------------------------------------------------------
// VDV - Flora (RHS)
  case 10:
  {
    _Unit_Pool_S = ["rhs_vdv_flora_armoredcrew","rhs_pilot","rhs_vdv_flora_sergeant","rhs_vdv_flora_efreitor","rhs_vdv_flora_arifleman","rhs_vdv_flora_machinegunner_assistant","rhs_vdv_flora_LAT","rhs_vdv_flora_grenadier"];
    _Unit_Pool_V = [];
    _Unit_Pool_T = [];
    _Unit_Pool_A = [];
  };
//-------------------------------------------------------------------------------------------------
// VDV - Flora (RHS)
  case 11:
  {
    _Unit_Pool_S = ["rhs_vdv_mflora_armoredcrew","rhs_pilot","rhs_vdv_mflora_sergeant","rhs_vdv_mflora_efreitor","rhs_vdv_mflora_arifleman","rhs_vdv_mflora_machinegunner_assistant","rhs_vdv_mflora_LAT","rhs_vdv_mflora_grenadier"];
    _Unit_Pool_V = [];
    _Unit_Pool_T = [];
    _Unit_Pool_A = [];
  };
//-------------------------------------------------------------------------------------------------
// Insurgents (RHS)
  case 12:
  {
    _Unit_Pool_S = ["rhs_g_Crew_F","rhs_g_Soldier_lite_F","rhs_g_Soldier_SL_F","rhs_g_Soldier_GL_F","rhs_g_Soldier_TL_F","rhs_g_Soldier_AR_F","rhs_g_Soldier_LAT_F","rhs_g_Soldier_AAT_F","rhs_g_medic_F","rhs_g_Soldier_F"];
    _Unit_Pool_V = [];
    _Unit_Pool_T = [];
    _Unit_Pool_A = [];
  };
//-------------------------------------------------------------------------------------------------
// German KSK - Desert (CUP Units)
  case 13:
  {
    _Unit_Pool_S = ["CUP_B_GER_Soldier_Sniper","CUP_B_GER_Soldier_Scout","CUP_B_GER_Soldier_TL","CUP_B_GER_Soldier_AAA","CUP_B_GER_Soldier_AA","CUP_B_GER_Soldier_Ammo","CUP_B_GER_Soldier_AAT","CUP_B_GER_Soldier_AT","CUP_B_GER_Soldier_Engineer","CUP_B_GER_Soldier_MG","CUP_B_GER_Medic","CUP_B_GER_Soldier"];
    _Unit_Pool_V = [];
    _Unit_Pool_T = [];
    _Unit_Pool_A = [];
  };
//-------------------------------------------------------------------------------------------------
// German KSK - Woodland (CUP Units)
  case 14:
  {
    _Unit_Pool_S = ["CUP_B_GER_Fleck_Soldier_Sniper","CUP_B_GER_Fleck_Soldier_Scout","CUP_B_GER_Fleck_Soldier_TL","CUP_B_GER_Fleck_Soldier_AAA","CUP_B_GER_Fleck_Soldier_AA","CUP_B_GER_Fleck_Soldier_Ammo","CUP_B_GER_Fleck_Soldier_AAT","CUP_B_GER_Fleck_Soldier_AT","CUP_B_GER_Fleck_Soldier_Engineer","CUP_B_GER_Fleck_Soldier_MG","CUP_B_GER_Fleck_Medic","CUP_B_GER_Fleck_Soldier"];
    _Unit_Pool_V = [];
    _Unit_Pool_T = [];
    _Unit_Pool_A = [];
  };
//-------------------------------------------------------------------------------------------------
// SLA (CUP Units)
  case 15:
  {
    _Unit_Pool_S = ["CUP_O_sla_Crew","CUP_O_sla_Pilot","CUP_O_sla_Soldier_SL","CUP_O_sla_Soldier_AA","CUP_O_sla_Soldier_CUP_O_sla_Soldier_AAT","CUP_O_sla_Soldier_AMG","CUP_O_sla_Soldier_HAT","CUP_O_sla_Soldier_AR","CUP_O_sla_Commander","CUP_O_sla_Engineer","CUP_O_sla_Soldier_GL","CUP_O_sla_Soldier_MG","CUP_O_sla_Medic","CUP_O_sla_Officer","CUP_O_sla_Soldier","CUP_O_SLA_Soldier_Backpack","CUP_O_sla_Soldier_LAT","CUP_O_sla_Soldier_AT","CUP_O_sla_Soldier_AKS_Night","CUP_O_sla_Soldier_AKS_74_GOSHAWK"];
    _Unit_Pool_V = [];
    _Unit_Pool_T = [];
    _Unit_Pool_A = [];
  };
//-------------------------------------------------------------------------------------------------
// SLA Spec Ops (CUP Units)
  case 16:
  {
    _Unit_Pool_S = ["CUP_O_sla_Crew","CUP_O_sla_Pilot","CUP_O_sla_SpecOps_TL","CUP_O_sla_SpecOps_MG","CUP_O_sla_SpecOps_LAT","CUP_O_sla_SpecOps_Demo","CUP_O_sla_SpecOps"];
    _Unit_Pool_V = [];
    _Unit_Pool_T = [];
    _Unit_Pool_A = [];
  };
//-------------------------------------------------------------------------------------------------
// SLA Partisans (CUP Units)
  case 17:
  {
    _Unit_Pool_S = ["CUP_O_sla_Crew","CUP_O_sla_Pilot","CUP_O_Partisans_soldier_SL","CUP_O_Partisans_Engineer","CUP_O_Partisans_soldier_CUP_O_Partisans_Soldier_AT","CUP_O_Partisans_soldier_TTsKO","CUP_O_Partisans_Medic","CUP_O_Partisans_soldier_MG"];
    _Unit_Pool_V = [];
    _Unit_Pool_T = [];
    _Unit_Pool_A = [];
  };
//-------------------------------------------------------------------------------------------------
// Takistani Army (CUP Units)
  case 17:
  {
    _Unit_Pool_S = ["CUP_O_TK_Crew","CUP_O_TK_Pilot","CUP_O_TK_Soldier_SL","CUP_O_TK_Soldier_AA","CUP_O_TK_Soldier_AAT","CUP_O_TK_Soldier_AMG","CUP_O_TK_Soldier_HAT","CUP_O_TK_Soldier_AR","CUP_O_TK_Commander","CUP_O_TK_Engineer","CUP_O_TK_Soldier_GL","CUP_O_TK_Soldier_CUP_O_TK_Soldier_MG","CUP_O_TK_Medic","CUP_O_TK_Officer","CUP_O_TK_Soldier","CUP_O_TK_Soldier_Backpack","CUP_O_TK_Soldier_LAT","CUP_O_TK_Soldier_AT"];
    _Unit_Pool_V = [];
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
