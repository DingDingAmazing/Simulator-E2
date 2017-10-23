class VehicleInfo_Form
{
public:
	BEGIN_DELEGATE_MAP( VehicleInfo_Form )
		EVENT_DELEGATE_ENTRY( Box_SIRDpl_CheckedChanged,		System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_SftyMuteRd_CheckedChanged,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_OtsdAmbtLtLvlStatV_SelectedIndexChanged,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_OtsdAmbtLtLvlStat_SelectedIndexChanged,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_IntDimDspLvlPlt_ValueChanged,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_IntDimLvl_ValueChanged,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_OtsAirTmpCrValV_CheckedChanged,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_OtsAirTmpV_CheckedChanged,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_OtsAirTmpCrValMsk_SelectedIndexChanged,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_OtsAirTmpCrVal_ValueChanged,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_OtsAirTmp_ValueChanged,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_FlLvlPct_ValueChanged,	System::Object^, System::EventArgs^)
		EVENT_DELEGATE_ENTRY( Box_FlLvlPctV_CheckedChanged,	System::Object^, System::EventArgs^)
	END_DELEGATE_MAP()

	CWinFormsControl<Form_Control::VehicleInfoForm>	Ctrl_VehInfoForm;

	void		Function_Initialize();
	afx_msg void Box_SIRDpl_CheckedChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void Box_SftyMuteRd_CheckedChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void Box_OtsdAmbtLtLvlStatV_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void Box_OtsdAmbtLtLvlStat_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void Box_IntDimDspLvlPlt_ValueChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void Box_IntDimLvl_ValueChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void Box_OtsAirTmpCrValV_CheckedChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void Box_OtsAirTmpV_CheckedChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void Box_OtsAirTmpCrValMsk_SelectedIndexChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void Box_OtsAirTmpCrVal_ValueChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void Box_OtsAirTmp_ValueChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void Box_FlLvlPct_ValueChanged(System::Object^ sender,System::EventArgs^ e);
	afx_msg void Box_FlLvlPctV_CheckedChanged(System::Object^ sender,System::EventArgs^ e);	
};