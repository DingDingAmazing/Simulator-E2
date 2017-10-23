#include "StdAfx.h"
#include "DTCForm.h"
#include "Public Parameter.h"
void Read_Dtc::Function_Initialize()
{
Ctrl_ReadDTC.GetControl()->BtnDTC->Click += MAKE_DELEGATE(System::EventHandler , BtnDTC_Click);
Ctrl_ReadDTC.GetControl()->Btn_CleanDTC->Click += MAKE_DELEGATE(System::EventHandler , Btn_CleanDTC_Click);
Ctrl_ReadDTC.GetControl()->checkBox1->CheckedChanged += MAKE_DELEGATE(System::EventHandler, checkBox1_CheckedChanged);
Ctrl_ReadDTC.GetControl()->checkBox2->CheckedChanged += MAKE_DELEGATE(System::EventHandler, checkBox2_CheckedChanged);
Ctrl_ReadDTC.GetControl()->checkBox3->CheckedChanged += MAKE_DELEGATE(System::EventHandler, checkBox3_CheckedChanged);
}

void Read_Dtc::Btn_CleanDTC_Click( System ::Object ^ sender, System :: EventArgs ^ e)
{
	::SendMessage(GetActiveWindow(),MESSAGE_CLEANDTC_ACTIVE,NULL,0);
}
void Read_Dtc::BtnDTC_Click( System ::Object ^ sender, System :: EventArgs ^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_READDTC_ACTIVE,NULL,0);
	::SendMessage(GetActiveWindow(),MESSAGE_READDTC_ACTIVE,NULL,0);
}

void Read_Dtc::checkBox1_CheckedChanged(System ::Object ^ sender, System :: EventArgs ^ e)
{
	::SendMessage(GetActiveWindow(),MESSAGE_FACEPLATE_DYNAMIC,NULL,1);
}

void Read_Dtc::checkBox2_CheckedChanged(System ::Object ^ sender, System :: EventArgs ^ e)
{
	::SendMessage(GetActiveWindow(),MESSAGE_FACEPLATE_DYNAMIC,NULL,2);
}

void Read_Dtc::checkBox3_CheckedChanged(System ::Object ^ sender, System :: EventArgs ^ e)
{
	::SendMessage(GetActiveWindow(),MESSAGE_FACEPLATE_DYNAMIC,NULL,3);
}