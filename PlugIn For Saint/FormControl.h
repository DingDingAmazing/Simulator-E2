#ifndef _FORMCONTROL_ 
#define _FORMCONTROL_
#include "Public Parameter.h"

class FormControl:public PublicParama
{
public:
	BEGIN_DELEGATE_MAP( FormControl )
		//Chime Form
		EVENT_DELEGATE_ENTRY( Box_ChmVolSt_SelectedIndexChanged,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_ChmAct_CheckedChanged,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Btn_Send_Click,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Btn_Auto_Click,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Btn_Run_Click,	System::Object^, System::EventArgs^)
		//Main Form
		EVENT_DELEGATE_ENTRY( Box_Devices_SelectedIndexChanged,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_SysBkUpPwrMdEn_CheckedChanged, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Bar_SysPwrMd_Scroll, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Btn_VehSetInit_Click, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Bar_DDAjrSwAtv_Scroll, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Bar_PDAjrSwAtv_Scroll, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Bar_RLDoorAjarSwAct_Scroll, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Bar_RRDoorAjarSwAct_Scroll, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Bar_VehMovState_Scroll, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Bar_VehSpdAvgDrvn_Change, System::Object^, System::EventArgs^)

		//Menu Form
		EVENT_DELEGATE_ENTRY( Btn_Diagnostic_MouseEnter, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Btn_Main_Click,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Btn_Setting_Click, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Btn_VehicleInfo_Click, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Btn_Chime_Click, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Btn_Node_Click, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Btn_ParkAssistant_Click, System::Object^, System::EventArgs^)	
		EVENT_DELEGATE_ENTRY( Btn_DTC_Click, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Btn_DID_Click, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Btn_Exit_Click,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Btn_KeyBoard_Click,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Btn_SWC1_Click, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Btn_HVAC_Click,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Btn_MCheck_Click,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Btn_APA_Click, System::Object^, System::EventArgs^)
		//Park Assistant
		EVENT_DELEGATE_ENTRY( Box_PrkAstRrSysStat_SelectedIndexChanged,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_PrkAsstRrExtdDist_ValueChanged, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_PARrRgn1ObjStat_SelectedIndexChanged, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_PARrRgn2ObjStat_SelectedIndexChanged, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_PARrRgn3ObjStat_SelectedIndexChanged, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_PARrRgn4ObjStat_SelectedIndexChanged, System::Object^, System::EventArgs^)
		//Setting
		EVENT_DELEGATE_ENTRY( Box_DispMeasSysExt_SelectedIndexChanged,		System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_RmVehStrRq_CheckedChanged,		System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_RemStrtSt_CheckedChanged,		System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_TrStLgMdAtv_CheckedChanged,		System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_StrgWhlUnit1SwStat_SelectedIndexChanged,		System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_StrgWhlUnit2SwStat_SelectedIndexChanged,		System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Btn_VinClean_Click,		System::Object^, System::EventArgs^)
		//Vehicle Information
		EVENT_DELEGATE_ENTRY( Box_SIRDpl_CheckedChanged,		System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_SftyMuteRd_CheckedChanged,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_OtsdAmbtLtLvlStatV_SelectedIndexChanged,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_OtsdAmbtLtLvlStat_SelectedIndexChanged,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_IntDimDspLvlPlt_ValueChanged,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_IntDimLvl_ValueChanged,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_OtsAirTmpCrValV_CheckedChanged,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_OtsAirTmpV_CheckedChanged,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_OtsAirTmpCrValMsk_SelectedIndexChanged,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_OtsAirTmpCrVal_ValueChanged,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_OtsAirTmp_ValueChanged,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_FlLvlPct_ValueChanged,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_FlLvlPctV_CheckedChanged,	System::Object^, System::EventArgs^)
		//Air COndtion
		EVENT_DELEGATE_ENTRY( Btn_Initialization_CheckedChanged, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_Front_BlowerMode_SelectedIndexChanged, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_Front_FanSpeeds_ValueChanged, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_Front_LeftSetTemp_ValueChanged, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_Front_RightSetTemp_ValueChanged, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_Rear_BlowerMode_SelectedIndexChanged, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_Rear_FanSpeeds_ValueChanged, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_Zone_SelectedIndexChanged, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_AirQualitySensor_CheckedChanged, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_AutoDefog_CheckedChanged, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_AirCondition_SelectedIndexChanged, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_AirInlet_SelectedIndexChanged, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_Front_LeftThermalSeat_SelectedIndexChanged, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_Front_RightThermalSeat_SelectedIndexChanged, System::Object^, System::EventArgs^)	
		//DTC
		EVENT_DELEGATE_ENTRY( Btn_ReadDTC_Click, System::Object^, System::EventArgs^)	
		EVENT_DELEGATE_ENTRY( Btn_ClearDTC_Click, System::Object^, System::EventArgs^)	
		//Memory Check
		EVENT_DELEGATE_ENTRY( Btn_ReadMC_Click,System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Btn_Get_Click,System::Object^, System::EventArgs^)
	END_DELEGATE_MAP()

	CWinFormsControl<Form_Control::ChimeForm>			Ctrl_ChimeForm;
	CWinFormsControl<Form_Control::MainForm>			Ctrl_MainForm;
	CWinFormsControl<Form_Control::MenuForm>			Ctrl_MenuForm;
	CWinFormsControl<Form_Control::ParkAssistantForm>	Ctrl_ParkAssForm;
	CWinFormsControl<Form_Control::SettingForm>			Ctrl_SettingForm;
	CWinFormsControl<Form_Control::VehicleInfoForm>		Ctrl_VehInfoForm;
	CWinFormsControl<Form_Control::AirCondition>		Ctrl_AirConForm;
	CWinFormsControl<Form_Control::DTCForm>				Ctrl_DTCForm;
	CWinFormsControl<Form_Control::MemoryCheck>			Ctrl_MCheckForm;

	HWND currentFoucs;

	void			Function_Initialize();
	void			Function_Device_Detect(CString Device_List);

	//Chime Form
	afx_msg void	Box_ChmVolSt_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_ChmAct_CheckedChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Btn_Send_Click(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Btn_Auto_Click(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Btn_Run_Click(System::Object^ sender,System::EventArgs^ e);
	//Main Form
	afx_msg void	Box_Devices_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Bar_SysPwrMd_Scroll(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_SysBkUpPwrMdEn_CheckedChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Btn_VehSetInit_Click(System::Object^ sender, System::EventArgs^ e);
	afx_msg void	Bar_DDAjrSwAtv_Scroll(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Bar_PDAjrSwAtv_Scroll(System::Object^ sender, System::EventArgs^ e);
	afx_msg void	Bar_RLDoorAjarSwAct_Scroll(System::Object^ sender, System::EventArgs^ e);
	afx_msg void	Bar_RRDoorAjarSwAct_Scroll(System::Object^ sender, System::EventArgs^ e);
	afx_msg void	Bar_VehMovState_Scroll(System::Object^ sender, System::EventArgs^ e);
	afx_msg void    Bar_VehSpdAvgDrvn_Scroll(System::Object^ sender, System::EventArgs^ e);
	afx_msg void    Bar_VehSpdAvgNDrvn_Scroll(System::Object^ sender, System::EventArgs^ e);
	afx_msg void    Bar_VehSpdAvgDrvn_Change(System::Object^ sender, System::EventArgs^ e);
	
	//Menu Form
	afx_msg void	Btn_Diagnostic_MouseEnter(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Btn_Main_Click(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Btn_Setting_Click(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Btn_VehicleInfo_Click(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Btn_Chime_Click(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Btn_Node_Click(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Btn_ParkAssistant_Click(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Btn_DTC_Click(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Btn_DID_Click(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Btn_Exit_Click(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Btn_KeyBoard_Click(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Btn_SWC1_Click(System::Object^ sender, System::EventArgs^ e);
	afx_msg void	Btn_HVAC_Click(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Btn_MCheck_Click(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Btn_APA_Click(System::Object^ sender, System::EventArgs^ e);
	//Park Assistant
	afx_msg void	Box_PrkAstRrSysStat_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_PrkAsstRrExtdDist_ValueChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_PARrRgn1ObjStat_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_PARrRgn2ObjStat_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_PARrRgn3ObjStat_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_PARrRgn4ObjStat_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e);
	//Setting
	afx_msg void	Box_DispMeasSysExt_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_RmVehStrRq_CheckedChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_RemStrtSt_CheckedChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_TrStLgMdAtv_CheckedChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_StrgWhlUnit1SwStat_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_StrgWhlUnit2SwStat_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Btn_VinClean_Click(System::Object^ sender,System::EventArgs^ e);
	//Vehicle Information
	afx_msg void	Box_SIRDpl_CheckedChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_SftyMuteRd_CheckedChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_OtsdAmbtLtLvlStatV_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_OtsdAmbtLtLvlStat_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_IntDimDspLvlPlt_ValueChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_IntDimLvl_ValueChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_OtsAirTmpCrValV_CheckedChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_OtsAirTmpV_CheckedChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_OtsAirTmpCrValMsk_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_OtsAirTmpCrVal_ValueChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_OtsAirTmp_ValueChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_FlLvlPct_ValueChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_FlLvlPctV_CheckedChanged(System::Object^ sender,System::EventArgs^ e);	
	//Air Condition
	afx_msg void	Btn_Initialization_CheckedChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_Front_BlowerMode_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_Front_FanSpeeds_ValueChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_Front_LeftSetTemp_ValueChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_Front_RightSetTemp_ValueChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_Rear_BlowerMode_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_Rear_FanSpeeds_ValueChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_Zone_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_AirQualitySensor_CheckedChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_AutoDefog_CheckedChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_AirCondition_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_AirInlet_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_Front_LeftThermalSeat_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Box_Front_RightThermalSeat_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e);
	//DTC
	afx_msg void	Btn_ReadDTC_Click(System::Object^ sender, System::EventArgs^ e);
	afx_msg void	Btn_ClearDTC_Click(System::Object^ sender, System::EventArgs^ e);
	//Memory Check
	afx_msg	void	Btn_ReadMC_Click(System::Object^ sender,System::EventArgs^ e);
	afx_msg void	Btn_Get_Click(System::Object^ sender,System::EventArgs^ e);
};

#endif 