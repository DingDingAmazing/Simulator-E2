// DTCFRAME.cpp : 实现文件
//

#include "stdafx.h"
#include "PlugIn For Saint.h"
#include "DTCFRAME.h"
#include "afxdialogex.h"
#include <msclr/marshal.h>
using namespace System;
using namespace System::Runtime::InteropServices;
// DTCFRAME 对话框

IMPLEMENT_DYNAMIC(DTCFRAME, CDialogEx)

DTCFRAME::DTCFRAME(CWnd* pParent /*=NULL*/)
	: CDialogEx(DTCFRAME::IDD, pParent)
{
	dtc_msg.Message_ID="0248";
	dtc_msg.Lenght="03";
	dtc_msg.Command="A981";
	dtc_msg.Status.Dtc_Calibration=0;
	dtc_msg.Status.Dtc_Current=0;
	dtc_msg.Status.Dtc_History=0;
}

DTCFRAME::~DTCFRAME()
{
}

BOOL DTCFRAME::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	readDTC.Function_Initialize();
	return TRUE;
}
void DTCFRAME::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_ManagedControl(pDX,IDC_ReadDTC,readDTC.Ctrl_ReadDTC);
}


BEGIN_MESSAGE_MAP(DTCFRAME, CDialogEx)
ON_MESSAGE(MESSAGE_FACEPLATE_INDICATOR,Faceplate_Event_Indication)
ON_MESSAGE(MESSAGE_FACEPLATE_DYNAMIC,Faceplate_Event_Dynamic)
ON_MESSAGE(MESSAGE_READDTC_ACTIVE,ReadDTC_Active)
ON_MESSAGE(MESSAGE_CLEANDTC_ACTIVE,Function_DTCCLEAN_Active)
END_MESSAGE_MAP()

HRESULT DTCFRAME::ReadDTC_Active(WPARAM wParam,LPARAM lParam)
{
	dtc_feedback="";
return 0;
}
HRESULT DTCFRAME::Function_DTCCLEAN_Active(WPARAM wParam,LPARAM lParam)
{	
	CString st;
	st=" ";
	Function_Send_Command("5802480104");
	String^ str = Marshal::PtrToStringAnsi(static_cast<IntPtr>(st.GetBuffer()));
	readDTC.Ctrl_ReadDTC->textBox1->Text=str;
	return 0;
}
void DTCFRAME::Display(DTC_TABLE data)
{
	CString str1,str2,str3;
	str1.Format("%.2x",data.dtc_code_low);
	str2.Format("%.2x",data.dtc_code_high);
	str3.Format("%.2x",data.dtc_ftb);
	dtc_feedback=dtc_feedback+str1+str2+str3+"        Descrtiption: "+data.description;
	dtc_feedback=dtc_feedback+"\r\n";
	String^ str = Marshal::PtrToStringAnsi(static_cast<IntPtr>(dtc_feedback.GetBuffer()));
	readDTC.Ctrl_ReadDTC->textBox1->Text=str;
	
}
HRESULT DTCFRAME::Faceplate_Event_Indication(WPARAM wParam,LPARAM lParam)
{
	unsigned __int8 *pData =(unsigned __int8*)wParam;
	if(pData[1] == 0x06 && pData[2]==0x48 &&pData[3] !=0x07 && pData[4]!=0x71 && lParam==DIAGNOSTIC_COMMAND)
	{
		MessageBox("Enter Diagnostic Pass");
	}

	else if(pData[1] == 0x05 && pData[2]==0x48)
	{
		for(int i=0;i<31;i++)
		{
			if(pData[4]==dtc_table[i].dtc_code_low && pData[5]==dtc_table[i].dtc_code_high && pData[6]==dtc_table[i].dtc_ftb)
				{
				dtc_tb.dtc_code_low=pData[4];
				dtc_tb.dtc_code_high=pData[5];
				dtc_tb.dtc_ftb=pData[6];
				dtc_tb.description=dtc_table[i].description;
				Display(dtc_tb);
				break;
				}
		}
		
		
		//readDTC.Ctrl_ReadDTC->textBox1->Text="HELLO";
	}
return 0;
}

HRESULT DTCFRAME::Faceplate_Event_Dynamic(WPARAM wParam,LPARAM lParam)
{	
	switch(lParam)
	{
		case 1:
			if(readDTC.Ctrl_ReadDTC->checkBox1->Checked)
			dtc_msg.Status.Dtc_Calibration=1;
			else
			dtc_msg.Status.Dtc_Calibration=0;
		break;
		
		case 2:
			if(readDTC.Ctrl_ReadDTC->checkBox2->Checked)
			dtc_msg.Status.Dtc_Current=1;
			else
			dtc_msg.Status.Dtc_Current=0;
		break;
		
		case 3:
			if(readDTC.Ctrl_ReadDTC->checkBox3->Checked)
			dtc_msg.Status.Dtc_History=1;
			else
			dtc_msg.Status.Dtc_History=0;
		break;

		default:
			break;		
	}
	status_value=pow(2,0)*dtc_msg.Status.Dtc_Calibration+pow(2, 1)*dtc_msg.Status.Dtc_Current+pow(2,4)*dtc_msg.Status.Dtc_History;
	str_status.Format("%.2x",status_value);
return 0;
}
// DTCFRAME 消息处理程序
