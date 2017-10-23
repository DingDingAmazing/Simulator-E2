#pragma once
#include "Public Parameter.h"
class HVACForm
{
public:
	BEGIN_DELEGATE_MAP(HVACForm)
		EVENT_DELEGATE_ENTRY( checkBox_Front_BlowerMode_CheckedChanged,System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( checkBox_Front_FanSpeed_CheckedChanged,System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( checkBox_Front_LeftSetTemp_CheckedChanged,System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( checkBox_Front_RightSetTemp_CheckedChanged,System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( checkBox_Front_ACStatus_CheckedChanged,System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( checkBox_Front_AirInlet_CheckedChanged,System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( comboBox_FrontBlower_SelectedIndexChanged,System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( comboBox_Zone_SelectedIndexChanged,System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( comboBox_AirCondition_SelectedIndexChanged,System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( comboBox_AirInlet_SelectedIndexChanged,System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Bar_FanSpeed_Scroll,System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Bar_Temp_Scroll,System::Object^, System::EventArgs^)
		END_DELEGATE_MAP()
	CWinFormsControl<Form_Control::Hvac>	Ctrl_HVAC;

	void		Function_Initialize();
	afx_msg	void checkBox_Front_BlowerMode_CheckedChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg	void checkBox_Front_FanSpeed_CheckedChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg	void checkBox_Front_LeftSetTemp_CheckedChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg	void checkBox_Front_RightSetTemp_CheckedChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg	void checkBox_Front_ACStatus_CheckedChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg	void checkBox_Front_AirInlet_CheckedChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg	void comboBox_FrontBlower_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg	void comboBox_Zone_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg	void comboBox_AirCondition_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg	void comboBox_AirInlet_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg	void Bar_FanSpeed_Scroll(System::Object^ sender,System::EventArgs^ e);
	afx_msg	void Bar_Temp_Scroll(System::Object^ sender,System::EventArgs^ e);
};

