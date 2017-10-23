#include "StdAfx.h"
#include "HVACForm.h"
void HVACForm::Function_Initialize()
{
	Ctrl_HVAC.GetControl()->checkBox_Front_BlowerMode->CheckedChanged+= MAKE_DELEGATE(System::EventHandler,checkBox_Front_BlowerMode_CheckedChanged);
	Ctrl_HVAC.GetControl()->checkBox_Front_FanSpeed->CheckedChanged+= MAKE_DELEGATE(System::EventHandler, checkBox_Front_FanSpeed_CheckedChanged);
	Ctrl_HVAC.GetControl()->checkBox_Front_LeftSetTemp->CheckedChanged+= MAKE_DELEGATE(System::EventHandler, checkBox_Front_LeftSetTemp_CheckedChanged);
	Ctrl_HVAC.GetControl()->checkBox_Front_RightSetTemp->CheckedChanged+= MAKE_DELEGATE(System::EventHandler, checkBox_Front_RightSetTemp_CheckedChanged);
	Ctrl_HVAC.GetControl()->checkBox_Front_ACStatus->CheckedChanged+= MAKE_DELEGATE(System::EventHandler, checkBox_Front_ACStatus_CheckedChanged);
	Ctrl_HVAC.GetControl()->checkBox_Front_AirInlet->CheckedChanged+= MAKE_DELEGATE(System::EventHandler, checkBox_Front_AirInlet_CheckedChanged);
	Ctrl_HVAC.GetControl()->comboBox_FrontBlower->SelectedIndexChanged+= MAKE_DELEGATE(System::EventHandler, comboBox_FrontBlower_SelectedIndexChanged);
	Ctrl_HVAC.GetControl()->comboBox_Zone->SelectedIndexChanged+= MAKE_DELEGATE(System::EventHandler, comboBox_Zone_SelectedIndexChanged);
	Ctrl_HVAC.GetControl()->comboBox_AirCondition->SelectedIndexChanged+= MAKE_DELEGATE(System::EventHandler, comboBox_AirCondition_SelectedIndexChanged);
	Ctrl_HVAC.GetControl()->comboBox_AirInlet->SelectedIndexChanged+= MAKE_DELEGATE(System::EventHandler, comboBox_AirInlet_SelectedIndexChanged);
	Ctrl_HVAC.GetControl()->Bar_FanSpeed->Scroll+=MAKE_DELEGATE(System::EventHandler, Bar_FanSpeed_Scroll);
	Ctrl_HVAC.GetControl()->Bar_Temp->Scroll+=MAKE_DELEGATE(System::EventHandler, Bar_Temp_Scroll);
}	

void HVACForm::checkBox_Front_BlowerMode_CheckedChanged( System::Object ^ sender, System::EventArgs ^ e)
{
	::SendMessage(GetActiveWindow(),MESSAGE_HVAC_ODIINDICATION,NULL,1);
}

void HVACForm::checkBox_Front_FanSpeed_CheckedChanged( System::Object ^ sender, System::EventArgs ^ e)
{
	::SendMessage(GetActiveWindow(),MESSAGE_HVAC_ODIINDICATION,NULL,2);
}

void HVACForm::checkBox_Front_LeftSetTemp_CheckedChanged( System::Object ^ sender, System::EventArgs ^ e)
{
	::SendMessage(GetActiveWindow(),MESSAGE_HVAC_ODIINDICATION,NULL,3);
}

void HVACForm::checkBox_Front_RightSetTemp_CheckedChanged( System::Object ^ sender, System::EventArgs ^ e)
{
	::SendMessage(GetActiveWindow(),MESSAGE_HVAC_ODIINDICATION,NULL,4);
}

void HVACForm::checkBox_Front_ACStatus_CheckedChanged( System::Object ^ sender, System::EventArgs ^ e)
{
	::SendMessage(GetActiveWindow(),MESSAGE_HVAC_ODIINDICATION,NULL,13);
}

void HVACForm::checkBox_Front_AirInlet_CheckedChanged( System::Object ^ sender, System::EventArgs ^ e)
{
	::SendMessage(GetActiveWindow(),MESSAGE_HVAC_ODIINDICATION,NULL,15);
}

void HVACForm::comboBox_FrontBlower_SelectedIndexChanged(System::Object ^ sender, System :: EventArgs ^ e)
{
	::SendMessage(GetActiveWindow(),MESSAGE_HVAC_ODIDATA,Ctrl_HVAC.GetControl()->comboBox_FrontBlower->SelectedIndex,1);
	::SendMessage(GetActiveWindow(),MESSAGE_HVAC_ODIEVENT,NULL,1);
}
void HVACForm::comboBox_Zone_SelectedIndexChanged( System::Object ^ sender, System :: EventArgs ^ e)
{
	::SendMessage(GetActiveWindow(),MESSAGE_HVAC_ODIDATA,Ctrl_HVAC.GetControl()->comboBox_Zone->SelectedIndex,9);
	::SendMessage(GetActiveWindow(),MESSAGE_HVAC_ODIEVENT,NULL,10);
}
void HVACForm::comboBox_AirCondition_SelectedIndexChanged( System::Object ^ sender, System :: EventArgs ^ e)
{
	::SendMessage(GetActiveWindow(),MESSAGE_HVAC_ODIDATA,Ctrl_HVAC.GetControl()->comboBox_AirCondition->SelectedIndex,12);
	::SendMessage(GetActiveWindow(),MESSAGE_HVAC_ODIEVENT,NULL,13);
}

void HVACForm::comboBox_AirInlet_SelectedIndexChanged( System::Object ^ sender, System :: EventArgs ^ e)
{
	::SendMessage(GetActiveWindow(),MESSAGE_HVAC_ODIDATA,Ctrl_HVAC.GetControl()->comboBox_AirInlet->SelectedIndex,13);
	::SendMessage(GetActiveWindow(),MESSAGE_HVAC_ODIEVENT,NULL,14);
}

void HVACForm::Bar_FanSpeed_Scroll( System::Object ^ sender, System :: EventArgs ^ e)
{
	::SendMessage(GetActiveWindow(),MESSAGE_HVAC_ODIDATA,Ctrl_HVAC.GetControl()->Bar_FanSpeed->Value,2);
	::SendMessage(GetActiveWindow(),MESSAGE_HVAC_ODIEVENT,NULL,2);
}

void HVACForm::Bar_Temp_Scroll( System::Object ^ sender, System :: EventArgs ^ e)
{	if(Ctrl_HVAC.GetControl()->comboBox_Temp->SelectedIndex==0)
	{
		::SendMessage(GetActiveWindow(),MESSAGE_HVAC_ODIDATA,Ctrl_HVAC.GetControl()->Bar_Temp->Value,3);
		::SendMessage(GetActiveWindow(),MESSAGE_HVAC_ODIEVENT,NULL,3);
	}
	else
	{
		::SendMessage(GetActiveWindow(),MESSAGE_HVAC_ODIDATA,Ctrl_HVAC.GetControl()->Bar_Temp->Value,4);
		::SendMessage(GetActiveWindow(),MESSAGE_HVAC_ODIEVENT,NULL,4);
	}
}