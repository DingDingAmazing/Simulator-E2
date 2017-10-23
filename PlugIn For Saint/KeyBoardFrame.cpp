// KeyBoardFrame.cpp : implementation file
//

#include "stdafx.h"
#include "PlugIn For Saint.h"
#include "KeyBoardFrame.h"
#include "afxdialogex.h"
#include "Message Map.h"


// KeyBoardFrame dialog

IMPLEMENT_DYNAMIC(KeyBoardFrame, CDialogEx)

KeyBoardFrame::KeyBoardFrame(CWnd* pParent /*=NULL*/)
	: CDialogEx(KeyBoardFrame::IDD, pParent)
{

}

KeyBoardFrame::~KeyBoardFrame()
{

}

void KeyBoardFrame::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_ManagedControl(pDX,IDC_KEYBOARD,KeyBoardFunc.Ctrl_KeyBoardForm);
}


BEGIN_MESSAGE_MAP(KeyBoardFrame, CDialogEx)
	ON_MESSAGE(MESSAGE_FACEPLATE_INDICATOR,Faceplate_Event_Indication)
	ON_MESSAGE(MESSAGE_FACEPLATE_DYNAMIC,Faceplate_Event_Dynamic)
END_MESSAGE_MAP()


// KeyBoardFrame message handlers


void KeyBoardFrame::OnOK()
{

}


BOOL KeyBoardFrame::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	KeyBoardFunc.Function_Initialize();
	// TODO:  Add extra initialization here

	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}



void KeyBoardFrame::OnCancel()
{
	
	// TODO: Add your specialized code here and/or call the base class
	this->ShowWindow(HIDE_WINDOW);
}


HRESULT KeyBoardFrame::Faceplate_Event_Indication(WPARAM wParam,LPARAM lParam)
{
	unsigned __int8 *pData =(unsigned __int8*)wParam;
	if(pData[3] == 0x80)
	{
		Function_Reload_R_DataBase();
		Function_Write_R_DataBase(0,8,pData[3]);
		Function_Write_R_DataBase(8,8,pData[4]);
		Function_Write_R_DataBase(16,8,pData[5]);
		Function_Write_R_DataBase(24,8,pData[6]);
		Function_Write_R_DataBase(32,8,pData[7]);
		Function_Write_R_DataBase(40,8,pData[8]);
		Function_Write_R_DataBase(48,8,pData[9]);
		Function_Write_R_DataBase(56,8,pData[10]);
		//All Indication On
		if(Function_Read_R_DataBase(ODIIndication_Centerstack::ODII_ODIInd1::Start_Bit,
													ODIIndication_Centerstack::ODII_ODIInd1::Length))
		{
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_All_T->Checked = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_All_T->Enabled = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_All_F->Checked = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_All_F->Enabled = FALSE;
			#pragma region Indication 1
			if(Function_Read_R_DataBase(ODIIndication_Centerstack::ODII_ODIInd2::Start_Bit,
														ODIIndication_Centerstack::ODII_ODIInd2::Length))
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_1_T->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_1_T->Enabled = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_1_F->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_1_F->Enabled = FALSE;
			}
			else
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_1_T->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_1_T->Enabled = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_1_F->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_1_F->Enabled = TRUE;
			}
			#pragma endregion

			#pragma region Indication 2
			if(Function_Read_R_DataBase(ODIIndication_Centerstack::ODII_ODIInd3::Start_Bit,
														ODIIndication_Centerstack::ODII_ODIInd3::Length))
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_2_T->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_2_T->Enabled = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_2_F->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_2_F->Enabled = FALSE;
			}
			else
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_2_T->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_2_T->Enabled = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_2_F->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_2_F->Enabled = TRUE;
			}
			#pragma endregion

			#pragma region Indication 3
			if(Function_Read_R_DataBase(ODIIndication_Centerstack::ODII_ODIInd4::Start_Bit,
														ODIIndication_Centerstack::ODII_ODIInd4::Length))
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_3_T->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_3_T->Enabled = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_3_F->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_3_F->Enabled = FALSE;
			}
			else
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_3_T->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_3_T->Enabled = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_3_F->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_3_F->Enabled = TRUE;
			}
			#pragma endregion

			#pragma region Indication 4
			if(Function_Read_R_DataBase(ODIIndication_Centerstack::ODII_ODIInd5::Start_Bit,
														ODIIndication_Centerstack::ODII_ODIInd5::Length))
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_4_T->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_4_T->Enabled = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_4_F->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_4_F->Enabled = FALSE;
			}
			else
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_4_T->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_4_T->Enabled = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_4_F->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_4_F->Enabled = TRUE;
			}
			#pragma endregion

			#pragma region Indication 5
			if(Function_Read_R_DataBase(ODIIndication_Centerstack::ODII_ODIInd6::Start_Bit,
														ODIIndication_Centerstack::ODII_ODIInd6::Length))
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_5_T->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_5_T->Enabled = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_5_F->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_5_F->Enabled = FALSE;
			}
			else
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_5_T->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_5_T->Enabled = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_5_F->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_5_F->Enabled = TRUE;
			}
			#pragma endregion

			#pragma region Indication 6
			if(Function_Read_R_DataBase(ODIIndication_Centerstack::ODII_ODIInd7::Start_Bit,
														ODIIndication_Centerstack::ODII_ODIInd7::Length))
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_6_T->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_6_T->Enabled = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_6_F->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_6_F->Enabled = FALSE;
			}
			else
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_6_T->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_6_T->Enabled = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_6_F->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_6_F->Enabled = TRUE;
			}
			#pragma endregion

			#pragma region Indication 7
			if(Function_Read_R_DataBase(ODIIndication_Centerstack::ODII_ODIInd8::Start_Bit,
														ODIIndication_Centerstack::ODII_ODIInd8::Length))
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_7_T->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_7_T->Enabled = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_7_F->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_7_F->Enabled = FALSE;
			}
			else
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_7_T->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_7_T->Enabled = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_7_F->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_7_F->Enabled = TRUE;
			}
			#pragma endregion

			#pragma region Indication 8
			if(Function_Read_R_DataBase(ODIIndication_Centerstack::ODII_ODIInd9::Start_Bit,
														ODIIndication_Centerstack::ODII_ODIInd9::Length))
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_8_T->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_8_T->Enabled = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_8_F->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_8_F->Enabled = FALSE;
			}
			else
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_8_T->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_8_T->Enabled = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_8_F->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_8_F->Enabled = TRUE;
			}
			#pragma endregion

			#pragma region Indication 9
			if(Function_Read_R_DataBase(ODIIndication_Centerstack::ODII_ODIInd10::Start_Bit,
				ODIIndication_Centerstack::ODII_ODIInd10::Length))
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_9_T->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_9_T->Enabled = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_9_F->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_9_F->Enabled = FALSE;
			}
			else
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_9_T->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_9_T->Enabled = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_9_F->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_9_F->Enabled = TRUE;
			}
			#pragma endregion

			#pragma region Indication 10
			if(Function_Read_R_DataBase(ODIIndication_Centerstack::ODII_ODIInd11::Start_Bit,
														ODIIndication_Centerstack::ODII_ODIInd11::Length))
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_10_T->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_10_T->Enabled = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_10_F->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_10_F->Enabled = FALSE;
			}
			else
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_10_T->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_10_T->Enabled = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_10_F->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_10_F->Enabled = TRUE;
			}
			#pragma endregion
		}
		else	//All indication OFF
		{
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_All_T->Checked = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_All_T->Enabled = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_All_F->Checked = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_All_F->Enabled = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_1_T->Checked = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_1_T->Enabled = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_1_F->Checked = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_1_F->Enabled = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_2_T->Checked = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_2_T->Enabled = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_2_F->Checked = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_2_F->Enabled = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_3_T->Checked = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_3_T->Enabled = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_3_F->Checked = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_3_F->Enabled = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_4_T->Checked = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_4_T->Enabled = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_4_F->Checked = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_4_F->Enabled = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_5_T->Checked = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_5_T->Enabled = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_5_F->Checked = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_5_F->Enabled = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_6_T->Checked = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_6_T->Enabled = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_6_F->Checked = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_6_F->Enabled = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_7_T->Checked = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_7_T->Enabled = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_7_F->Checked = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_7_F->Enabled = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_8_T->Checked = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_8_T->Enabled = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_8_F->Checked = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_8_F->Enabled = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_9_T->Checked = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_9_T->Enabled = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_9_F->Checked = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_9_F->Enabled = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_10_T->Checked = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_10_T->Enabled = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_10_F->Checked = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->I_10_F->Enabled = TRUE;
		}
	}
	return 0;
}

HRESULT KeyBoardFrame::Faceplate_Event_Dynamic(WPARAM wParam,LPARAM lParam)
{
	unsigned __int8 *pData =(unsigned __int8*)wParam;
	if(pData[10] == 0x80)
	{
		Function_Reload_R_DataBase();
		Function_Write_R_DataBase(0,7,pData[3]);
		Function_Write_R_DataBase(8,7,pData[4]);
		Function_Write_R_DataBase(16,7,pData[5]);
		Function_Write_R_DataBase(24,7,pData[6]);
		Function_Write_R_DataBase(32,7,pData[7]);
		Function_Write_R_DataBase(40,7,pData[8]);
		Function_Write_R_DataBase(48,7,pData[9]);
		Function_Write_R_DataBase(56,7,pData[10]);
		//Dynamic All True
		if(Function_Read_R_DataBase(ODIEnumDynamicData_Centerstack::ODIEDD_Data1Value::Start_Bit,1))
		{
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_All_T->Checked = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_All_T->Enabled = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_All_F->Checked = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_All_F->Enabled = FALSE;

			#pragma region Dynamic 1
			if(Function_Read_R_DataBase(ODIEnumDynamicData_Centerstack::ODIEDD_Data2Value::Start_Bit,1))
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_1_T->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_1_T->Enabled = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_1_F->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_1_F->Enabled = FALSE;
			}
			else
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_1_T->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_1_T->Enabled = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_1_F->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_1_F->Enabled = TRUE;
			}
			#pragma endregion

			#pragma region Dynamic 2
			if(Function_Read_R_DataBase(ODIEnumDynamicData_Centerstack::ODIEDD_Data3Value::Start_Bit,1))
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_2_T->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_2_T->Enabled = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_2_F->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_2_F->Enabled = FALSE;
			}
			else
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_2_T->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_2_T->Enabled = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_2_F->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_2_F->Enabled = TRUE;
			}
			#pragma endregion

			#pragma region Dynamic 3
			if(Function_Read_R_DataBase(ODIEnumDynamicData_Centerstack::ODIEDD_Data4Value::Start_Bit,1))
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_3_T->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_3_T->Enabled = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_3_F->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_3_F->Enabled = FALSE;
			}
			else
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_3_T->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_3_T->Enabled = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_3_F->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_3_F->Enabled = TRUE;
			}
			#pragma endregion

			#pragma region Dynamic 4
			if(Function_Read_R_DataBase(ODIEnumDynamicData_Centerstack::ODIEDD_Data5Value::Start_Bit,1))
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_4_T->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_4_T->Enabled = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_4_F->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_4_F->Enabled = FALSE;
			}
			else
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_4_T->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_4_T->Enabled = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_4_F->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_4_F->Enabled = TRUE;
			}
			#pragma endregion

			#pragma region Dynamic 5
			if(Function_Read_R_DataBase(ODIEnumDynamicData_Centerstack::ODIEDD_Data6Value::Start_Bit,1))
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_5_T->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_5_T->Enabled = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_5_F->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_5_F->Enabled = FALSE;
			}
			else
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_5_T->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_5_T->Enabled = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_5_F->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_5_F->Enabled = TRUE;
			}
			#pragma endregion

			#pragma region Dynamic 6
			if(Function_Read_R_DataBase(ODIEnumDynamicData_Centerstack::ODIEDD_Data7Value::Start_Bit,1))
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_6_T->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_6_T->Enabled = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_6_F->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_6_F->Enabled = FALSE;
			}
			else
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_6_T->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_6_T->Enabled = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_6_F->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_6_F->Enabled = TRUE;
			}
			#pragma endregion

			#pragma region Dynamic 7
			if(Function_Read_R_DataBase(ODIEnumDynamicData_Centerstack::ODIEDD_Data8Value::Start_Bit,1))
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_7_T->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_7_T->Enabled = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_7_F->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_7_F->Enabled = FALSE;
			}
			else
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_7_T->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_7_T->Enabled = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_7_F->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_7_F->Enabled = TRUE;
			}
			#pragma endregion

			#pragma region Dynamic 8
			if(Function_Read_R_DataBase(ODIEnumDynamicData_Centerstack::ODIEDD_Data9Value::Start_Bit,1))
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_8_T->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_8_T->Enabled = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_8_F->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_8_F->Enabled = FALSE;
			}
			else
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_8_T->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_8_T->Enabled = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_8_F->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_8_F->Enabled = TRUE;
			}
			#pragma endregion

			#pragma region Dynamic 9
			if(Function_Read_R_DataBase(ODIEnumDynamicData_Centerstack::ODIEDD_Data10Value::Start_Bit,1))
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_9_T->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_9_T->Enabled = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_9_F->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_9_F->Enabled = FALSE;
			}
			else
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_9_T->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_9_T->Enabled = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_9_F->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_9_F->Enabled = TRUE;
			}
			#pragma endregion

			#pragma region Dynamic 10
			if(Function_Read_R_DataBase(ODIEnumDynamicData_Centerstack::ODIEDD_Data11Value::Start_Bit,1))
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_10_T->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_10_T->Enabled = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_10_F->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_10_F->Enabled = FALSE;
			}
			else
			{
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_10_T->Checked = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_10_T->Enabled = FALSE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_10_F->Checked = TRUE;
				KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_10_F->Enabled = TRUE;
			}
			#pragma endregion

		}
		else//False
		{
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_All_T->Checked = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_All_T->Enabled = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_All_F->Checked = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_All_F->Enabled = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_1_T->Checked = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_1_T->Enabled = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_1_F->Checked = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_1_F->Enabled = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_2_T->Checked = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_2_T->Enabled = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_2_F->Checked = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_2_F->Enabled = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_3_T->Checked = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_3_T->Enabled = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_3_F->Checked = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_3_F->Enabled = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_4_T->Checked = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_4_T->Enabled = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_4_F->Checked = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_4_F->Enabled = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_5_T->Checked = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_5_T->Enabled = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_5_F->Checked = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_5_F->Enabled = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_6_T->Checked = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_6_T->Enabled = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_6_F->Checked = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_6_F->Enabled = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_7_T->Checked = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_7_T->Enabled = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_7_F->Checked = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_7_F->Enabled = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_8_T->Checked = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_8_T->Enabled = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_8_F->Checked = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_8_F->Enabled = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_9_T->Checked = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_9_T->Enabled = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_9_F->Checked = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_9_F->Enabled = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_10_T->Checked = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_10_T->Enabled = FALSE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_10_F->Checked = TRUE;
			KeyBoardFunc.Ctrl_KeyBoardForm.GetControl()->D_10_F->Enabled = TRUE;
		}
	}
	return 0;
}