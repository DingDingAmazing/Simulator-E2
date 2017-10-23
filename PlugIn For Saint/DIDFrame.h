#include "ReadDID.h"
#include "Public Parameter.h"
#define   Read_DID_Number 				45
#define   Write_DID_Number				11
#pragma once


// DIDFrame 对话框
typedef struct
{
	UINT DID_Code;
	CString DID_Description;
}DID_MESSAGE;

const DID_MESSAGE did_Message[Read_DID_Number]={{0x05,"DTC ignition cycle"},	  					{0x2F,"did_vin_2_17",},         							{0x30,"did_localtimedayhours"}, 						{0x31,"did_localtimedayminutes"},
										  {0x32,"did_localtimedayseconds"},							{0x33,"did_localcalendaryear"},							{0x34,"did_localcalendarmonth"},						{0x35,"did_localcalendarday"},
								 		  {0x51,"Radio Preset Storage – Driver Unknown"},			{0x70,"LANGUAGE_DEFAULT"},	   							{0x72,"ECU Hardware Level and Index"},					{0x73,"SoftwareModule 11"},
								          {0x74,"SoftwareModule 11 Alpha Code"},						{0x99,"ProgrammingDate "},	   							{0xA0,"did_read_mec_counter"},							{0xB0,"ECUDiagnosticAddress "},
								          {0xB4,"Manufacturing Traceability Characters"},			{0xC0,"SoftwareModuleIdentifier (SWMI) Boot SW"},		{0xC1,"SoftwareModuleIdentifier (SWMI) Application SW"},{0xC2,"SoftwareModuleIdentifier (SWMI) Application SW"},
								 		  {0xC3,"SoftwareModuleIdentifier (SWMI) Application SW"},	{0xC4,"SoftwareModuleIdentifier (SWMI) Application SW"},{0xC5,"SoftwareModuleIdentifier (SWMI) Application SW"},{0xC6,"SoftwareModuleIdentifier (SWMI) Application SW"},
								          {0xC7,"SoftwareModuleIdentifier (SWMI) Application SW"},	{0xC8,"SoftwareModuleIdentifier (SWMI) Application SW"},{0xC9,"SoftwareModuleIdentifier (SWMI) Application SW"},{0xCA,"SoftwareModuleIdentifier (SWMI) Application SW"},
								          {0xCB,"EndModelPartNumber"},								{0xCC,"BaseModelPartNumber"},							{0xD0,"BootSoftwarePartNumberAlphaCode"},				{0xD1,"SoftwareModuleIdentifierAlphaCode (SWMIAC)"},
								          {0xD2,"SoftwareModuleIdentifierAlphaCode (SWMIAC)"},		{0xD3,"SoftwareModuleIdentifierAlphaCode (SWMIAC)"},	{0xD4,"SoftwareModuleIdentifierAlphaCode (SWMIAC)"},	{0xD5,"SoftwareModuleIdentifierAlphaCode (SWMIAC)"},
								          {0xD6,"SoftwareModuleIdentifierAlphaCode (SWMIAC)"},		{0xD7,"SoftwareModuleIdentifierAlphaCode (SWMIAC)"},	{0xD8,"SoftwareModuleIdentifierAlphaCode (SWMIAC)"},	{0xD9,"SoftwareModuleIdentifierAlphaCode (SWMIAC)"},
								          {0xDA,"SoftwareModuleIdentifierAlphaCode (SWMIAC)"},		{0xDB,"EndModelPartNumberAlphaCode"},					{0xDC,"BaseModelPartNumberAlphaCode"},					{0xDD,"SoftwareModuleIdentifierDataIdentifiers (SWMIDID)"},
								          {0xDE,"GMLAN Identification Data"}}; 
const DID_MESSAGE	w_did_Message[11]=	  {{0x05,"DTC ignition cycle"},	  	{0x30,"did_localtimedayhours"}, {0x31,"did_localtimedayminutes"},
										   {0x32,"did_localtimedayseconds"},{0x33,"did_localcalendaryear"},	{0x34,"did_localcalendarmonth"},{0x35,"did_localcalendarday"},
										   {0x51,"Radio Preset Storage – Driver Unknown"},			{0x70,"LANGUAGE_DEFAULT"},{0x99,"ProgrammingDate "},	{0xA0,"did_read_mec_counter"}  };
class DIDFrame : public CDialogEx,public PublicParama
{
	DECLARE_DYNAMIC(DIDFrame)

public:
	DIDFrame(CWnd* pParent = NULL);   // 标准构造函数
	ReadDID readDID;
	virtual ~DIDFrame();
	HANDLE DID_Event;
	CString did_msg;
	UINT frame_counter;
	UINT mul_frame_length;
	UINT consecuitve_mount;
	CString mul_frame;
	void show_data(CString data);
	PublicParama publicParama;
	int read_did_counter;
// 对话框数据
	enum { IDD = IDD_DID };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	
	DECLARE_MESSAGE_MAP()

	public:
	virtual BOOL OnInitDialog();
	afx_msg HRESULT Faceplate_Event_Dynamic(WPARAM wParam,LPARAM lParam);
	afx_msg HRESULT Faceplate_Event_Indication(WPARAM wParam,LPARAM lParam);
	afx_msg HRESULT	Read_DID_Click(WPARAM wParam,LPARAM lParam);
};
