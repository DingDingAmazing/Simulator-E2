
// PlugIn For SaintDlg.h : header file
//
#include "KeyBoardFrame.h"
#include "Public Parameter.h"
#include "Node Form.h"
#include "DtcForm.h"
#include "DIDFRAME.h"
#include "DTCFRAME.h"
#include "HVACFrame.h"
#include "FormControl.h"
#include "APAFrame.h"
#include "APAForm.h"
//#include "KeyBoard Form.h"
#pragma once
typedef unsigned int UINT;

struct Data_Information
{
	int length;
	CString time;
};


// CPlugInForSaintDlg dialog
class CPlugInForSaintDlg : public CDialogEx,public PublicParama
{
// Construction
public:
	CPlugInForSaintDlg(CWnd* pParent = NULL);	// standard constructor
	virtual ~CPlugInForSaintDlg();
	DTCFRAME*				dtcframe;
	DIDFrame*				didframe;
	HWND					didhand;
	HWND					dtchwnd;	
	KeyBoardFrame*			keyboardframe;			//Class KeyBoard Frame
	HWND					keyboardhwnd;			//HWND KeyBoard Frame
	FormControl				FormFunc;				//Class FormControl
	Node_Form				NodeFunc;				//Class Node Form
	Read_Dtc				ReadDtc;
	HVACFrame*				hvacFrame;
	HWND					hvachand;
	APAFrame*               apaframe;
	HWND					apahand;
	//APAForm                 apaFunc;
	bool					MFCDestory;				//Flag: Destroy MFC		
	UINT					EnterDiagnostic;
	bool					dtc_command; 
	UINT 					SWC_Num;
	bool 					Init15765;
	afx_msg void			OnTimer(UINT_PTR nIDEvent);
	afx_msg void			OnClose();

	int						FUClass40[12];
	int						FUClass44[14];
	int						FUClass41[10];
	int						FUClass42[11];
	int						FUClass43[3];
	int						FUClass47[1];
	int						FUClass48[2];
	int						FUClass45[7];
// Dialog Data
	enum { IDD = IDD_PLUGINFORSAINT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();

	afx_msg HRESULT DataCallback_Event(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT DeviceCallback_Event(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT	Menu_Event(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Faceplate_Event_KeyDown(WPARAM wParam,LPARAM lParam);
	afx_msg HRESULT Faceplate_Event_KeyUp(WPARAM wParam,LPARAM lParam);
	afx_msg HRESULT Faceplate_Event_Click(WPARAM wParam,LPARAM lParam);
	afx_msg HRESULT Function_Airbag_Impact_Data(WPARAM wParam,LPARAM lParam);
	afx_msg HRESULT Function_Airbag_Status(WPARAM wParam,LPARAM lParam);
	afx_msg HRESULT Function_Antilock_Brake_and_TC_Status_HS(WPARAM wParam,LPARAM lParam);
	afx_msg HRESULT Function_Battery_Voltage(WPARAM wParam,LPARAM lParam);
	afx_msg HRESULT Function_Driver_Door_Status(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_Passenger_Door_Status_LS(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_Left_Rear_Door_Status(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_Right_Rear_Door_Status(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_Power_Mode_Info_LS(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_Chime_Active(WPARAM wParam,LPARAM lParam);
	afx_msg HRESULT Function_Chime_Command(WPARAM wParam,LPARAM lParam);
	afx_msg HRESULT Function_Display_Measurement_System_HS(WPARAM wParam,LPARAM lParam);
	afx_msg HRESULT Function_Exterior_Lighting_HS(WPARAM wParam,LPARAM lParam);
	afx_msg HRESULT Function_Outside_Air_Temperature_HS(WPARAM wParam,LPARAM lParam);
	afx_msg HRESULT Function_Park_Assistant_Rear_Status(WPARAM wParam,LPARAM lParam);
	afx_msg HRESULT Function_PPEI_Engine_Environmental_Status(WPARAM wParam,LPARAM lParam);
	afx_msg HRESULT Function_PPEI_Engine_General_Status_5(WPARAM wParam,LPARAM lParam);
	afx_msg HRESULT Function_System_Power_Mode_LS(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_Vehicle_Speed_Information(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_PPEI_VIN_Digits_10_to_17(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_VIN_Digits_2_to_9_HS(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_Steering_Wheel_Control_Switches(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_System_Power_Mode_Backup_IPC_LS(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_DTCRead_Active(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_SWC_Check(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_HVAC_DynData(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_HVAC_Event(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_HVAC_Indication(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_HVAC_Initialization(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_HVAC_FeedBack(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_DTC_Read(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_DTC_Process(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_Chime_ATS(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_ODI_Initialization(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_ODI_Action(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_MC_Read(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_MC_Process(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_PITS_Read(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_PITS_Process(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_Send_System_Power_Mode_LS(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_VNMF_LS_621_BCM(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_Engine_Information_1_LS(WPARAM wParam, LPARAM lParam);

#pragma region Message Function
	void Function_PITS_Restore();
	void Function_FUCLASS40_Initialization();
	void Function_FUCLASS44_Initialization();
	void Function_FUCLASS41_Initialization();
	void Function_FUCLASS42_Initialization();
	void Function_FUCLASS43_Initialization();
	void Function_FUCLASS47_Initialization();
	void Function_FUCLASS48_Initialization();
	void Function_FUCLASS45_Initialization();
#pragma endregion


	afx_msg HRESULT Function_FUCLASS40_ValueSetting(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_FUCLASS44_ValueSetting(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_FUCLASS41_ValueSetting(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_FUCLASS42_ValueSetting(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_FUCLASS43_ValueSetting(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_FUCLASS47_ValueSetting(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_FUCLASS48_ValueSetting(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_FUCLASS45_ValueSetting(WPARAM wParam, LPARAM lParam);
	DECLARE_MESSAGE_MAP()

	afx_msg HRESULT Function_APASpeedNotEnabled(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_APASpeed10(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_APASpeed0(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_APASpeedEnabled(WPARAM wParam, LPARAM lParam);

private:
	void timestart(int value);
	virtual void OnOK();
	virtual void OnCancel();

};
