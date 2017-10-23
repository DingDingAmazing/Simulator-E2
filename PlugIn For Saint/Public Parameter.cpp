#include "stdafx.h"
#include "Public Parameter.h"


int PublicParama::DTC_Read_Step;

#pragma region Saint Function

CSBEConnection PublicParama::EngineConnection;

CString PublicParama::CurrentDeviceList;

CString PublicParama::CurrentDeviceName;

CString PublicParama::DeviceList[MAX_DEVICES];

int PublicParama::CurrentDeviceID;

void PublicParama::InitializeConnection()
{
	if(EngineConnection.Connect("E2LB Simulator"))
	{
		//TRACE("***** Connection to engine established *****\n");
		// Register the data callback
		EngineConnection.SetDataCallback(DataCallback);
		EngineConnection.SetDeviceCallback(DeviceCallback);

	}
	else
	{
		// Failed to connect
		AfxMessageBox("Failed to connect to engine.",MB_OK|MB_ICONERROR);
	}
}

void CALLBACK PublicParama::DataCallback(int DeviceID, unsigned __int8 *pData, unsigned __int32 Length, ABS_TIMESTAMP* pAbsTimeStamp)
{
	Data_Information Infor;
	Infor.length = Length;
	Infor.time = Function_Combine_Time(pAbsTimeStamp);
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_DATA_CALLBACK,(DWORD)pData,DWORD(&Infor));
	
}

CString PublicParama::Function_Combine_Time(ABS_TIMESTAMP* pAbsTimeStamp)
{
	CString time,hour,minutes,seconds,milliseconds;
	hour.Format("%02d",pAbsTimeStamp->hours);
	minutes.Format("%02d",pAbsTimeStamp->minutes);
	seconds.Format("%02d",pAbsTimeStamp->seconds);
	milliseconds.Format("%d",pAbsTimeStamp->milliseconds);
	time = hour + ":" + minutes + ":" + seconds + "." + milliseconds;
	return time;
}

void CALLBACK PublicParama::DeviceCallback(CString Device_List)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_DEVICE_CALLBACK,(WPARAM)Device_List.GetBuffer(0),NULL);
}

void PublicParama::Function_Send_Command(CString Command)
{
	unsigned __int8 *pHexData;
	DWORD HexLen;
	Command.Remove(' ');

	if(Command.GetLength() > 0)
	{
		// Allocate space for the hex data
		pHexData = (unsigned __int8 *)malloc(Command.GetLength());
		// Convert the string to hex data
		String2Hex(Command.GetBuffer(1), pHexData, Command.GetLength(), &HexLen);
		// Send to device.
		EngineConnection.SendDataToDevice(CurrentDeviceID, pHexData, HexLen);
		// Free the allocated data	
		free(pHexData);
	}
}

#pragma endregion

#pragma region Command Function

int PublicParama::DataBase[8][8];
int PublicParama::R_DataBase[8][8];

#pragma region Reload DataBase
void PublicParama::Function_Reload_DataBase()
{
	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			DataBase[i][j] = 0;
		}
	}
}
#pragma endregion

#pragma region Reload R_DataBase
void PublicParama::Function_Reload_R_DataBase()
{
	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			R_DataBase[i][j] = 0;
		}
	}
}
#pragma endregion

#pragma region Write DataBase
void PublicParama::Function_Write_DataBase(int Start_Bit, int Length, int Value)
{
	int Signal_Data = Start_Bit / 8;
	Start_Bit = 7 - Start_Bit % 8;
	for (int i = 0; i < Length; i++)
	{
		if (Start_Bit - i >= 0)
		{
			DataBase[Signal_Data][Start_Bit - i] = Value % 2;
		}
		else if (Start_Bit - i < 0 && Start_Bit - i >= -8)
		{
			DataBase[Signal_Data - 1][Start_Bit - i + 8] = Value % 2;
		}
		else if (Start_Bit - i < -8 && Start_Bit - i >= -16)
		{
			DataBase[Signal_Data - 2][Start_Bit - i + 16] = Value % 2;
		}
		Value = Value / 2;
	}
}
#pragma endregion

#pragma region Write R_DataBase
void PublicParama::Function_Write_R_DataBase(int Start_Bit, int Length, int Value)
{
	int Signal_Data = Start_Bit / 8;
	Start_Bit = 7 - Start_Bit % 8;
	for (int i = 0; i < Length; i++)
	{
		if (Start_Bit - i >= 0)
		{
			R_DataBase[Signal_Data][Start_Bit - i] = Value % 2;
		}
		else if (Start_Bit - i < 0 && Start_Bit - i >= -8)
		{
			R_DataBase[Signal_Data - 1][Start_Bit - i + 8] = Value % 2;
		}
		else if (Start_Bit - i < -8 && Start_Bit - i >= -16)
		{
			R_DataBase[Signal_Data - 2][Start_Bit - i + 16] = Value % 2;
		}
		Value = Value / 2;
	}
}
#pragma endregion

#pragma region Build Command
void PublicParama::Function_Build_Command(int Message_Title)
{
	CString BitTemp,ByteTemp,Command,TitleTemp;
	int	i_ByteTemp;
	TitleTemp.Format(_T("%08X"),Message_Title);
	Command = "50" + TitleTemp;
	for(int i = 0; i < 8; i++)
	{
		ByteTemp = "";
		for(int j = 0; j < 8; j++)
		{
			BitTemp.Format("%d",DataBase[i][j]);
			ByteTemp += BitTemp;
		}
		i_ByteTemp = _tcstol(ByteTemp, NULL, 2);
		ByteTemp.Format(_T("%02X"),i_ByteTemp);
		Command += ByteTemp;
	}
	Function_Send_Command(Command);
}

void PublicParama::Function_Build_Command(int Message_Title, int Length)
{
	CString BitTemp, ByteTemp, Command, TitleTemp;
	int	i_ByteTemp;
	TitleTemp.Format(_T("%04X"), Message_Title);
	Command = "50" + TitleTemp;
	for (int i = 0; i < Length; i++)
	{
		ByteTemp = "";
		for (int j = 0; j < 8; j++)
		{
			BitTemp.Format("%d", DataBase[i][j]);
			ByteTemp += BitTemp;
		}
		i_ByteTemp = _tcstol(ByteTemp, NULL, 2);
		ByteTemp.Format(_T("%02X"), i_ByteTemp);
		Command += ByteTemp;
	}
	Function_Send_Command(Command);
}

void PublicParama::Function_Build_Command(int Message_Title, int ID_Length, int Data_Length)
{
	CString BitTemp, ByteTemp, Command, TitleTemp;
	int	i_ByteTemp;
	switch (ID_Length)
	{
	case 4:
		TitleTemp.Format(_T("%04X"), Message_Title);
		break;
	case 8:
		TitleTemp.Format(_T("%08X"), Message_Title);
	default:
		break;
	}
	Command = "50" + TitleTemp;
	for (int i = 0; i < Data_Length; i++)
	{
		ByteTemp = "";
		for (int j = 0; j < 8; j++)
		{
			BitTemp.Format("%d", DataBase[i][j]);
			ByteTemp += BitTemp;
		}
		i_ByteTemp = _tcstol(ByteTemp, NULL, 2);
		ByteTemp.Format(_T("%02X"), i_ByteTemp);
		Command += ByteTemp;
	}
	Function_Send_Command(Command);
}

void PublicParama::Function_Cycle_Send(int Message_Title, int Cycle_Title)
{//xiugai
	
CString BitTemp,ByteTemp,Command,TitleTemp,Timer_Command;
	Timer_Command.Format(_T("%04X"),Cycle_Title);
	Timer_Command="087000"+Timer_Command;
	
	int	i_ByteTemp;
	TitleTemp.Format(_T("%04X"),Message_Title);
	Command = Timer_Command+"58" + TitleTemp;
	for(int i = 0; i < 8; i++)
	{
		ByteTemp = "";
		for(int j = 0; j < 8; j++)
		{
			BitTemp.Format("%d",DataBase[i][j]);
			ByteTemp += BitTemp;
		}
		i_ByteTemp = _tcstol(ByteTemp, NULL, 2);
		ByteTemp.Format(_T("%02X"),i_ByteTemp);
		Command += ByteTemp;
	}
	Function_Send_Command(Command);
}

#pragma endregion

#pragma region Read R_DataBase

int PublicParama::Function_Read_R_DataBase(int Start_Bit, int Length)
{
	int Value = 0;
	int Signal_Data = Start_Bit / 8;
	Start_Bit = 7 - Start_Bit % 8;
	for (int i = 0; i < Length; i++)
	{
		if (Start_Bit - i >= 0)
		{
			if(R_DataBase[Signal_Data][Start_Bit - i] == 1)
			{
				Value = Value + pow(2,i);
			}
		}
		else if (Start_Bit - i < 0 && Start_Bit - i >= -8)
		{
			if(R_DataBase[Signal_Data - 1][Start_Bit - i + 8] == 1)
			{
				Value = Value + pow(2,i);
			}
		}
		else if (Start_Bit - i < -8 && Start_Bit - i >= -16)
		{
			if(R_DataBase[Signal_Data - 2][Start_Bit - i + 16] == 1)
			{
				Value = Value + pow(2,i);
			}
		}
	}
	return Value;
}
#pragma endregion


CString PublicParama::Function_Message_Build(int Start_Bit, int Bit, WPARAM wParam)
{
	unsigned __int8 *pData =(unsigned __int8*)wParam;
	CString Buffer;
	if(Bit > 0)
	{
		Buffer.Format("%.2X",pData[Start_Bit]);
		Buffer+=Function_Message_Build(Start_Bit + 1, Bit - 1, wParam);
		return Buffer;
	}
	else
	{
		Buffer.Format("%.2X",pData[Start_Bit]);
		return Buffer;
	}


}//Build the using Message From RX/TX

CString	PublicParama::Function_Message_SBuild(int Start_Bit, int Bit, WPARAM wParam)
{
	CString Message;
	Message = Function_Message_Build(Start_Bit, Bit, wParam);
	return Message;
}

#pragma endregion

#pragma region Normal Function

int PublicParama::pow(int x,int y)
{
	int value = 1;
	for(int i = 0; i < y; i++)
	{
		value = value * x;
	}
	return value;
}

#pragma endregion


/********************************************************************
Function: Saint2Config
--------------------------------------------------------------------
Description:

This function configures LSGMLAN when connecting to Saint2 at fist time.
When you disconnect to Saint2 and re-connent, it will configure SWCAN1 again.

********************************************************************/
void PublicParama::Saint2Config()
{
Function_Send_Command("08 87");//Time Stamp ON
Sleep(50);
Function_Send_Command("08 A3 B8 50 C0");//Disabling all vehicle buses except : B8 50 C0
Sleep(50);
Function_Send_Command("54 01 8D AF");//Set Baud to: 33,482; sample point: 85%
Sleep(50);
Function_Send_Command("54 04 02");//Set Protocol to Single Wire CAN
Sleep(50);
Function_Send_Command("C4 06 FF");//To clear the ISO 15765-2 TX Configuration
Sleep(50);
Function_Send_Command("C4 08 FF");//To clear the ISO 15765-2 RX Configuration
Sleep(50);
Function_Send_Command("08 92");//requests the SAINT2 firmware functional block version (ASCII)
Sleep(50);
Function_Send_Command("54 02 02");//Set SWCAN mode to High Voltage WakeUp Mode
Sleep(100);
Function_Send_Command("53 01 00");//keep SWCAN communication normal
Sleep(100);
Function_Send_Command("54 02 03");//Set SWCAN mode to Normal Mode
}
