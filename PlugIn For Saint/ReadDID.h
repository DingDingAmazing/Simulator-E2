#pragma once
class ReadDID
{
public:
	BEGIN_DELEGATE_MAP(ReadDID)
		EVENT_DELEGATE_ENTRY( BtnRead_Click,System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Btn_Write_Click,System::Object^,System::EventArgs^)
		END_DELEGATE_MAP()

	CWinFormsControl<Form_Control::DID>	Ctrl_DID;

	void		Function_Initialize();
	afx_msg	void BtnRead_Click(System::Object^ sender,System::EventArgs^ e);
	afx_msg void Btn_Write_Click(System::Object^ sender,System::EventArgs^ e);
};

