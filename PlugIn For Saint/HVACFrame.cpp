// HVACFrame.cpp : 实现文件
//

#include "stdafx.h"
#include "PlugIn For Saint.h"
#include "HVACFrame.h"
#include "afxdialogex.h"
#include "Message Map.h"

// HVACFrame 对话框

IMPLEMENT_DYNAMIC(HVACFrame, CDialogEx)

HVACFrame::HVACFrame(CWnd* pParent /*=NULL*/)
	: CDialogEx(HVACFrame::IDD, pParent)
{
	
}

HVACFrame::~HVACFrame()
{
}

BOOL HVACFrame::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	hvacForm.Function_Initialize();
	return true;
}

void HVACFrame::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_ManagedControl(pDX,IDC_HVAC,hvacForm.Ctrl_HVAC);
}

BEGIN_MESSAGE_MAP(HVACFrame, CDialogEx)
ON_MESSAGE(MESSAGE_HVAC_ODIDATA,Function_ODIData)
ON_MESSAGE(MESSAGE_HVAC_ODIACTION,Function_ODIAction)
END_MESSAGE_MAP()

HRESULT HVACFrame::Function_ODIIndication(WPARAM wParam, LPARAM lParam)
{			

			/*Function_Reload_DataBase();
			Function_Write_DataBase(ODIIndication_ECC::FUClass::Start_Bit,ODIIndication_ECC::FUClass::Length,0x07);
			switch(lParam)
			{
				case 1:
					Function_Write_DataBase(ODIEvent_ECC::EventID::Start_Bit,ODIEvent_ECC::EventID::Length,1);
					if(hvacForm.Ctrl_HVAC.GetControl()->checkBox_Front_BlowerMode->Checked)
					{
						Function_Write_DataBase(ODIIndication_ECC::ODIIndication1::Start_Bit, ODIIndication_ECC::ODIIndication1::Length,1);
						Function_ODIEvent(0,1);
						Function_ODIData(0,1);
					}
					else
					{
						Function_Write_DataBase(ODIIndication_ECC::ODIIndication1::Start_Bit, ODIIndication_ECC::ODIIndication1::Length,0);
					}
				break;

				case 2:
					if(hvacForm.Ctrl_HVAC.GetControl()->checkBox_Front_FanSpeed->Checked)
					{
						Function_Write_DataBase(ODIIndication_ECC::ODIIndication2::Start_Bit, ODIIndication_ECC::ODIIndication2::Length,1);
						Function_ODIEvent(0,10);
						Function_ODIData(0,9);
					}
					else
					{
						Function_Write_DataBase(ODIIndication_ECC::ODIIndication2::Start_Bit, ODIIndication_ECC::ODIIndication2::Length,0);
					}
				break;

				case 3:
					if(hvacForm.Ctrl_HVAC.GetControl()->checkBox_Front_LeftSetTemp->Checked)
					{
						Function_Write_DataBase(ODIIndication_ECC::ODIIndication3::Start_Bit, ODIIndication_ECC::ODIIndication3::Length,1);
						Function_ODIEvent(0,3);
						Function_ODIData(0,3);
					}
					else
					{
						Function_Write_DataBase(ODIIndication_ECC::ODIIndication3::Start_Bit, ODIIndication_ECC::ODIIndication3::Length,0);
					}
				break;

				case 4:
					if(hvacForm.Ctrl_HVAC.GetControl()->checkBox_Front_RightSetTemp->Checked)
					{
						Function_Write_DataBase(ODIIndication_ECC::ODIIndication4::Start_Bit, ODIIndication_ECC::ODIIndication4::Length,1);
						Function_ODIEvent(0,4);
						Function_ODIData(0,4);

					}
					else
					{
						Function_Write_DataBase(ODIIndication_ECC::ODIIndication4::Start_Bit, ODIIndication_ECC::ODIIndication4::Length,0);
			        }
				break;	

				case 13:
					if(hvacForm.Ctrl_HVAC.GetControl()->checkBox_Front_ACStatus->Checked)
					{
						Function_Write_DataBase(ODIIndication_ECC::ODIIndication13::Start_Bit, ODIIndication_ECC::ODIIndication13::Length,1);
						Function_ODIData(0,12);
						Function_ODIData(0,12);
					}
					else
					{
						Function_Write_DataBase(ODIIndication_ECC::ODIIndication13::Start_Bit, ODIIndication_ECC::ODIIndication13::Length,0);
			        }
				break;
				
				case 15:
					if(hvacForm.Ctrl_HVAC.GetControl()->checkBox_Front_AirInlet->Checked)
					{
						Function_Write_DataBase(ODIIndication_ECC::ODIIndication15::Start_Bit, ODIIndication_ECC::ODIIndication15::Length,1);
						Function_ODIData(0,13);
						Function_ODIData(0,13);
					}
					else
					{
						Function_Write_DataBase(ODIIndication_ECC::ODIIndication15::Start_Bit, ODIIndication_ECC::ODIIndication15::Length,0);
			        }
				break;		
	}

	Function_Build_Command(ODIIndication_ECC::Basic::Message_ID);*/
	return 0;
}

HRESULT HVACFrame::Function_ODIData(WPARAM wParam, LPARAM lParam)
{
	Function_Reload_DataBase();
	Function_Write_DataBase(ODIDynamicData_ECC::Invalid_Data::Start_Bit,ODIDynamicData_ECC::Invalid_Data::Length,1);
	Function_Write_DataBase(ODIDynamicData_ECC::Data_Type::Start_Bit,ODIDynamicData_ECC::Data_Type::Length,0x03);
	Function_Write_DataBase(ODIDynamicData_ECC::FUClass::Start_Bit,ODIDynamicData_ECC::FUClass::Length,0x07);
	Function_Write_DataBase(ODIDynamicData_ECC::Data_ID::Start_Bit,ODIDynamicData_ECC::Data_ID::Length,lParam);
	Function_Write_DataBase(ODIDynamicData_ECC::Data_Value::Start_Bit,ODIDynamicData_ECC::Data_Value::Length,wParam);
	Function_Build_Command(ODIDynamicData_ECC::Basic::Message_ID);
	return 0;	
}

HRESULT HVACFrame::Function_ODIEvent(WPARAM wParam, LPARAM lParam)
{
	Function_Reload_DataBase();
	Function_Write_DataBase(ODIEvent_ECC::EventID::Start_Bit,ODIEvent_ECC::EventID::Length,lParam);
	Function_Write_DataBase(ODIEvent_ECC::FUClass::Start_Bit,ODIEvent_ECC::FUClass::Length,0x07);
	Function_Build_Command(ODIEvent_ECC::Basic::Message_ID);
	return 0;	
}

HRESULT HVACFrame::Function_ODIAction(WPARAM wParam, LPARAM lParam)
{
	unsigned __int8 *pData =(unsigned __int8*)wParam;
	if(pData[5]==22)
	{	
		if(hvacForm.Ctrl_HVAC.GetControl()->Bar_FanSpeed->Value>=1)
			{	hvacForm.Ctrl_HVAC.GetControl()->Bar_FanSpeed->Value-=1;
				PostMessage(MESSAGE_HVAC_ODIDATA,hvacForm.Ctrl_HVAC.GetControl()->Bar_FanSpeed->Value,2);
				PostMessage(MESSAGE_HVAC_ODIEVENT,NULL,2);
			}	
	}
	else if(pData[5]==23)
	{	
		if(hvacForm.Ctrl_HVAC.GetControl()->Bar_FanSpeed->Value<=7)
		{
			hvacForm.Ctrl_HVAC.GetControl()->Bar_FanSpeed->Value+=1;
			PostMessage(MESSAGE_HVAC_ODIDATA,hvacForm.Ctrl_HVAC.GetControl()->Bar_FanSpeed->Value,2);
			PostMessage(MESSAGE_HVAC_ODIEVENT,NULL,2);
		}
	}

	else if(pData[5]==30)
	{
		if(hvacForm.Ctrl_HVAC.GetControl()->Bar_Temp->Value<=31)
		{
			hvacForm.Ctrl_HVAC.GetControl()->Bar_Temp->Value+=1;	
			PostMessage(MESSAGE_HVAC_ODIDATA,hvacForm.Ctrl_HVAC.GetControl()->Bar_Temp->Value,3);
			PostMessage(MESSAGE_HVAC_ODIEVENT,NULL,3);
		}
	}
	else if(pData[5]==31)
	{
		if(hvacForm.Ctrl_HVAC.GetControl()->Bar_Temp->Value>=1)
		{	
			hvacForm.Ctrl_HVAC.GetControl()->Bar_Temp->Value-=1;
			PostMessage(MESSAGE_HVAC_ODIDATA,hvacForm.Ctrl_HVAC.GetControl()->Bar_Temp->Value,3);
			PostMessage(MESSAGE_HVAC_ODIEVENT,NULL,3);
		}
	}
	else if(pData[5]==32)
	{
		if(hvacForm.Ctrl_HVAC.GetControl()->Bar_Temp->Value<=31)
		{
			hvacForm.Ctrl_HVAC.GetControl()->comboBox_Temp->SelectedIndex=1;
			hvacForm.Ctrl_HVAC.GetControl()->Bar_Temp->Value+=1;
			PostMessage(MESSAGE_HVAC_ODIDATA,hvacForm.Ctrl_HVAC.GetControl()->Bar_Temp->Value,4);
			PostMessage(MESSAGE_HVAC_ODIEVENT,NULL,4);
		}
	}

	else if(pData[5]==33)
	{
		if(hvacForm.Ctrl_HVAC.GetControl()->Bar_Temp->Value>=1)
		{
			hvacForm.Ctrl_HVAC.GetControl()->comboBox_Temp->SelectedIndex=1;
			hvacForm.Ctrl_HVAC.GetControl()->Bar_Temp->Value-=1;
			PostMessage(MESSAGE_HVAC_ODIDATA,hvacForm.Ctrl_HVAC.GetControl()->Bar_Temp->Value,4);
			PostMessage(MESSAGE_HVAC_ODIEVENT,NULL,4);
		}
	}
	return 0;	
}
// HVACFrame 消息处理程序
