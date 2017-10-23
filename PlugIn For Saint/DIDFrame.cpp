// DIDFrame.cpp : 实现文件
//

#include "stdafx.h"
#include "PlugIn For Saint.h"
#include "DIDFrame.h"
#include "afxdialogex.h"
using namespace System;
using namespace System::Runtime::InteropServices;

// DIDFrame 对话框

IMPLEMENT_DYNAMIC(DIDFrame, CDialogEx)

DIDFrame::DIDFrame(CWnd* pParent /*=NULL*/)
	: CDialogEx(DIDFrame::IDD, pParent)
{
	read_did_counter=0;
}

DIDFrame::~DIDFrame()
{
}

void DIDFrame::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_ManagedControl(pDX,IDC_DID,readDID.Ctrl_DID);
}


BEGIN_MESSAGE_MAP(DIDFrame, CDialogEx)
ON_MESSAGE(MESSAGE_FACEPLATE_DYNAMIC,Faceplate_Event_Dynamic)
ON_MESSAGE(MESSAGE_FACEPLATE_INDICATOR,Faceplate_Event_Indication)
ON_MESSAGE(MESSAGE_READ_DID,Read_DID_Click)
END_MESSAGE_MAP()


// DIDFrame 消息处理程序

BOOL DIDFrame::OnInitDialog()
{
	
	CDialogEx::OnInitDialog();
	readDID.Function_Initialize();
	
	return true;
}
HRESULT DIDFrame::Read_DID_Click(WPARAM wParam, LPARAM lParam)
{
	read_did_counter=0;
	CString str,len;
	CString data[11];				
	str.Format("%.2x",did_Message[read_did_counter].DID_Code);
	if(read_did_counter<Read_DID_Number)
	{
		Function_Send_Command("580248021A"+str);
		read_did_counter++;
	}
	return 0;
}
HRESULT DIDFrame::Faceplate_Event_Indication(WPARAM wParam, LPARAM lParam)
{
	unsigned __int8 *pData =(unsigned __int8*)wParam;
	unsigned __int8 frame_len =(unsigned __int8)lParam;
	CString diagnostic_data="";
	did_msg="";
	for(int i=0;i<frame_len-8;i++)
	{	
		did_msg.Format("%.2x",pData[5+i]);
		diagnostic_data+=did_msg;
		diagnostic_data.MakeUpper();
	}
	String^ str = Marshal::PtrToStringAnsi(static_cast<IntPtr>(diagnostic_data.GetBuffer()));
	switch(pData[4])
	{
		case 0x05:
			readDID.Ctrl_DID->textBox1->Text=str;
			break;
		case 0x2F:
			readDID.Ctrl_DID->textBox2->Text=str;
			break;
		case 0x30:
			readDID.Ctrl_DID->textBox3->Text=str;
			break;
		case 0x31:
			readDID.Ctrl_DID->textBox4->Text=str;
			break;
		case 0x32:
			readDID.Ctrl_DID->textBox5->Text=str;
			break;
		case 0x33:
			readDID.Ctrl_DID->textBox6->Text=str;
			break;
		case 0x34:
			readDID.Ctrl_DID->textBox7->Text=str;
			break;
		case 0x35:
			readDID.Ctrl_DID->textBox8->Text=str;
			break;	
		case 0x51:
			readDID.Ctrl_DID->textBox9->Text=str;
			break;
		case 0x70:
			readDID.Ctrl_DID->textBox10->Text=str;
			break;	
		case 0x72:
			readDID.Ctrl_DID->textBox11->Text=str;
			break;
		case 0x73:
			readDID.Ctrl_DID->textBox12->Text=str;
			break;
		case 0x74:
			readDID.Ctrl_DID->textBox13->Text=str;
			break;
		case 0x99:
			readDID.Ctrl_DID->textBox14->Text=str;
			break;
		case 0xA0:
			readDID.Ctrl_DID->textBox15->Text=str;
			break;
		case 0xB0:
			readDID.Ctrl_DID->textBox16->Text=str;
			break;
		case 0xB4:
			readDID.Ctrl_DID->textBox17->Text=str;
			break;
		case 0xC0:
			readDID.Ctrl_DID->textBox18->Text=str;
			break;
		case 0xC1:
			readDID.Ctrl_DID->textBox19->Text=str;
			break;
		case 0xC2:
			readDID.Ctrl_DID->textBox20->Text=str;
			break;
		case 0xC3:
			readDID.Ctrl_DID->textBox21->Text=str;
			break;
		case 0xC4:
			readDID.Ctrl_DID->textBox22->Text=str;
			break;
		case 0xC5:
			readDID.Ctrl_DID->textBox23->Text=str;
			break;
		case 0xC6:
			readDID.Ctrl_DID->textBox24->Text=str;
			break;
		case 0xC7:
			readDID.Ctrl_DID->textBox25->Text=str;
			break;
		case 0xC8:
			readDID.Ctrl_DID->textBox26->Text=str;
			break;
		case 0xC9:
			readDID.Ctrl_DID->textBox27->Text=str;
			break;
		case 0xCA:
			readDID.Ctrl_DID->textBox28->Text=str;
			break;
		case 0xCB:
			readDID.Ctrl_DID->textBox29->Text=str;
			break;
		case 0xCC:
			readDID.Ctrl_DID->textBox30->Text=str;
			break;
		case 0xD0:
			readDID.Ctrl_DID->textBox31->Text=str;
			break;
		case 0xD1:
			readDID.Ctrl_DID->textBox32->Text=str;
			break;
		case 0xD2:
			readDID.Ctrl_DID->textBox33->Text=str;
			break;
		case 0xD3:
			readDID.Ctrl_DID->textBox34->Text=str;
			break;
		case 0xD4:
			readDID.Ctrl_DID->textBox35->Text=str;
			break;
		case 0xD5:
			readDID.Ctrl_DID->textBox36->Text=str;
			break;
		case 0xD6:
			readDID.Ctrl_DID->textBox37->Text=str;
			break;	
		case 0xD7:
			readDID.Ctrl_DID->textBox38->Text=str;
			break;
		case 0xD8:
			readDID.Ctrl_DID->textBox39->Text=str;
			break;
		case 0xD9:
			readDID.Ctrl_DID->textBox40->Text=str;
			break;
		case 0xDA:
			readDID.Ctrl_DID->textBox41->Text=str;
			break;
		case 0xDB:
			readDID.Ctrl_DID->textBox42->Text=str;
			break;
		case 0xDC:
			readDID.Ctrl_DID->textBox43->Text=str;
			break;
		case 0xDD:
			readDID.Ctrl_DID->textBox44->Text=str;
			break;
		case 0xDE:
			readDID.Ctrl_DID->textBox45->Text=str;
			break;		
	}
	return 0;
}
HRESULT DIDFrame::Faceplate_Event_Dynamic(WPARAM wParam, LPARAM lParam)
{	CString str,len;
	CString data[11];				
	if(lParam==0)
	{	
		str.Format("%.2x",did_Message[read_did_counter].DID_Code);
		if(read_did_counter<Read_DID_Number)
		{
		Function_Send_Command("580248021A"+str);
		read_did_counter++;
		}
	}

	else if(lParam==1)
	{
		data[0]=readDID.Ctrl_DID->textBox46->Text;
		data[1]=readDID.Ctrl_DID->textBox47->Text;
		data[2]=readDID.Ctrl_DID->textBox48->Text;
		data[3]=readDID.Ctrl_DID->textBox49->Text;
		data[4]=readDID.Ctrl_DID->textBox50->Text;
		data[5]=readDID.Ctrl_DID->textBox51->Text;
		data[6]=readDID.Ctrl_DID->textBox52->Text;
		data[7]=readDID.Ctrl_DID->textBox53->Text;
		data[8]=readDID.Ctrl_DID->textBox54->Text;
		data[9]=readDID.Ctrl_DID->textBox55->Text;
		data[10]=readDID.Ctrl_DID->textBox56->Text;
		for(int i=0;i<Write_DID_Number;i++)
		{
		str.Format("%.2x",w_did_Message[i].DID_Code);
		len.Format("%.2x",data[i].GetLength()/2+2);
		Function_Send_Command("580248"+len+"3B"+str+data[i]);
		Sleep(200);
		}
	}
	return 0;
}


