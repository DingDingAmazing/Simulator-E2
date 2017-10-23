//#pragma once
#include "DtcForm.h"
#include "Public Parameter.h"

// DTCFRAME 对话框
typedef struct 
{
	UINT Dtc_Calibration;
	UINT Dtc_Current;
	UINT Dtc_History;
  
}STATUS; 

typedef struct 
{ 
  CString Message_ID;
  CString Lenght;    //4
  CString Command  ; //1
  STATUS Status; //1
}DTC_MESSAGE;

typedef struct
{
	UINT dtc_code_low;
	UINT dtc_code_high;
	UINT dtc_ftb;
	CString description;
}DTC_TABLE;

const DTC_TABLE dtc_table[31]={{0xc1,0x40,0x00,"LCW Body Control Module"},{0xc1,0x55,0x00,"LCW Instrument Panel Cluster (IPC) Control Module"},{0xc1,0x64,0x00,"LCW HVAC Control Module"},
{0xc2,0x56,0x00,"LCW Front Controls Interface Module"},{0xc0,0x20,0x00,"High Speed CAN Comm. Bus Performance"},{0xc0,0x73,0x00,"Control Module Communication Bus A Off"},{0xc0,0x74,0x00,"Control Module Communication Bus B Off"},
{0x91,0x0D,0x00,"ECU Hardware Performance - no additional information"},{0x93,0x25,0x03,"Device Power Voltage Below Threshold"},{0x93,0x25,0x07,"Device Power Voltage Above Threshold"},{0x90,0x25,0x01,"Audio Output #1 (LF) Short to Battery"},
{0x90,0x25,0x02,"Audio Output #1 (LF) Short to Ground"},{0x90,0x25,0x04,"Audio Output #1 (LF) Open Circuit"},{0x90,0x35,0x01,"Audio Output #2 (RF) Short to Battery"},{0x90,0x35,0x02,"Audio Output #2 (RF) Short to Ground"},{0x90,0x35,0x4,"Audio Output #2 (RF) Open Circuit"},
{0x90,0x45,0x01,"Audio Output #3 (LR) Short to Battery"},{0x90,-0x45,0x02,"Audio Output #3 (LR) Short to Ground"},{0x90,0x45,0x04,"Audio Output #3 (LR) Open Circuit"},{0x90,0x55,0x01,"Audio Output #4 (RR) Short to Battery"},{0x90,0x55,0x02,"Audio Output #4 (RR) Short to Ground"},
{0x90,0x55,0x04,"Audio Output #4 (RR) Open Circuit"},{0x92,0x5A,0x02,"Antenna 1 Circuit Shorted to ground"},{0x92,0x5A,0x04,"Antenna 1 Circuit Open"},{0x92,0x5A,0x0B,"Antenna 1 Circuit Current above threshold"},
{0x92,0x71,0x00,"Theft Locked"},{0x92,0x87,0x01,"Amplifier Control Signal Circuit Short to Battery "},{0x92,0x87,0x02,"Amplifier Control Signal Circuit Short to Ground"},{0x92,0x87,0x04,"Amplifier Control Signal Circuit Open "},{0xA4,0x62,0x02,"Global Positioning System (GPS) Signal Short to Ground"},
{0xA4,0x62,0x04,"Global Positioning System (GPS) Signal Open Circuit"}};
class DTCFRAME : public CDialogEx, public PublicParama
{
	DECLARE_DYNAMIC(DTCFRAME)

public:
	DTCFRAME(CWnd* pParent = NULL);   // 标准构造函数
	Read_Dtc readDTC;
	UINT status_value;
	CString str_status;
	void Display(DTC_TABLE data);
	DTC_MESSAGE dtc_msg;
	DTC_TABLE   dtc_tb;
	CString dtc_feedback;
	//virtual BOOL OnInitDialog();
	virtual ~DTCFRAME();

// 对话框数据
	enum { IDD = IDD_Diagnostic };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	afx_msg HRESULT Faceplate_Event_Indication(WPARAM wParam,LPARAM lParam);
	afx_msg HRESULT	Faceplate_Event_Dynamic(WPARAM wParam,LPARAM lParam);
	afx_msg HRESULT ReadDTC_Active(WPARAM wParam,LPARAM lParam);
	afx_msg HRESULT	Function_DTCCLEAN_Active(WPARAM wParam,LPARAM lParam);
	DECLARE_MESSAGE_MAP()

	public:
	virtual BOOL OnInitDialog();
};
