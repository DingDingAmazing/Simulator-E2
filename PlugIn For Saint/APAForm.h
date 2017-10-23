#ifndef _APAForm
#define _APAForm
#include "Public Parameter.h"

class APAForm
{
public:
	BEGIN_DELEGATE_MAP(APAForm)
		//APA Form
		EVENT_DELEGATE_ENTRY(Btn_APAkey_Click, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY(Btn_SlotSearch_Click, System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY(Btn_APAUnavaible_Click, System::Object^, System::EventArgs^)

	END_DELEGATE_MAP()

	CWinFormsControl<Form_Control::APA>          Ctrl_APAForm;
	void		Function_Initialize();

	afx_msg void	Btn_APAkey_Click(System::Object^ sender, System::EventArgs^ e);
	afx_msg void	Btn_SlotSearch_Click(System::Object^ sender, System::EventArgs^ e);
	afx_msg void	Btn_APAUnavaible_Click(System::Object^ sender, System::EventArgs^ e);

	HWND currentFoucs;
};

#endif