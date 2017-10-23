#include "stdafx.h"
#include "APAForm.h"

using System::String;

void APAForm::Function_Initialize()
{
	//APA Form
	Ctrl_APAForm.GetControl()->Btn_APAkey->Click += MAKE_DELEGATE(System::EventHandler, Btn_APAkey_Click);
	Ctrl_APAForm.GetControl()->Btn_SlotSearch->Click += MAKE_DELEGATE(System::EventHandler, Btn_SlotSearch_Click);
	Ctrl_APAForm.GetControl()->Btn_APAUnavaible->Click += MAKE_DELEGATE(System::EventHandler, Btn_APAUnavaible_Click);//Btn_APAUnavaible
}


//APA Form
void APAForm::Btn_APAkey_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	currentFoucs = ::FindWindow(NULL, _T("Advanced Park Assist"));
	::SendMessage(currentFoucs, MESSAGE_APAkeyPress, 0, 0);
}

void APAForm::Btn_SlotSearch_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	currentFoucs = ::FindWindow(NULL, _T("Advanced Park Assist"));
	::SendMessage(currentFoucs, MESSAGE_SlotSearch, 0, 0);
}

void APAForm::Btn_APAUnavaible_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	currentFoucs = ::FindWindow(NULL, _T("Advanced Park Assist"));
	::SendMessage(currentFoucs, MESSAGE_APAUnavaible, 0, 0);
	//::SendMessage(GetActiveWindow(), MESSAGE_APAUnavaible, 0, 0);
}
