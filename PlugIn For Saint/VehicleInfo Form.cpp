#include "stdafx.h"
#include "VehicleInfo Form.h"
#include "Public Parameter.h"

void VehicleInfo_Form::Function_Initialize()
{
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
}

void VehicleInfo_Form::Box_SIRDpl_CheckedChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_AIRBAG_IMPACT_DATA,0,0);
}

void VehicleInfo_Form::Box_SftyMuteRd_CheckedChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_AIRBAG_STATUS,0,0);
}

void VehicleInfo_Form::Box_OtsdAmbtLtLvlStatV_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_EXTERIOR_LIGHTING_HS,0,0);
}

void VehicleInfo_Form::Box_OtsdAmbtLtLvlStat_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_EXTERIOR_LIGHTING_HS,0,0);
}

void VehicleInfo_Form::Box_IntDimDspLvlPlt_ValueChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_EXTERIOR_LIGHTING_HS,0,0);
}

void VehicleInfo_Form::Box_IntDimLvl_ValueChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_EXTERIOR_LIGHTING_HS,0,0);
}

void VehicleInfo_Form::Box_OtsAirTmp_ValueChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_OUTSIDE_AIR_TEMPERATURE_HS,0,0);
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_PPEI_ENGINE_ENVIRONMENTAL_STATUS,0,0);
}

void VehicleInfo_Form::Box_OtsAirTmpCrVal_ValueChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_OUTSIDE_AIR_TEMPERATURE_HS,0,0);
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_PPEI_ENGINE_ENVIRONMENTAL_STATUS,0,0);
}

void VehicleInfo_Form::Box_OtsAirTmpCrValMsk_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_OUTSIDE_AIR_TEMPERATURE_HS,0,0);
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_PPEI_ENGINE_ENVIRONMENTAL_STATUS,0,0);
}

void VehicleInfo_Form::Box_OtsAirTmpV_CheckedChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_OUTSIDE_AIR_TEMPERATURE_HS,0,0);
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_PPEI_ENGINE_ENVIRONMENTAL_STATUS,0,0);
}

void VehicleInfo_Form::Box_OtsAirTmpCrValV_CheckedChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_OUTSIDE_AIR_TEMPERATURE_HS,0,0);
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_PPEI_ENGINE_ENVIRONMENTAL_STATUS,0,0);
}

void VehicleInfo_Form::Box_FlLvlPctV_CheckedChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_PPEI_ENGINE_GENERAL_STATUS_5,0,0);
}

void VehicleInfo_Form::Box_FlLvlPct_ValueChanged(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_PPEI_ENGINE_GENERAL_STATUS_5,0,0);
}