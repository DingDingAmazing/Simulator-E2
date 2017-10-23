#ifndef _DtcForm
#define _DtcForm
class Read_Dtc
{
public:
		BEGIN_DELEGATE_MAP(Read_Dtc)
		EVENT_DELEGATE_ENTRY( Btn_CleanDTC_Click,System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( BtnDTC_Click,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( checkBox1_CheckedChanged,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( checkBox2_CheckedChanged,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( checkBox3_CheckedChanged,	System::Object^, System::EventArgs^)
		END_DELEGATE_MAP()
	
	CWinFormsControl<Form_Control::ReadDTC>	Ctrl_ReadDTC;
		void		Function_Initialize();
		afx_msg	void Btn_CleanDTC_Click(System::Object^ sender,System::EventArgs^ e);
		afx_msg	void BtnDTC_Click(System::Object^ sender,System::EventArgs^ e);
		afx_msg void checkBox1_CheckedChanged(System::Object^ sender,System::EventArgs^ e);
		afx_msg void checkBox2_CheckedChanged(System::Object^ sender,System::EventArgs^ e);
		afx_msg void checkBox3_CheckedChanged(System::Object^ sender,System::EventArgs^ e);
};

#endif

