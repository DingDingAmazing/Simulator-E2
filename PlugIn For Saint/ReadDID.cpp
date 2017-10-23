#include "StdAfx.h"
#include "ReadDID.h"
#include "Public Parameter.h"

void ReadDID::Function_Initialize()
{
	Ctrl_DID.GetControl()->BtnRead->Click += MAKE_DELEGATE(System::EventHandler , BtnRead_Click);
	Ctrl_DID.GetControl()->Btn_Write->Click += MAKE_DELEGATE(System::EventHandler ,Btn_Write_Click);
}

void ReadDID::BtnRead_Click( System::Object ^ sender, System :: EventArgs ^ e)
{
	::SendMessage(GetActiveWindow(),MESSAGE_READ_DID,NULL,0);
}

void ReadDID::Btn_Write_Click( System::Object ^ sender, System :: EventArgs ^ e)
{
	::SendMessage(GetActiveWindow(),MESSAGE_FACEPLATE_DYNAMIC,NULL,1);
}