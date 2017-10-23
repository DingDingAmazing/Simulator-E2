#include "stdafx.h"
#include "FormControl.h"

using System::String;

void FormControl::Function_Initialize()
{
	//Chime Form
	Ctrl_ChimeForm.GetControl()->Box_ChmVolSt->SelectedIndexChanged += MAKE_DELEGATE(System::EventHandler, Box_ChmVolSt_SelectedIndexChanged);
	Ctrl_ChimeForm.GetControl()->Box_ChmAct->CheckedChanged += MAKE_DELEGATE(System::EventHandler, Box_ChmAct_CheckedChanged);
	Ctrl_ChimeForm.GetControl()->Btn_Send->Click += MAKE_DELEGATE(System::EventHandler, Btn_Send_Click);
	Ctrl_ChimeForm.GetControl()->Btn_Auto->Click += MAKE_DELEGATE(System::EventHandler, Btn_Auto_Click);
	Ctrl_ChimeForm.GetControl()->Btn_Run->Click += MAKE_DELEGATE(System::EventHandler, Btn_Run_Click);
	//Main Form
	Ctrl_MainForm.GetControl()->Box_Devices->SelectedIndexChanged += MAKE_DELEGATE(System::EventHandler, Box_Devices_SelectedIndexChanged);
	Ctrl_MainForm.GetControl()->Box_SysBkUpPwrMdEn->CheckedChanged += MAKE_DELEGATE(System::EventHandler, Box_SysBkUpPwrMdEn_CheckedChanged);
	Ctrl_MainForm.GetControl()->Bar_SysPwrMd->Scroll += MAKE_DELEGATE(System::EventHandler,Bar_SysPwrMd_Scroll);
	Ctrl_MainForm.GetControl()->Btn_VehSetInit->Click += MAKE_DELEGATE(System::EventHandler, Btn_VehSetInit_Click);
	Ctrl_MainForm.GetControl()->Bar_DDAjrSwAtv->Scroll += MAKE_DELEGATE(System::EventHandler,Bar_DDAjrSwAtv_Scroll);
	Ctrl_MainForm.GetControl()->Bar_PDAjrSwAtv->Scroll += MAKE_DELEGATE(System::EventHandler, Bar_PDAjrSwAtv_Scroll);
	Ctrl_MainForm.GetControl()->Bar_RLDoorAjarSwAct->Scroll += MAKE_DELEGATE(System::EventHandler, Bar_RLDoorAjarSwAct_Scroll);
	Ctrl_MainForm.GetControl()->Bar_RRDoorAjarSwAct->Scroll += MAKE_DELEGATE(System::EventHandler, Bar_RRDoorAjarSwAct_Scroll);
	Ctrl_MainForm.GetControl()->Bar_VehMovState->Scroll += MAKE_DELEGATE(System::EventHandler, Bar_VehMovState_Scroll);
	Ctrl_MainForm.GetControl()->Bar_VehSpdAvgDrvn->Scroll += MAKE_DELEGATE(System::EventHandler, Bar_VehSpdAvgDrvn_Change);
	//Menu Form
	Ctrl_MenuForm.GetControl()->Btn_Diagnostic->MouseEnter+=MAKE_DELEGATE(System::EventHandler, Btn_Diagnostic_MouseEnter);
	Ctrl_MenuForm.GetControl()->Btn_Main->Click += MAKE_DELEGATE(System::EventHandler, Btn_Main_Click);
	Ctrl_MenuForm.GetControl()->Btn_Exit->Click += MAKE_DELEGATE(System::EventHandler, Btn_Exit_Click);
	Ctrl_MenuForm.GetControl()->Btn_Chime->Click += MAKE_DELEGATE(System::EventHandler, Btn_Chime_Click);
	Ctrl_MenuForm.GetControl()->Btn_Setting->Click += MAKE_DELEGATE(System::EventHandler, Btn_Setting_Click);
	Ctrl_MenuForm.GetControl()->Btn_VehicleInfo->Click += MAKE_DELEGATE(System::EventHandler, Btn_VehicleInfo_Click);
	Ctrl_MenuForm.GetControl()->Btn_Node->Click +=  MAKE_DELEGATE(System::EventHandler,Btn_Node_Click);
	Ctrl_MenuForm.GetControl()->Btn_ParkAssistant->Click += MAKE_DELEGATE(System::EventHandler,Btn_ParkAssistant_Click);
	Ctrl_MenuForm.GetControl()->Btn_DTC->Click+=MAKE_DELEGATE(System::EventHandler,Btn_DTC_Click);
	Ctrl_MenuForm.GetControl()->Btn_DID->Click+=MAKE_DELEGATE(System::EventHandler,Btn_DID_Click);
	Ctrl_MenuForm.GetControl()->Btn_KeyBoard->Click += MAKE_DELEGATE(System::EventHandler, Btn_KeyBoard_Click);
	Ctrl_MenuForm.GetControl()->Btn_SWC1->Click += MAKE_DELEGATE(System::EventHandler, Btn_SWC1_Click);
	Ctrl_MenuForm.GetControl()->Btn_HVAC->Click += MAKE_DELEGATE(System::EventHandler, Btn_HVAC_Click);
	Ctrl_MenuForm.GetControl()->Btn_MCheck->Click += MAKE_DELEGATE(System::EventHandler, Btn_MCheck_Click);
	Ctrl_MenuForm.GetControl()->Btn_APA->Click += MAKE_DELEGATE(System::EventHandler, Btn_APA_Click);
	//Park Assistant
	Ctrl_ParkAssForm.GetControl()->Box_PrkAstRrSysStat->SelectedIndexChanged += MAKE_DELEGATE(System::EventHandler, Box_PrkAstRrSysStat_SelectedIndexChanged);
	Ctrl_ParkAssForm.GetControl()->Box_PrkAsstRrExtdDist->ValueChanged += MAKE_DELEGATE(System::EventHandler, Box_PrkAsstRrExtdDist_ValueChanged);
	Ctrl_ParkAssForm.GetControl()->Box_PARrRgn1ObjStat->SelectedIndexChanged += MAKE_DELEGATE(System::EventHandler, Box_PARrRgn1ObjStat_SelectedIndexChanged);
	Ctrl_ParkAssForm.GetControl()->Box_PARrRgn2ObjStat->SelectedIndexChanged += MAKE_DELEGATE(System::EventHandler, Box_PARrRgn2ObjStat_SelectedIndexChanged);
	Ctrl_ParkAssForm.GetControl()->Box_PARrRgn3ObjStat->SelectedIndexChanged += MAKE_DELEGATE(System::EventHandler, Box_PARrRgn3ObjStat_SelectedIndexChanged);
	Ctrl_ParkAssForm.GetControl()->Box_PARrRgn4ObjStat->SelectedIndexChanged += MAKE_DELEGATE(System::EventHandler, Box_PARrRgn4ObjStat_SelectedIndexChanged);
	//Setting
	Ctrl_SettingForm.GetControl()->Box_DispMeasSysExt->SelectedIndexChanged += MAKE_DELEGATE(System::EventHandler,Box_DispMeasSysExt_SelectedIndexChanged);
	Ctrl_SettingForm.GetControl()->Box_RmVehStrRq->CheckedChanged += MAKE_DELEGATE(System::EventHandler,Box_RmVehStrRq_CheckedChanged);
	Ctrl_SettingForm.GetControl()->Box_RemStrtSt->CheckedChanged += MAKE_DELEGATE(System::EventHandler,Box_RemStrtSt_CheckedChanged);
	Ctrl_SettingForm.GetControl()->Box_TrStLgMdAtv->CheckedChanged += MAKE_DELEGATE(System::EventHandler, Box_TrStLgMdAtv_CheckedChanged);
	Ctrl_SettingForm.GetControl()->Box_StrgWhlUnit1SwStat->SelectedIndexChanged += MAKE_DELEGATE(System::EventHandler,Box_StrgWhlUnit1SwStat_SelectedIndexChanged);
	Ctrl_SettingForm.GetControl()->Box_StrgWhlUnit2SwStat->SelectedIndexChanged += MAKE_DELEGATE(System::EventHandler,Box_StrgWhlUnit2SwStat_SelectedIndexChanged);
	Ctrl_SettingForm.GetControl()->Btn_VinClean->Click += MAKE_DELEGATE(System::EventHandler,Btn_VinClean_Click);
	//Vehicle Information
	Ctrl_VehInfoForm.GetControl()->Box_SIRDpl->CheckedChanged += MAKE_DELEGATE(System::EventHandler, Box_SIRDpl_CheckedChanged);
	Ctrl_VehInfoForm.GetControl()->Box_sftyMuteRd->CheckedChanged += MAKE_DELEGATE(System::EventHandler, Box_SftyMuteRd_CheckedChanged);
	Ctrl_VehInfoForm.GetControl()->Box_OtsdAmbtLtLvlStatV->SelectedIndexChanged += MAKE_DELEGATE(System::EventHandler,Box_OtsdAmbtLtLvlStatV_SelectedIndexChanged);
	Ctrl_VehInfoForm.GetControl()->Box_OtsdAmbtLtLvlStat->SelectedIndexChanged += MAKE_DELEGATE(System::EventHandler,Box_OtsdAmbtLtLvlStat_SelectedIndexChanged);
	Ctrl_VehInfoForm.GetControl()->Box_IntDimDspLvlPlt->ValueChanged += MAKE_DELEGATE(System::EventHandler, Box_IntDimDspLvlPlt_ValueChanged);
	Ctrl_VehInfoForm.GetControl()->Box_IntDimLvl->ValueChanged +=  MAKE_DELEGATE(System::EventHandler, Box_IntDimLvl_ValueChanged);
	Ctrl_VehInfoForm.GetControl()->Box_OtsAirTmpCrValV->CheckedChanged += MAKE_DELEGATE(System::EventHandler, Box_OtsAirTmpV_CheckedChanged);
	Ctrl_VehInfoForm.GetControl()->Box_OtsAirTmpV->CheckedChanged += MAKE_DELEGATE(System::EventHandler, Box_OtsAirTmpV_CheckedChanged);
	Ctrl_VehInfoForm.GetControl()->Box_OtsAirTmpCrValMsk->SelectedIndexChanged += MAKE_DELEGATE(System::EventHandler, Box_OtsAirTmpCrValMsk_SelectedIndexChanged);
	Ctrl_VehInfoForm.GetControl()->Box_OtsAirTmpCrVal->ValueChanged += MAKE_DELEGATE(System::EventHandler,Box_OtsAirTmpCrVal_ValueChanged);
	Ctrl_VehInfoForm.GetControl()->Box_OtsAirTmp->ValueChanged += MAKE_DELEGATE(System::EventHandler,Box_OtsAirTmp_ValueChanged);
	Ctrl_VehInfoForm.GetControl()->Box_FlLvlPct->ValueChanged += MAKE_DELEGATE(System::EventHandler, Box_FlLvlPct_ValueChanged);
	Ctrl_VehInfoForm.GetControl()->Box_FlLvlPctV->CheckedChanged += MAKE_DELEGATE(System::EventHandler, Box_FlLvlPctV_CheckedChanged);
	//Air Condition
	Ctrl_AirConForm.GetControl()->Btn_Initialization->Click += MAKE_DELEGATE(System::EventHandler, Btn_Initialization_CheckedChanged);
	Ctrl_AirConForm.GetControl()->Box_Front_BlowerMode->SelectedIndexChanged += MAKE_DELEGATE(System::EventHandler, Box_Front_BlowerMode_SelectedIndexChanged);
	Ctrl_AirConForm.GetControl()->Box_Front_FanSpeed->ValueChanged += MAKE_DELEGATE(System::EventHandler, Box_Front_FanSpeeds_ValueChanged);
	Ctrl_AirConForm.GetControl()->Box_Front_LeftSetTemp->ValueChanged += MAKE_DELEGATE(System::EventHandler,Box_Front_LeftSetTemp_ValueChanged);
	Ctrl_AirConForm.GetControl()->Box_Front_RightSetTemp->ValueChanged += MAKE_DELEGATE(System::EventHandler,Box_Front_RightSetTemp_ValueChanged);
	Ctrl_AirConForm.GetControl()->Box_Rear_BlowerMode->SelectedIndexChanged += MAKE_DELEGATE(System::EventHandler, Box_Rear_BlowerMode_SelectedIndexChanged);
	Ctrl_AirConForm.GetControl()->Box_Rear_FanSpeed->ValueChanged += MAKE_DELEGATE(System::EventHandler, Box_Rear_FanSpeeds_ValueChanged);
	Ctrl_AirConForm.GetControl()->Box_Zone->SelectedIndexChanged += MAKE_DELEGATE(System::EventHandler, Box_Zone_SelectedIndexChanged);
	Ctrl_AirConForm.GetControl()->Box_AirQualitySensor->CheckedChanged += MAKE_DELEGATE(System::EventHandler, Box_AirQualitySensor_CheckedChanged);
	Ctrl_AirConForm.GetControl()->Box_AutoDefog->CheckedChanged += MAKE_DELEGATE(System::EventHandler, Box_AutoDefog_CheckedChanged);
	Ctrl_AirConForm.GetControl()->Box_AirCondition->SelectedIndexChanged += MAKE_DELEGATE(System::EventHandler, Box_AirCondition_SelectedIndexChanged);
	Ctrl_AirConForm.GetControl()->Box_AirInlet->SelectedIndexChanged += MAKE_DELEGATE(System::EventHandler, Box_AirInlet_SelectedIndexChanged);
	Ctrl_AirConForm.GetControl()->Box_Front_LeftThermalSeat->SelectedIndexChanged += MAKE_DELEGATE(System::EventHandler, Box_Front_LeftThermalSeat_SelectedIndexChanged);
	Ctrl_AirConForm.GetControl()->Box_Front_RightThermalSeat->SelectedIndexChanged += MAKE_DELEGATE(System::EventHandler, Box_Front_RightThermalSeat_SelectedIndexChanged);
	//DTC
	Ctrl_DTCForm.GetControl()->Btn_ReadDTC->Click += MAKE_DELEGATE(System::EventHandler,Btn_ReadDTC_Click);
	Ctrl_DTCForm.GetControl()->Btn_ClearDTC->Click += MAKE_DELEGATE(System::EventHandler,Btn_ClearDTC_Click);
	//Memory Check
	Ctrl_MCheckForm.GetControl()->Btn_Read->Click += MAKE_DELEGATE(System::EventHandler,Btn_ReadMC_Click);
	Ctrl_MCheckForm.GetControl()->Btn_Get->Click += MAKE_DELEGATE(System::EventHandler,Btn_Get_Click);
}

void FormControl::Function_Device_Detect(CString Device_List)
{
	int pos;
	CString List = Device_List;
	CString device;
	CString ID;
	Ctrl_MainForm.GetControl()->Box_Devices->Items->Clear();
	pos = Device_List.Find(",",0);
	while(pos >= 0)
	{
		device = Device_List.Left(pos);
		Ctrl_MainForm.GetControl()->Box_Devices->Items->Add(gcnew String(device));
		Device_List.Delete(0,pos + 1);
		pos = Device_List.Find(",",0);
		ID = Device_List.Left(pos);
		Device_List.Delete(0,pos + 1);
		PublicParama::DeviceList[atoi(ID)] = device;
		pos = Device_List.Find(",",0);
	}
	if(Ctrl_MainForm.GetControl()->Box_Devices->Items->Count > 0)
	{
		Ctrl_MainForm.GetControl()->Box_Devices->SelectedIndex = 0;
		//Function_Send_Command("54 04 02");
	}
	else
	{
		Ctrl_MainForm.GetControl()->Box_Devices->SelectedIndex = 2;
	}
}

//Chime Form
void FormControl::Btn_Send_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_CHIME_COMMAND,0,Ctrl_ChimeForm.GetControl()->Box_CanID->SelectedIndex);
}

void FormControl::Box_ChmVolSt_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_CHIME_ACTIVE,0,0);
}

void FormControl::Box_ChmAct_CheckedChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_CHIME_ACTIVE,0,0);
}

void FormControl::Btn_Auto_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_MENU_CONTROL,NULL,77);
}

void FormControl::Btn_Run_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_CHIME_ATS,0,0);
}

//Main Form
void FormControl::Box_Devices_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e)
{
	PublicParama::EngineConnection.DisconnectFromDevice(PublicParama::CurrentDeviceID);
	int deviceID;
	PublicParama::CurrentDeviceName = Ctrl_MainForm.GetControl()->Box_Devices->SelectedItem->ToString();
	for (int nIndex = 0; nIndex < MAX_DEVICES; nIndex++)
	{
		if (PublicParama::CurrentDeviceName.Compare(PublicParama::DeviceList[nIndex]) == 0) 
		{
			PublicParama::CurrentDeviceID = nIndex;
		}
	}
	deviceID = PublicParama::EngineConnection.ConnectToDevice(PublicParama::CurrentDeviceName);
	Sleep(1000);
	Saint2Config();//configures LSGMLAN when connecting to Saint2

	if(deviceID != 0xFF)
	{
		TRACE("***** Connected to %s *****\n", PublicParama::CurrentDeviceName);	
	}
	else
	{
		TRACE("***** Failed to connect to %s *****\n", PublicParama::CurrentDeviceName);
	}
}

void FormControl::Bar_SysPwrMd_Scroll(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(), MESSAGE_System_Power_Mode_LS, 0, 0);
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_SYSTEM_POWER_MODE_BACKUP_IPC_LS,0,0);
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_ODI_INITIALIZE,0,0);
}

void FormControl::Box_SysBkUpPwrMdEn_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(), MESSAGE_SYSTEM_POWER_MODE_BACKUP_IPC_LS, 0, 0);
}

void FormControl::Btn_VehSetInit_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_ODI_INITIALIZE,0,0);
}

void FormControl::Bar_DDAjrSwAtv_Scroll(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(), MESSAGE_Driver_Door_Status, 0, 0);
}

void FormControl::Bar_PDAjrSwAtv_Scroll(System::Object^ sender, System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(), MESSAGE_Passenger_Door_Status_LS, 0, 0);
}

void FormControl::Bar_RLDoorAjarSwAct_Scroll(System::Object^ sender, System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(), MESSAGE_Left_Rear_Door_Status, 0, 0);
}

void FormControl::Bar_RRDoorAjarSwAct_Scroll(System::Object^ sender, System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(), MESSAGE_Right_Rear_Door_Status, 0, 0);
}

void FormControl::Bar_VehMovState_Scroll(System::Object^ sender, System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(), MESSAGE_Power_Mode_Info_LS, 0, 0);

	currentFoucs = ::FindWindow(NULL, _T("Advanced Park Assist"));
	::SendMessage(currentFoucs, MESSAGE_APAGears, 0, (int)(4 - Ctrl_MainForm->Bar_VehMovState->Value));
}

void FormControl::Bar_VehSpdAvgDrvn_Change(System::Object^ sender, System::EventArgs^ e)
{
	if ((int)Ctrl_MainForm->Box_VehSpdAvgDrvnV->Checked == 0)
	{
		currentFoucs = ::FindWindow(NULL, _T("Advanced Park Assist"));
		::SendMessage(currentFoucs, MESSAGE_APASpeed, 0, (int)Ctrl_MainForm->Bar_VehSpdAvgDrvn->Value / 64);
	}
}


//Menu Form
void FormControl::Btn_Exit_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_MENU_CONTROL,NULL,0);
}

void FormControl::Btn_Main_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_MENU_CONTROL,NULL,1);
}

void FormControl::Btn_KeyBoard_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_MENU_CONTROL,NULL,2);
}

void FormControl::Btn_Setting_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_MENU_CONTROL,NULL,3);
}

void FormControl::Btn_VehicleInfo_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_MENU_CONTROL,NULL,4);
}

void FormControl::Btn_Chime_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_MENU_CONTROL,NULL,5);
}

void FormControl::Btn_ParkAssistant_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_MENU_CONTROL,NULL,6);
}

void FormControl::Btn_Node_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_MENU_CONTROL,NULL,7);
}

void FormControl::Btn_DTC_Click(System::Object^ sender, System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(), MESSAGE_MENU_CONTROL, NULL, 8);
}

void FormControl::Btn_DID_Click(System::Object^ sender, System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(), MESSAGE_MENU_CONTROL, NULL, 9);
}

void FormControl::Btn_APA_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(), MESSAGE_MENU_CONTROL, NULL, 10);
}

void FormControl::Btn_HVAC_Click(System::Object ^ sender, System :: EventArgs ^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_MENU_CONTROL,NULL,12);
}

void FormControl::Btn_MCheck_Click(System::Object ^ sender, System :: EventArgs ^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_MENU_CONTROL,NULL,13);
}

void FormControl::Btn_SWC1_Click(System::Object^ sender, System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(), MESSAGE_MENU_CONTROL, NULL, 99);
}

void FormControl::Btn_Diagnostic_MouseEnter(System::Object ^ sender, System::EventArgs ^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(), MESSAGE_MENU_CONTROL, NULL, 100);
}

//Park Assistant
void FormControl::Box_PARrRgn1ObjStat_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_PARK_ASSISTANT_REAR_STATUS,0,0);
}

void FormControl::Box_PARrRgn2ObjStat_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_PARK_ASSISTANT_REAR_STATUS,0,0);
}

void FormControl::Box_PARrRgn3ObjStat_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_PARK_ASSISTANT_REAR_STATUS,0,0);
}

void FormControl::Box_PARrRgn4ObjStat_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_PARK_ASSISTANT_REAR_STATUS,0,0);
}

void FormControl::Box_PrkAsstRrExtdDist_ValueChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_PARK_ASSISTANT_REAR_STATUS,0,0);
}

void FormControl::Box_PrkAstRrSysStat_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_PARK_ASSISTANT_REAR_STATUS,0,0);
}

//Setting
void FormControl::Box_DispMeasSysExt_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_DISPLAY_MEASUREMENT_SYSTEM_HS,0,0);
}

void FormControl::Box_RmVehStrRq_CheckedChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(), MESSAGE_System_Power_Mode_LS, 0, 0);
}

void FormControl::Box_RemStrtSt_CheckedChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(), MESSAGE_System_Power_Mode_LS, 0, 0);
}

void FormControl::Box_TrStLgMdAtv_CheckedChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(), MESSAGE_System_Power_Mode_LS, 0, 0);
}

void FormControl::Box_StrgWhlUnit1SwStat_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_STEERING_WHEEL_CONTROL_SWITCHES,0,0);
}

void FormControl::Box_StrgWhlUnit2SwStat_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_STEERING_WHEEL_CONTROL_SWITCHES,0,0);
}

void FormControl::Btn_VinClean_Click(System::Object^ sender,System::EventArgs^ e)
{
	Function_Send_Command("58 02 48 07 AE FE 80 00 00 00 00");
}

//Vehcile Informaiton

void FormControl::Box_SIRDpl_CheckedChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_AIRBAG_IMPACT_DATA,0,0);
}

void FormControl::Box_SftyMuteRd_CheckedChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_AIRBAG_STATUS,0,0);
}

void FormControl::Box_OtsdAmbtLtLvlStatV_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_EXTERIOR_LIGHTING_HS,0,0);
}

void FormControl::Box_OtsdAmbtLtLvlStat_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_EXTERIOR_LIGHTING_HS,0,0);
}

void FormControl::Box_IntDimDspLvlPlt_ValueChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_EXTERIOR_LIGHTING_HS,0,0);
}

void FormControl::Box_IntDimLvl_ValueChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_EXTERIOR_LIGHTING_HS,0,0);
}

void FormControl::Box_OtsAirTmp_ValueChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_OUTSIDE_AIR_TEMPERATURE_HS,0,0);
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_PPEI_ENGINE_ENVIRONMENTAL_STATUS,0,0);
}

void FormControl::Box_OtsAirTmpCrVal_ValueChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_OUTSIDE_AIR_TEMPERATURE_HS,0,0);
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_PPEI_ENGINE_ENVIRONMENTAL_STATUS,0,0);
}

void FormControl::Box_OtsAirTmpCrValMsk_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_OUTSIDE_AIR_TEMPERATURE_HS,0,0);
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_PPEI_ENGINE_ENVIRONMENTAL_STATUS,0,0);
}

void FormControl::Box_OtsAirTmpV_CheckedChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_OUTSIDE_AIR_TEMPERATURE_HS,0,0);
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_PPEI_ENGINE_ENVIRONMENTAL_STATUS,0,0);
}

void FormControl::Box_OtsAirTmpCrValV_CheckedChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_OUTSIDE_AIR_TEMPERATURE_HS,0,0);
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_PPEI_ENGINE_ENVIRONMENTAL_STATUS,0,0);
}

void FormControl::Box_FlLvlPctV_CheckedChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_PPEI_ENGINE_GENERAL_STATUS_5,0,0);
}

void FormControl::Box_FlLvlPct_ValueChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_PPEI_ENGINE_GENERAL_STATUS_5,0,0);
}
//Air Condition
void FormControl::Btn_Initialization_CheckedChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_HVAC_INITIALIZE,0,0);
}

void FormControl::Box_Front_BlowerMode_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_HVAC_ODIDYNDATA,1,0x07);
}

void FormControl::Box_Front_FanSpeeds_ValueChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_HVAC_ODIDYNDATA,2,0x07);
}

void FormControl::Box_Front_LeftSetTemp_ValueChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_HVAC_ODIDYNDATA,3,0x07);
}

void FormControl::Box_Front_RightSetTemp_ValueChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_HVAC_ODIDYNDATA,4,0x07);
}

void FormControl::Box_Rear_BlowerMode_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_HVAC_ODIDYNDATA,5,0x07);
}

void FormControl::Box_Rear_FanSpeeds_ValueChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_HVAC_ODIDYNDATA,6,0x07);
}

void FormControl::Box_Zone_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_HVAC_ODIDYNDATA,9,0x07);
}

void FormControl::Box_AirQualitySensor_CheckedChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_HVAC_ODIDYNDATA,10,0x07);
}

void FormControl::Box_AutoDefog_CheckedChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_HVAC_ODIDYNDATA,11,0x07);
}

void FormControl::Box_AirCondition_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_HVAC_ODIDYNDATA,12,0x07);
}

void FormControl::Box_AirInlet_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_HVAC_ODIDYNDATA,13,0x07);
}

void FormControl::Box_Front_LeftThermalSeat_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_HVAC_ODIDYNDATA,15,0x07);
}

void FormControl::Box_Front_RightThermalSeat_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_HVAC_ODIDYNDATA,16,0x07);
}

//DTC
void FormControl::Btn_ReadDTC_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_DTC_READ,0,0);
}

void FormControl::Btn_ClearDTC_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_DTC_READ,0xFF,0);
}

//Memory Check
void FormControl::Btn_ReadMC_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_MC_READ,0,0);
}

void FormControl::Btn_Get_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_PITS_READ,0,0);
}
