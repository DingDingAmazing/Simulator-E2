
// PlugIn For SaintDlg.cpp : implementation file
//

#include "stdafx.h"
#include "PlugIn For Saint.h"
#include "PlugIn For SaintDlg.h"
#include "Public Parameter.h"
#include "Message Map.h"
#include "afxdialogex.h"
#include "DtcForm.h"
#include "DIDFrame.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif
CPlugInForSaintDlg *pMainDlg;

bool Flag_Wake = false;
bool Flag_ODI = false;
bool Flag_MCheckSum = false;
bool Flag_PITs = false;
int	Count_MCheckStep = 0;
int Get_Count = 0;
int PITS_Step = 0;
int PITS_Stage = 0;
int PITS_Length = 0;
int Length_Buff = 0;
CString PITS_Check = "";
CString PITS_Value = "";
// CPlugInForSaintDlg dialog

CPlugInForSaintDlg::CPlugInForSaintDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CPlugInForSaintDlg::IDD, pParent)
{
	Init15765=false;
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME2);
	pMainDlg = this;
}

CPlugInForSaintDlg::~CPlugInForSaintDlg()
{

}

void CPlugInForSaintDlg::OnOK()
{

}

void CPlugInForSaintDlg::OnCancel()
{
	// TODO: Add your specialized code here and/or call the base class
	MFCDestory = true;
	EngineConnection.Disconnect();
	CDialogEx::OnCancel();
}

void CPlugInForSaintDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_ManagedControl(pDX,IDC_MAIN,FormFunc.Ctrl_MainForm);
	DDX_ManagedControl(pDX,IDC_MENU,FormFunc.Ctrl_MenuForm);
	DDX_ManagedControl(pDX,IDC_VEHINFO,FormFunc.Ctrl_VehInfoForm);
	DDX_ManagedControl(pDX,IDC_SETTING,FormFunc.Ctrl_SettingForm);
	DDX_ManagedControl(pDX,IDC_CHIME,FormFunc.Ctrl_ChimeForm);
	DDX_ManagedControl(pDX,IDC_NODE,NodeFunc.Ctrl_NodeForm);
	DDX_ManagedControl(pDX,IDC_PARKASSISTANT,FormFunc.Ctrl_ParkAssForm);
	DDX_ManagedControl(pDX,IDC_AIRCON,FormFunc.Ctrl_AirConForm);
	DDX_ManagedControl(pDX,IDC_DTC,FormFunc.Ctrl_DTCForm);
	DDX_ManagedControl(pDX,IDC_MCHECK, FormFunc.Ctrl_MCheckForm);
	//DDX_ManagedControl(pDX,IDC_DTC,ReadDtc.Ctrl_ReadDTC);
}

BEGIN_MESSAGE_MAP(CPlugInForSaintDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_MESSAGE(MESSAGE_DATA_CALLBACK, DataCallback_Event)
	ON_MESSAGE(MESSAGE_DEVICE_CALLBACK, DeviceCallback_Event)
	ON_MESSAGE(MESSAGE_MENU_CONTROL, Menu_Event)
	ON_MESSAGE(MESSAGE_FACEPLATE_KEYDOWN,Faceplate_Event_KeyDown)
	ON_MESSAGE(MESSAGE_FACEPLATE_KEYUP,Faceplate_Event_KeyUp)
	ON_MESSAGE(MESSAGE_FACEPLATE_CLICK,Faceplate_Event_Click)
	ON_MESSAGE(MESSAGE_AIRBAG_IMPACT_DATA,Function_Airbag_Impact_Data)
	ON_MESSAGE(MESSAGE_AIRBAG_STATUS,Function_Airbag_Status)
	ON_MESSAGE(MESSAGE_ANTILOCK_BRAKE_AND_TC_STATUS_HS,Function_Antilock_Brake_and_TC_Status_HS)
	ON_MESSAGE(MESSAGE_BATTERY_VOLTAGE,Function_Battery_Voltage)
	ON_MESSAGE(MESSAGE_Driver_Door_Status, Function_Driver_Door_Status)
	ON_MESSAGE(MESSAGE_Passenger_Door_Status_LS, Function_Passenger_Door_Status_LS)
	ON_MESSAGE(MESSAGE_Left_Rear_Door_Status, Function_Left_Rear_Door_Status)
	ON_MESSAGE(MESSAGE_Right_Rear_Door_Status, Function_Right_Rear_Door_Status)
	ON_MESSAGE(MESSAGE_Power_Mode_Info_LS, Function_Power_Mode_Info_LS)
	ON_MESSAGE(MESSAGE_CHIME_ACTIVE,Function_Chime_Active)
	ON_MESSAGE(MESSAGE_CHIME_COMMAND,Function_Chime_Command)
	ON_MESSAGE(MESSAGE_DISPLAY_MEASUREMENT_SYSTEM_HS,Function_Display_Measurement_System_HS)
	ON_MESSAGE(MESSAGE_EXTERIOR_LIGHTING_HS,Function_Exterior_Lighting_HS)
	ON_MESSAGE(MESSAGE_OUTSIDE_AIR_TEMPERATURE_HS,Function_Outside_Air_Temperature_HS)
	ON_MESSAGE(MESSAGE_PARK_ASSISTANT_REAR_STATUS,Function_Park_Assistant_Rear_Status)
	ON_MESSAGE(MESSAGE_PPEI_ENGINE_ENVIRONMENTAL_STATUS,Function_PPEI_Engine_Environmental_Status)
	ON_MESSAGE(MESSAGE_PPEI_ENGINE_GENERAL_STATUS_5,Function_PPEI_Engine_General_Status_5)
	ON_MESSAGE(MESSAGE_System_Power_Mode_LS, Function_System_Power_Mode_LS)
	ON_MESSAGE(MESSAGE_PPEI_VIN_DIGITS_10_TO_17,Function_PPEI_VIN_Digits_10_to_17)
	ON_MESSAGE(MESSAGE_VIN_DIGITS_2_TO_9_HS,Function_VIN_Digits_2_to_9_HS)
	ON_MESSAGE(MESSAGE_STEERING_WHEEL_CONTROL_SWITCHES,Function_Steering_Wheel_Control_Switches)
	ON_MESSAGE(MESSAGE_SYSTEM_POWER_MODE_BACKUP_IPC_LS,Function_System_Power_Mode_Backup_IPC_LS)
	ON_MESSAGE(MESSAGE_READDTC_ACTIVE,Function_DTCRead_Active)
	ON_MESSAGE(MESSAGE_SWC_CHECK,Function_SWC_Check)
	ON_MESSAGE(MESSAGE_HVAC_ODIDYNDATA,Function_HVAC_DynData)
	ON_MESSAGE(MESSAGE_HVAC_ODIEVENT,Function_HVAC_Event)
	ON_MESSAGE(MESSAGE_HVAC_ODIINDICATION,Function_HVAC_Indication)
	ON_MESSAGE(MESSAGE_HVAC_INITIALIZE,Function_HVAC_Initialization)
	ON_MESSAGE(MESSAGE_HVAC_FEEDBACK,Function_HVAC_FeedBack)
	ON_MESSAGE(MESSAGE_DTC_READ,Function_DTC_Read)
	ON_MESSAGE(MESSAGE_DTC_PROCESS,Function_DTC_Process)
	ON_MESSAGE(MESSAGE_CHIME_ATS,Function_Chime_ATS)
	ON_MESSAGE(MESSAGE_ODI_INITIALIZE,Function_ODI_Initialization)
	ON_MESSAGE(MESSAGE_ODI_ACTION,Function_ODI_Action)
	ON_MESSAGE(MESSAGE_MC_READ,Function_MC_Read)
	ON_MESSAGE(MESSAGE_MC_PROCESS,Function_MC_Process)
	ON_MESSAGE(MESSAGE_PITS_READ,Function_PITS_Read)
	ON_MESSAGE(MESSAGE_PITS_PROCESS,Function_PITS_Process)

	//ON_MESSAGE(MESSAGE_APASpeedNotEnabled, Function_APASpeedNotEnabled)
	ON_MESSAGE(MESSAGE_APASpeed10, Function_APASpeed10)
	ON_MESSAGE(MESSAGE_APASpeed0, Function_APASpeed0)
	//ON_MESSAGE(MESSAGE_APASpeedEnabled, Function_APASpeedEnabled)

	ON_WM_CLOSE()
	ON_WM_TIMER()
END_MESSAGE_MAP()


// CPlugInForSaintDlg message handlers

BOOL CPlugInForSaintDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	MFCDestory = false;
	EnterDiagnostic=false;
	SetWindowPos(&CWnd::wndTop,30,30,720,360,NULL);//初始化时的界面大小

	apaframe = new APAFrame();
	apaframe->Create(IDD_APA, GetDesktopWindow());//取消非模态窗口强制在最前面
	apahand = apaframe->m_hWnd;

	keyboardframe = new KeyBoardFrame();
	keyboardframe->Create(IDD_KEYBOARD_DIALOG, GetDesktopWindow());//取消非模态窗口强制在最前面
	keyboardhwnd = keyboardframe->m_hWnd;

	//SetWindowPos(&CWnd::wndTop,300,150,625,315,NULL);
	dtcframe=new DTCFRAME();
	dtcframe->Create(IDD_Diagnostic);
	dtchwnd=dtcframe->m_hWnd;
	
	didframe=new DIDFrame();
	didframe->Create(IDD_DID);
	didhand=didframe->m_hWnd;

	hvacFrame=new HVACFrame();
	hvacFrame->Create(IDD_HVAC);
	hvachand=hvacFrame->m_hWnd;
	InitializeConnection();
	
	FormFunc.Function_Initialize();

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CPlugInForSaintDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CPlugInForSaintDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

HRESULT CPlugInForSaintDlg::DataCallback_Event(WPARAM wParam, LPARAM lParam)
{
	unsigned __int8 *pData =(unsigned __int8*)wParam;
	Data_Information* Infor = (Data_Information*)lParam;
	CString Transmission;
	CString Command;
	CString str;
	str.Format("%.2x",pData[3]);
	char *pDataStr;
	if(pData[0] == 0x53 || pData[0] == 0x5B)
	{
		Transmission = "TX";
	}
	else
	{
		Transmission = "RX";
	}
	if(pData[1] == 0x05 && pData[2] == 0x7D)
	{
		::SendMessage(keyboardhwnd,MESSAGE_FACEPLATE_DYNAMIC,wParam,lParam);
	}
	if(pData[1] == 0x05 && pData[2] ==0x79)
	{
		::SendMessage(keyboardhwnd,MESSAGE_FACEPLATE_INDICATOR,wParam,lParam);
	}
	if((pData[0]==0xC9||pData[0]==0xCB) && pData[1] == 0x06 && pData[2] ==0x48)
	{	
		::SendMessage(didhand,MESSAGE_FACEPLATE_INDICATOR,wParam,Infor->length);
		if(pData[3]==0x5A)
		{
		::SendMessage(didhand,MESSAGE_FACEPLATE_DYNAMIC,wParam,0);}
	}
	else if(pData[1] == 0x05 && pData[2] ==0x48)
	{	
		::SendMessage(dtchwnd,MESSAGE_FACEPLATE_INDICATOR,wParam,DIAGNOSTIC_COMMAND);
	}
	else if(pData[1]==0x05 && pData[2]==0x77)
	{
		::SendMessage(hvachand,MESSAGE_HVAC_ODIACTION,wParam,lParam);
	}

	if(PublicParama::DTC_Read_Step != 0)
	{
		if(pData[1] == 0x05 && pData[2] == 0x48 && pData[3] == 0x81)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_DTC_PROCESS,wParam,0);
		}
	}

	//--------------------------------------------------------------------------//
	if(pData[2] == 0xAD && pData[3] == 0x60 && pData[6] == 0x07)
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_HVAC_FEEDBACK,pData[7],0);
	}

	if(pData[2] == 0xAD && pData[3] == 0x60 && pData[5] == 0x03)
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_ODI_ACTION,wParam,0);
	}

	if (pData[2] == 0xAD && pData[3] == 0x60 && pData[6] == 0x0E)
	{
		::SendMessage(apahand, MESSAGE_ODIAction_CntrStack_LS, pData[7], 0);
	}
	//-----------------------------------------------------------------------------//
	if(Flag_MCheckSum)
	{
		if((pData[1] == 0x06 && pData[2] == 0x48 && pData[3] == 0x71) || (pData[1] == 0x06 && pData[2] == 0x48 && pData[3] == 0x07 && pData[4] == 0x71))
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_MC_PROCESS,wParam,0);
		}
	}

	if(Flag_PITs)
	{
		if((pData[1] == 0x06 && pData[2] == 0x48 && pData[3] == 0x71) || (pData[1] == 0x06 && pData[2] == 0x48 && pData[3] == 0x07 && pData[4] == 0x71))
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_PITS_PROCESS,wParam,0);
		}
	}


	pDataStr = (char *)malloc((Infor->length * 2) + Infor->length + 10);
	Hex2String(pData,pDataStr,Infor->length ,true);
	free(pDataStr);
	return 0;
}

HRESULT CPlugInForSaintDlg::DeviceCallback_Event(WPARAM wParam, LPARAM lParam)
{
	CString Device_List;
	Device_List.Format("%s",wParam);
	if(!MFCDestory)
	{
		if(CurrentDeviceList != Device_List)
		{
			CurrentDeviceList = Device_List;
			FormFunc.Function_Device_Detect(Device_List);
		}
	}
	return 0;
}

HRESULT CPlugInForSaintDlg::Menu_Event(WPARAM wParam, LPARAM lParam)
{
	switch(lParam)
	{
	case 0:	//Exit Button
		OnCancel();
		break;
	case 1: //Main Button
		SetWindowPos(&CWnd::wndTop,30,30,720,360,NULL);
		FormFunc.Ctrl_MainForm->Visible = TRUE;
		FormFunc.Ctrl_VehInfoForm->Visible = FALSE;
		FormFunc.Ctrl_SettingForm->Visible = FALSE;
		FormFunc.Ctrl_ChimeForm->Visible = FALSE;
		FormFunc.Ctrl_ParkAssForm->Visible = FALSE;
		NodeFunc.Ctrl_NodeForm->Visible = FALSE;
		FormFunc.Ctrl_AirConForm->Visible = FALSE;
		FormFunc.Ctrl_DTCForm->Visible = FALSE;
		FormFunc.Ctrl_MCheckForm->Visible = FALSE;
		break;
	case 2:	//KeyBoard Button
		keyboardframe->ShowWindow(SW_SHOW);
		keyboardframe->SetWindowPos(&CWnd::wndNoTopMost,0,0,0,0, SWP_NOSIZE|SWP_NOMOVE);
		break;
	case 3://Setting Button
		SetWindowPos(&CWnd::wndTop,300,150,560,290,NULL);
		FormFunc.Ctrl_SettingForm->Visible = TRUE;
		FormFunc.Ctrl_VehInfoForm->Visible = FALSE;
		FormFunc.Ctrl_MainForm->Visible = FALSE;
		FormFunc.Ctrl_ChimeForm->Visible = FALSE;
		FormFunc.Ctrl_ParkAssForm->Visible = FALSE;
		NodeFunc.Ctrl_NodeForm->Visible = FALSE;
		FormFunc.Ctrl_AirConForm->Visible = FALSE;
		FormFunc.Ctrl_DTCForm->Visible = FALSE;
		FormFunc.Ctrl_MCheckForm->Visible = FALSE;
		break;
	case 4: //Vehicle information Button
		SetWindowPos(&CWnd::wndTop,300,150,590,530,NULL);
		FormFunc.Ctrl_VehInfoForm->Visible = TRUE;
		FormFunc.Ctrl_MainForm->Visible = FALSE;
		FormFunc.Ctrl_SettingForm->Visible = FALSE;
		FormFunc.Ctrl_ChimeForm->Visible = FALSE;
		FormFunc.Ctrl_ParkAssForm->Visible = FALSE;
		NodeFunc.Ctrl_NodeForm->Visible = FALSE;
		FormFunc.Ctrl_AirConForm->Visible = FALSE;
		FormFunc.Ctrl_DTCForm->Visible = FALSE;
		FormFunc.Ctrl_MCheckForm->Visible = FALSE;
		break;
	case 5://Chime Button
		SetWindowPos(&CWnd::wndTop,300,150,485,430,NULL);
		FormFunc.Ctrl_ChimeForm->Visible = TRUE;
		FormFunc.Ctrl_VehInfoForm->Visible = FALSE;
		FormFunc.Ctrl_MainForm->Visible = FALSE;
		FormFunc.Ctrl_SettingForm->Visible = FALSE;
		FormFunc.Ctrl_ParkAssForm->Visible = FALSE;
		NodeFunc.Ctrl_NodeForm->Visible = FALSE;
		FormFunc.Ctrl_AirConForm->Visible = FALSE;
		FormFunc.Ctrl_DTCForm->Visible = FALSE;
		FormFunc.Ctrl_MCheckForm->Visible = FALSE;
		break;
	case 6://Park Assistant Button
		SetWindowPos(&CWnd::wndTop,300,150,300,330,NULL);
		FormFunc.Ctrl_ParkAssForm->Visible = TRUE;
		FormFunc.Ctrl_ChimeForm->Visible = FALSE;
		FormFunc.Ctrl_VehInfoForm->Visible = FALSE;
		FormFunc.Ctrl_MainForm->Visible = FALSE;
		FormFunc.Ctrl_SettingForm->Visible = FALSE;
		NodeFunc.Ctrl_NodeForm->Visible = FALSE;
		FormFunc.Ctrl_AirConForm->Visible = FALSE;
		FormFunc.Ctrl_DTCForm->Visible = FALSE;
		FormFunc.Ctrl_MCheckForm->Visible = FALSE;
		break;
	case 7://Node Button
		SetWindowPos(&CWnd::wndTop,300,150,360,155,NULL);	
		NodeFunc.Ctrl_NodeForm->Visible = TRUE;
		FormFunc.Ctrl_ChimeForm->Visible = FALSE;
		FormFunc.Ctrl_VehInfoForm->Visible = FALSE;
		FormFunc.Ctrl_MainForm->Visible = FALSE;
		FormFunc.Ctrl_SettingForm->Visible = FALSE;
		FormFunc.Ctrl_ParkAssForm->Visible = FALSE;
		FormFunc.Ctrl_AirConForm->Visible = FALSE;
		FormFunc.Ctrl_DTCForm->Visible = FALSE;
		FormFunc.Ctrl_MCheckForm->Visible = FALSE;
		break;
	case 8://Diagnostic Button(DTC)
		SetWindowPos(&CWnd::wndTop,300,150,610,335,NULL);	
		FormFunc.Ctrl_DTCForm->Visible = TRUE;
		NodeFunc.Ctrl_NodeForm->Visible = FALSE;
		FormFunc.Ctrl_ChimeForm->Visible = FALSE;
		FormFunc.Ctrl_VehInfoForm->Visible = FALSE;
		FormFunc.Ctrl_MainForm->Visible = FALSE;
		FormFunc.Ctrl_SettingForm->Visible = FALSE;
		FormFunc.Ctrl_ParkAssForm->Visible = FALSE;
		FormFunc.Ctrl_AirConForm->Visible = FALSE;
		FormFunc.Ctrl_MCheckForm->Visible = FALSE;
		break;
	case 9://Read DID Button(DTC)
		didframe->ShowWindow(SW_SHOW);
		didframe->SetWindowPos(&CWnd::wndNoTopMost,0,0,0,0, SWP_NOSIZE|SWP_NOMOVE);
		break;
	case 10://advanced park assist
		apaframe->ShowWindow(SW_SHOW);
		apaframe->SetWindowPos(&CWnd::wndNoTopMost, 0, 0, 0, 0, SWP_NOSIZE | SWP_NOMOVE);
		break;
	case 12://HVAC
		SetWindowPos(&CWnd::wndTop,300,150,800,442,NULL);
		NodeFunc.Ctrl_NodeForm->Visible = FALSE;
		FormFunc.Ctrl_ChimeForm->Visible = FALSE;
		FormFunc.Ctrl_VehInfoForm->Visible = FALSE;
		FormFunc.Ctrl_MainForm->Visible = FALSE;
		FormFunc.Ctrl_SettingForm->Visible = FALSE;
		FormFunc.Ctrl_ParkAssForm->Visible = FALSE;
		FormFunc.Ctrl_AirConForm->Visible = TRUE;
		FormFunc.Ctrl_DTCForm->Visible = FALSE;
		FormFunc.Ctrl_MCheckForm->Visible = FALSE;
		break;	
	case 13://Memory Check
		SetWindowPos(&CWnd::wndTop,300,150,800,800,NULL);
		NodeFunc.Ctrl_NodeForm->Visible = FALSE;
		FormFunc.Ctrl_ChimeForm->Visible = FALSE;
		FormFunc.Ctrl_VehInfoForm->Visible = FALSE;
		FormFunc.Ctrl_MainForm->Visible = FALSE;
		FormFunc.Ctrl_SettingForm->Visible = FALSE;
		FormFunc.Ctrl_ParkAssForm->Visible = FALSE;
		FormFunc.Ctrl_AirConForm->Visible = FALSE;
		FormFunc.Ctrl_DTCForm->Visible = FALSE;
		FormFunc.Ctrl_MCheckForm->Visible = TRUE;
		break;	
	case 77:
		SetWindowPos(&CWnd::wndTop,300,150,1000,430,NULL);
		break;
	case 99:
		FormFunc.Ctrl_MenuForm->Btn_SWC1->Checked = TRUE;
		Saint2Config();  //configures LSGMLAN by select Btn_SWC1
		break;
	case 100:
		if(!Init15765)
		{
		Init15765=true;
		Function_Send_Command("CC07000648FFFF");
		Function_Send_Command("CC080100000248");
		}
		break;
	}
	
	return 0;
}

HRESULT CPlugInForSaintDlg::Function_SWC_Check(WPARAM wParam, LPARAM lParam)
{
	SWC_Num=lParam;
	return 0;
}

HRESULT CPlugInForSaintDlg::Faceplate_Event_KeyDown(WPARAM wParam,LPARAM lParam)
{
	int vBCM;
	//Reset DataBase
	Function_Reload_DataBase();
	//DataType=3 (EnumerationValue) 
	//Function_Write_DataBase(ODIAction_Info_Faceplate::ODIAIF_DaTy::Start_Bit,ODIAction_Info_Faceplate::ODIAIF_DaTy::Length,ODIAction_Info_Faceplate::ODIAIF_DaTy::EnumerationValue);
	//FUClassID=80 
	//Function_Write_DataBase(ODIAction_Info_Faceplate::ODIAIF_FUCID::Start_Bit,ODIAction_Info_Faceplate::ODIAIF_FUCID::Length,0x80);
	//ActionID=1 (FaceplateKeyPressAction) 
	//Function_Write_DataBase(ODIAction_Info_Faceplate::ODIAIF_ActnID::Start_Bit,ODIAction_Info_Faceplate::ODIAIF_ActnID::Length,0x01);
	//DisplayMaskID=0x40 
	//Function_Write_DataBase(ODIAction_Info_Faceplate::ODIAIF_DspMID::Start_Bit,ODIAction_Info_Faceplate::ODIAIF_DspMID::Length,ODIAction_Info_Faceplate::ODIAIF_DspMID::Info_Faceplate);
	//ActionValue=Enumeration value for the key pressed
	//if(lParam>7)
	//{
	//Function_Write_DataBase(ODIAction_Info_Faceplate::ODIAIF_ActnVal::Start_Bit,ODIAction_Info_Faceplate::ODIAIF_ActnVal::Length,lParam);
	//Build and Send
	//Function_Build_Command(ODIAction_Info_Faceplate::Basic::Message_ID);}

	if(lParam >= 0 && lParam<=7)
	{
		Function_Reload_DataBase();
		switch(lParam)
		{
		case 0:
			break;
		case 1:
				vBCM=3;
			break;

		case 2:
				vBCM=2;
			break;

		case 3:
				vBCM=4;
			break;

		case 4:
				vBCM=5;
			break;

		case 5:
				vBCM=6;
			break;
		
		case 6:
				vBCM=1;
			break;
			
		case 7:
				vBCM=7;
			break;

			default:
			break;		
		}
		if(SWC_Num==1)
		{
			Function_Write_DataBase(Steering_Wheel_Control_Switches::StrgWhlUnit1SwStat::Start_Bit,Steering_Wheel_Control_Switches::StrgWhlUnit1SwStat::Length,vBCM);
			Function_Write_DataBase(Steering_Wheel_Control_Switches::StrgWhlUnit2SwStat::Start_Bit,Steering_Wheel_Control_Switches::StrgWhlUnit2SwStat::Length,0);
			Function_Build_Command(Steering_Wheel_Control_Switches::Basic::Message_ID);
		}
		else if(SWC_Num==2)
		{
			Function_Write_DataBase(Steering_Wheel_Control_Switches::StrgWhlUnit1SwStat::Start_Bit,Steering_Wheel_Control_Switches::StrgWhlUnit1SwStat::Length,0);
			Function_Write_DataBase(Steering_Wheel_Control_Switches::StrgWhlUnit2SwStat::Start_Bit,Steering_Wheel_Control_Switches::StrgWhlUnit2SwStat::Length,lParam);
			Function_Build_Command(Steering_Wheel_Control_Switches::Basic::Message_ID);
		}
	
	}
	return 0;
}

HRESULT CPlugInForSaintDlg::Faceplate_Event_KeyUp(WPARAM wParam,LPARAM lParam)
{
	//Reset DataBase
	Function_Reload_DataBase();
	//DataType=3 (EnumerationValue) 
	Function_Write_DataBase(ODIAction_Info_Faceplate::ODIAIF_DaTy::Start_Bit,ODIAction_Info_Faceplate::ODIAIF_DaTy::Length,ODIAction_Info_Faceplate::ODIAIF_DaTy::EnumerationValue);
	//FUClassID=80 
	Function_Write_DataBase(ODIAction_Info_Faceplate::ODIAIF_FUCID::Start_Bit,ODIAction_Info_Faceplate::ODIAIF_FUCID::Length,0x80);
	//ActionID=2(FaceplateKeyReleaseAction) 
	Function_Write_DataBase(ODIAction_Info_Faceplate::ODIAIF_ActnID::Start_Bit,ODIAction_Info_Faceplate::ODIAIF_ActnID::Length,0x02);
	//DisplayMaskID=0x40 
	Function_Write_DataBase(ODIAction_Info_Faceplate::ODIAIF_DspMID::Start_Bit,ODIAction_Info_Faceplate::ODIAIF_DspMID::Length,ODIAction_Info_Faceplate::ODIAIF_DspMID::Info_Faceplate);
	//ActionValue=Enumeration value for the key released
	if(lParam==0 || lParam>7)
	{
		
		Function_Write_DataBase(ODIAction_Info_Faceplate::ODIAIF_ActnVal::Start_Bit,ODIAction_Info_Faceplate::ODIAIF_ActnVal::Length,lParam);
	//Build and Send
		Function_Build_Command(ODIAction_Info_Faceplate::Basic::Message_ID);
		
	}
	else if(lParam>0 && lParam<=7)
	{
	Function_Reload_DataBase();
	Function_Write_DataBase(Steering_Wheel_Control_Switches::StrgWhlUnit2SwStat::Start_Bit,Steering_Wheel_Control_Switches::StrgWhlUnit2SwStat::Length,0);
	Function_Write_DataBase(Steering_Wheel_Control_Switches::StrgWhlUnit1SwStat::Start_Bit,Steering_Wheel_Control_Switches::StrgWhlUnit1SwStat::Length,0);
	Function_Build_Command(Steering_Wheel_Control_Switches::Basic::Message_ID);
	}
	return 0;
}

HRESULT CPlugInForSaintDlg::Faceplate_Event_Click(WPARAM wParam,LPARAM lParam)
{
	//Reset DataBase
	Function_Reload_DataBase();
	//DataType=3 (EnumerationValue) 
	Function_Write_DataBase(ODIAction_Info_Faceplate::ODIAIF_DaTy::Start_Bit,ODIAction_Info_Faceplate::ODIAIF_DaTy::Length,ODIAction_Info_Faceplate::ODIAIF_DaTy::EnumerationValue);
	//FUClassID=80 
	Function_Write_DataBase(ODIAction_Info_Faceplate::ODIAIF_FUCID::Start_Bit,ODIAction_Info_Faceplate::ODIAIF_FUCID::Length,0x80);
	//ActionID=3(FaceplateKeyRotateAction) 
	Function_Write_DataBase(ODIAction_Info_Faceplate::ODIAIF_ActnID::Start_Bit,ODIAction_Info_Faceplate::ODIAIF_ActnID::Length,0x03);
	//DisplayMaskID=0x40 
	Function_Write_DataBase(ODIAction_Info_Faceplate::ODIAIF_DspMID::Start_Bit,ODIAction_Info_Faceplate::ODIAIF_DspMID::Length,ODIAction_Info_Faceplate::ODIAIF_DspMID::Info_Faceplate);
	//ActionValue=Enumeration value for the key released
	Function_Write_DataBase(ODIAction_Info_Faceplate::ODIAIF_ActnVal::Start_Bit,ODIAction_Info_Faceplate::ODIAIF_ActnVal::Length,lParam);
	//Build and Send
	Function_Build_Command(ODIAction_Info_Faceplate::Basic::Message_ID);
	return 0;
}

HRESULT CPlugInForSaintDlg::Function_Airbag_Impact_Data(WPARAM wParam,LPARAM lParam)
{
	Function_Reload_DataBase();

	Function_Write_DataBase(Airbag_Impact_Data::SIRDpl::Start_Bit,Airbag_Impact_Data::SIRDpl::Length,FormFunc.Ctrl_VehInfoForm->Box_SIRDpl->Checked);

	Function_Build_Command(Airbag_Impact_Data::Basic::Message_ID);
	
	return 0;
}

HRESULT CPlugInForSaintDlg::Function_Airbag_Status(WPARAM wParam,LPARAM lParam)
{
	Function_Reload_DataBase();

	Function_Write_DataBase(Airbag_Status::SftyMuteRd::Start_Bit,Airbag_Status::SftyMuteRd::Length,FormFunc.Ctrl_VehInfoForm->Box_sftyMuteRd->Checked);

	Function_Build_Command(Airbag_Status::Basic::Message_ID);

	return 0;
}

HRESULT CPlugInForSaintDlg::Function_Antilock_Brake_and_TC_Status_HS(WPARAM wParam,LPARAM lParam)
{
	Function_Reload_DataBase();

	Function_Build_Command(Antilock_Brake_and_TC_Status_HS::Basic::Message_ID);

	return 0;
}

HRESULT CPlugInForSaintDlg::Function_Battery_Voltage(WPARAM wParam,LPARAM lParam)
{
	Function_Reload_DataBase();
	//BattStOfChrgCrtyLow
	Function_Write_DataBase(Battery_Voltage::BattStOfChrgCrtyLow::Start_Bit,Battery_Voltage::BattStOfChrgCrtyLow::Length,FormFunc.Ctrl_VehInfoForm->Box_BattStOfChrgCrtyLow->Checked);
	//BatVlt
	Function_Write_DataBase(Battery_Voltage::BatVlt::Start_Bit,Battery_Voltage::BatVlt::Length,(int)FormFunc.Ctrl_VehInfoForm->Box_BatVlt->Value - 30);
	//BatVltV
	Function_Write_DataBase(Battery_Voltage::BatVltV::Start_Bit,Battery_Voltage::BatVltV::Length,FormFunc.Ctrl_VehInfoForm->Box_BatVltV->Checked);

	Function_Build_Command(Battery_Voltage::Basic::Message_ID);

	return 0;
}

/********************************************************************
Function: Function_Power_Mode_Info_LS
--------------------------------------------------------------------
Description:
This function serve for power mode info, and takes effect when Bar_VehMovState Scrolls.
********************************************************************/
HRESULT CPlugInForSaintDlg::Function_Power_Mode_Info_LS(WPARAM wParam, LPARAM lParam)
{
	Function_Reload_DataBase();

	Function_Write_DataBase(Power_Mode_Info_LS::Ky_IdDevPr::Start_Bit, Power_Mode_Info_LS::Ky_IdDevPr::Length, 1);

	Function_Write_DataBase(Power_Mode_Info_LS::VehMovState::Start_Bit, Power_Mode_Info_LS::VehMovState::Length, 4-FormFunc.Ctrl_MainForm->Bar_VehMovState->Value);

	Function_Build_Command(Power_Mode_Info_LS::Basic::Message_ID, 8, 3);

	return 0;
}

/********************************************************************
Function: Function_Driver_Door_Status
--------------------------------------------------------------------
Description:
This function serve for driver door open/close, and takes effect when Bar_DDAjrSwAtv Scrolls.
********************************************************************/
HRESULT CPlugInForSaintDlg::Function_Driver_Door_Status(WPARAM wParam, LPARAM lParam)
{
	Function_Reload_DataBase();

	Function_Write_DataBase(Driver_Door_Status::DDAjrSwAtv::Start_Bit, Driver_Door_Status::DDAjrSwAtv::Length, (int)FormFunc.Ctrl_MainForm->Bar_DDAjrSwAtv->Value);

	//Function_Write_DataBase(Driver_Door_Status::LftglsAjrSwAct::Start_Bit, Driver_Door_Status::LftglsAjrSwAct::Length, 0);

	//Function_Write_DataBase(Driver_Door_Status::LftglsRelSwAct::Start_Bit, Driver_Door_Status::LftglsRelSwAct::Length, 0);

	//Function_Write_DataBase(Driver_Door_Status::DDAjrSwAtvM::Start_Bit, Driver_Door_Status::DDAjrSwAtvM::Length, FormFunc.Ctrl_SettingForm->Box_DDAjrSwAtvM->SelectedIndex);

	Function_Build_Command(Driver_Door_Status::Basic::Message_ID, 8, 1);

	return 0;
}


/********************************************************************
Function: Function_Passenger_Door_Status_LS
--------------------------------------------------------------------
Description:
This function serve for passenger door open/close, and takes effect when Bar_PDAjrSwAtv Scrolls.
********************************************************************/
HRESULT CPlugInForSaintDlg::Function_Passenger_Door_Status_LS(WPARAM wParam, LPARAM lParam)
{
	Function_Reload_DataBase();

	Function_Write_DataBase(Passenger_Door_Status_LS::PDAjrSwAtv::Start_Bit, Passenger_Door_Status_LS::PDAjrSwAtv::Length, (int)FormFunc.Ctrl_MainForm->Bar_PDAjrSwAtv->Value);

	Function_Build_Command(Passenger_Door_Status_LS::Basic::Message_ID, 8, 1);

	return 0;
}


/********************************************************************
Function: Function_Left_Rear_Door_Status
--------------------------------------------------------------------
Description:
This function serve for left rear door open/close, and takes effect when Bar_RLDoorAjarSwAct Scrolls.
********************************************************************/
HRESULT CPlugInForSaintDlg::Function_Left_Rear_Door_Status(WPARAM wParam, LPARAM lParam)
{
	Function_Reload_DataBase();

	Function_Write_DataBase(Left_Rear_Door_Status::RLDoorAjarSwAct::Start_Bit, Left_Rear_Door_Status::RLDoorAjarSwAct::Length, (int)FormFunc.Ctrl_MainForm->Bar_RLDoorAjarSwAct->Value);

	Function_Build_Command(Left_Rear_Door_Status::Basic::Message_ID, 8, 1);

	return 0;
}


/********************************************************************
Function: Function_Right_Rear_Door_Status
--------------------------------------------------------------------
Description:
This function serve for right rear door open/close, and takes effect when Bar_RRDoorAjarSwAct Scrolls.
********************************************************************/
HRESULT CPlugInForSaintDlg::Function_Right_Rear_Door_Status(WPARAM wParam, LPARAM lParam)
{
	Function_Reload_DataBase();

	Function_Write_DataBase(Right_Rear_Door_Status::RRDoorAjarSwAct::Start_Bit, Right_Rear_Door_Status::RRDoorAjarSwAct::Length, (int)FormFunc.Ctrl_MainForm->Bar_RRDoorAjarSwAct->Value);

	Function_Build_Command(Right_Rear_Door_Status::Basic::Message_ID, 8, 1);

	return 0;
}

HRESULT CPlugInForSaintDlg::Function_Chime_Active(WPARAM wParam,LPARAM lParam)
{
	Function_Reload_DataBase();

	Function_Write_DataBase(Chime_Active::ChmAct::Start_Bit,Chime_Active::ChmAct::Length,FormFunc.Ctrl_ChimeForm->Box_ChmAct->Checked);

	Function_Write_DataBase(Chime_Active::ChmVolSt::Start_Bit,Chime_Active::ChmVolSt::Length,FormFunc.Ctrl_ChimeForm->Box_ChmVolSt->SelectedIndex);

	Function_Build_Command(Chime_Active::Basic::Message_ID);

	return 0;
}

HRESULT CPlugInForSaintDlg::Function_Chime_Command(WPARAM wParam,LPARAM lParam)
{
	Function_Reload_DataBase();

	Function_Write_DataBase(Chime_Command::SC_SndTne::Start_Bit, Chime_Command::SC_SndTne::Length,(int)FormFunc.Ctrl_ChimeForm->Box_SC_SndTne->Value);

	Function_Write_DataBase(Chime_Command::SndLocRtRr::Start_Bit,Chime_Command::SndLocRtRr::Length,FormFunc.Ctrl_ChimeForm->Box_SndLocRtRr->Checked);

	Function_Write_DataBase(Chime_Command::SndLocLftRr::Start_Bit,Chime_Command::SndLocLftRr::Length,FormFunc.Ctrl_ChimeForm->Box_SndLocLftRr->Checked);

	Function_Write_DataBase(Chime_Command::SndLocPasFr::Start_Bit,Chime_Command::SndLocPasFr::Length,FormFunc.Ctrl_ChimeForm->Box_SndLocPasFr->Checked);

	Function_Write_DataBase(Chime_Command::SndLocDrFr::Start_Bit,Chime_Command::SndLocDrFr::Length,FormFunc.Ctrl_ChimeForm->Box_SndLocDrFr->Checked);

	Function_Write_DataBase(Chime_Command::SC_SndCdnPrd::Start_Bit,Chime_Command::SC_SndCdnPrd::Length, (int)FormFunc.Ctrl_ChimeForm->Box_SC_SndCdnPrd->Value / 10);

	Function_Write_DataBase(Chime_Command::SC_NmofRp::Start_Bit,Chime_Command::SC_NmofRp::Length,(int)FormFunc.Ctrl_ChimeForm->Box_SC_NmofRp->Value);

	Function_Write_DataBase(Chime_Command::SC_SndDutCyc::Start_Bit,Chime_Command::SC_SndDutCyc::Length,(int)FormFunc.Ctrl_ChimeForm->Box_SC_SndDutCyc->Value);

	Function_Write_DataBase(Chime_Command::SndPriority::Start_Bit,Chime_Command::SndPriority::Length, (int)FormFunc.Ctrl_ChimeForm->Box_SndPriority->Value);

	switch(lParam)
	{
	case 0:
		Function_Build_Command(Chime_Command::Basic::APA_LS);
		break;
	case 1:
		Function_Build_Command(Chime_Command::Basic::BCM);
		break;
	case 2:
		Function_Build_Command(Chime_Command::Basic::IPC);
		break;
	case 3:
		Function_Build_Command(Chime_Command::Basic::Onstar);
		break;
	case 4:
		Function_Build_Command(Chime_Command::Basic::RadioHead);
		break;
	case 5:
		Function_Build_Command(Chime_Command::Basic::SDM);
		break;
	}
	return 0;
}

HRESULT CPlugInForSaintDlg::Function_Chime_ATS(WPARAM wParam,LPARAM lParam)
{
	CString Temp;
	int Count = FormFunc.Ctrl_ChimeForm.GetControl()->Box_ATS->RowCount;
	for(int i = 0; i< Count; i++)
	{
		FormFunc.Ctrl_ChimeForm->Function_Value_Assign(i);
		Function_Chime_Command(0,FormFunc.Ctrl_ChimeForm.GetControl()->Box_CanID->SelectedIndex);
		Temp = FormFunc.Ctrl_ChimeForm->Box_ATS->Rows[i]->Cells[9]->Value->ToString();
		int time = atoi(Temp);
		Sleep(time);
	}
	return 0;
}

HRESULT CPlugInForSaintDlg::Function_Display_Measurement_System_HS(WPARAM wParam,LPARAM lParam)
{
	Function_Reload_DataBase();

	Function_Write_DataBase(Display_Measurement_System_HS::DispMeasSysExt::Start_Bit,Display_Measurement_System_HS::DispMeasSysExt::Length,FormFunc.Ctrl_SettingForm->Box_DispMeasSysExt->SelectedIndex);

	Function_Build_Command(Display_Measurement_System_HS::Basic::Message_ID);

	return 0;
}

HRESULT CPlugInForSaintDlg::Function_Exterior_Lighting_HS(WPARAM wParam,LPARAM lParam)
{
	Function_Reload_DataBase();

	Function_Write_DataBase(Exterior_Lighting_HS::OtsdAmbtLtLvlStatV::Start_Bit,Exterior_Lighting_HS::OtsdAmbtLtLvlStatV::Length,FormFunc.Ctrl_VehInfoForm->Box_OtsdAmbtLtLvlStatV->SelectedIndex);

	Function_Write_DataBase(Exterior_Lighting_HS::OtsdAmbtLtLvlStat::Start_Bit,Exterior_Lighting_HS::OtsdAmbtLtLvlStat::Length,FormFunc.Ctrl_VehInfoForm->Box_OtsdAmbtLtLvlStat->SelectedIndex);
	int c = (int)FormFunc.Ctrl_VehInfoForm->Box_IntDimDspLvlPlt->Value;
	Function_Write_DataBase(Exterior_Lighting_HS::IntDimDspLvlPlt::Start_Bit,Exterior_Lighting_HS::IntDimDspLvlPlt::Length,(int)FormFunc.Ctrl_VehInfoForm->Box_IntDimDspLvlPlt->Value);

	Function_Write_DataBase(Exterior_Lighting_HS::IntDimLvl::Start_Bit,Exterior_Lighting_HS::IntDimLvl::Length,(int)FormFunc.Ctrl_VehInfoForm->Box_IntDimLvl->Value);

	Function_Build_Command(Exterior_Lighting_HS::Basic::Message_ID);

	return 0;
}

HRESULT CPlugInForSaintDlg::Function_Outside_Air_Temperature_HS(WPARAM wParam,LPARAM lParam)
{
	Function_Reload_DataBase();

	Function_Write_DataBase(Outside_Air_Temperature_HS::OtsAirTmp::Start_Bit,Outside_Air_Temperature_HS::OtsAirTmp::Length,(int)FormFunc.Ctrl_VehInfoForm->Box_OtsAirTmp->Value);

	Function_Write_DataBase(Outside_Air_Temperature_HS::OtsAirTmpCrVal::Start_Bit,Outside_Air_Temperature_HS::OtsAirTmpCrVal::Length,(int)FormFunc.Ctrl_VehInfoForm->Box_OtsAirTmpCrVal->Value);

	Function_Write_DataBase(Outside_Air_Temperature_HS::OtsAirTmpCrValMsk::Start_Bit,Outside_Air_Temperature_HS::OtsAirTmpCrValMsk::Length,FormFunc.Ctrl_VehInfoForm->Box_OtsAirTmpCrValMsk->SelectedIndex);

	Function_Write_DataBase(Outside_Air_Temperature_HS::OtsAirTmpV::Start_Bit,Outside_Air_Temperature_HS::OtsAirTmpV::Length,FormFunc.Ctrl_VehInfoForm->Box_OtsAirTmpV->Checked);

	Function_Write_DataBase(Outside_Air_Temperature_HS::OtsAirTmpCrValV::Start_Bit,Outside_Air_Temperature_HS::OtsAirTmpCrValV::Length,FormFunc.Ctrl_VehInfoForm->Box_OtsAirTmpCrValV->Checked);

	Function_Build_Command(Outside_Air_Temperature_HS::Basic::Message_ID);

	return 0;
}

HRESULT CPlugInForSaintDlg::Function_Park_Assistant_Rear_Status(WPARAM wParam,LPARAM lParam)
{
	Function_Reload_DataBase();

	Function_Write_DataBase(Park_Assistant_Rear_Status::PrkAstRrSysStat::Start_Bit,Park_Assistant_Rear_Status::PrkAstRrSysStat::Length,FormFunc.Ctrl_ParkAssForm->Box_PrkAstRrSysStat->SelectedIndex);

	Function_Write_DataBase(Park_Assistant_Rear_Status::PrkAsstRrExtdDist::Start_Bit,Park_Assistant_Rear_Status::PrkAsstRrExtdDist::Length,(int)FormFunc.Ctrl_ParkAssForm->Box_PrkAsstRrExtdDist->Value);

	Function_Write_DataBase(Park_Assistant_Rear_Status::PARrRgn4ObjStat::Start_Bit,Park_Assistant_Rear_Status::PARrRgn4ObjStat::Length,FormFunc.Ctrl_ParkAssForm->Box_PARrRgn4ObjStat->SelectedIndex);

	Function_Write_DataBase(Park_Assistant_Rear_Status::PARrRgn3ObjStat::Start_Bit,Park_Assistant_Rear_Status::PARrRgn3ObjStat::Length,FormFunc.Ctrl_ParkAssForm->Box_PARrRgn3ObjStat->SelectedIndex);

	Function_Write_DataBase(Park_Assistant_Rear_Status::PARrRgn2ObjStat::Start_Bit,Park_Assistant_Rear_Status::PARrRgn2ObjStat::Length,FormFunc.Ctrl_ParkAssForm->Box_PARrRgn2ObjStat->SelectedIndex);

	Function_Write_DataBase(Park_Assistant_Rear_Status::PARrRgn1ObjStat::Start_Bit,Park_Assistant_Rear_Status::PARrRgn1ObjStat::Length,FormFunc.Ctrl_ParkAssForm->Box_PARrRgn1ObjStat->SelectedIndex);

	Function_Build_Command(Park_Assistant_Rear_Status::Basic::Message_ID);

	return 0;
}

HRESULT CPlugInForSaintDlg::Function_PPEI_Engine_Environmental_Status(WPARAM wParam,LPARAM lParam)
{
	Function_Reload_DataBase();

	Function_Write_DataBase(PPEI_Engine_Environmental_Status::OtsAirTmp::Start_Bit,PPEI_Engine_Environmental_Status::OtsAirTmp::Length,(int)FormFunc.Ctrl_VehInfoForm->Box_OtsAirTmp->Value);

	Function_Write_DataBase(PPEI_Engine_Environmental_Status::OtsAirTmpCrVal::Start_Bit,PPEI_Engine_Environmental_Status::OtsAirTmpCrVal::Length,(int)FormFunc.Ctrl_VehInfoForm->Box_OtsAirTmpCrVal->Value);

	Function_Write_DataBase(PPEI_Engine_Environmental_Status::OtsAirTmpCrValMsk::Start_Bit,PPEI_Engine_Environmental_Status::OtsAirTmpCrValMsk::Length,FormFunc.Ctrl_VehInfoForm->Box_OtsAirTmpCrValMsk->SelectedIndex);

	Function_Write_DataBase(PPEI_Engine_Environmental_Status::OtsAirTmpV::Start_Bit,PPEI_Engine_Environmental_Status::OtsAirTmpV::Length,FormFunc.Ctrl_VehInfoForm->Box_OtsAirTmpV->Checked);

	Function_Write_DataBase(PPEI_Engine_Environmental_Status::OtsAirTmpCrValV::Start_Bit,PPEI_Engine_Environmental_Status::OtsAirTmpCrValV::Length,FormFunc.Ctrl_VehInfoForm->Box_OtsAirTmpCrValV->Checked);

	Function_Build_Command(PPEI_Engine_Environmental_Status::Basic::Message_ID);

	return 0;
}

HRESULT CPlugInForSaintDlg::Function_PPEI_Engine_General_Status_5(WPARAM wParam,LPARAM lParam)
{
	Function_Reload_DataBase();

	Function_Write_DataBase(PPEI_Engine_General_Status_5::FlLvlPct::Start_Bit,PPEI_Engine_General_Status_5::FlLvlPct::Length, (int)FormFunc.Ctrl_VehInfoForm->Box_FlLvlPct->Value);

	(PPEI_Engine_General_Status_5::FlLvlPctV::Start_Bit,PPEI_Engine_General_Status_5::FlLvlPctV::Length,FormFunc.Ctrl_VehInfoForm->Box_FlLvlPctV->Checked);

	Function_Build_Command(PPEI_Engine_General_Status_5::Basic::Message_ID);

	return 0;
}

/********************************************************************
Function: Function_System_Power_Mode_LS
--------------------------------------------------------------------
Description:
This function serve for power mode, and takes effect when Bar_SysPwrMd_Scroll has a action.
********************************************************************/
HRESULT CPlugInForSaintDlg::Function_System_Power_Mode_LS(WPARAM wParam, LPARAM lParam)
{		
	if(FormFunc.Ctrl_MainForm->Bar_SysPwrMd->Value == 0)
	{
		Flag_Wake = false;
		//KillTimer(T_Periodic_10);
		KillTimer(T_Periodic_100);
		//KillTimer(T_Periodic_500);
		KillTimer(T_Periodic_1000);
		KillTimer(T_Periodic_5000);
		Function_Send_Command("08 70 01");
	}
	else
	{
		if (Flag_Wake == false)
		{
			//SetTimer(T_Periodic_10, 10, NULL);
			SetTimer(T_Periodic_100, 100, NULL);
			//SetTimer(T_Periodic_500, 500, NULL);
			SetTimer(T_Periodic_1000, 1000, NULL);
			SetTimer(T_Periodic_5000, 5000, NULL);
			Function_Send_Command("54 02 02");//Set SWCAN mode to High Voltage WakeUp Mode
			Sleep(100);
			Function_Send_Command("53 01 00");//keep SWCAN communication normal
			Sleep(100);
			Function_Send_Command("54 02 03");//Set SWCAN mode to Normal Mode
			Function_Send_System_Power_Mode_LS(0,0);
			Flag_Wake = true;

		}
	}
	return 0;
}


/********************************************************************
Function: Function_Send_System_Power_Mode_LS
--------------------------------------------------------------------
Description:
This function Send System_Power_Mode_LS message.
********************************************************************/
HRESULT CPlugInForSaintDlg::Function_Send_System_Power_Mode_LS(WPARAM wParam, LPARAM lParam)
{
	Function_Reload_DataBase();
	Function_Write_DataBase(System_Power_Mode_LS::SysPwrMd::Start_Bit, System_Power_Mode_LS::SysPwrMd::Length, (int)FormFunc.Ctrl_MainForm->Bar_SysPwrMd->Value);
	Function_Write_DataBase(System_Power_Mode_LS::SysPwrMdV::Start_Bit, System_Power_Mode_LS::SysPwrMdV::Length, (int)FormFunc.Ctrl_MainForm->Box_PMEnable->Checked);
	//Function_Write_DataBase(System_Power_Mode_LS::KylsStrtAuthRq::Start_Bit, System_Power_Mode_LS::KylsStrtAuthRq::Length, 0);
	Function_Build_Command(System_Power_Mode_LS::Basic::Message_ID, 8, 1);
	return 0;
}


/********************************************************************
Function: Function_System_Power_Mode_Backup_IPC_LS
--------------------------------------------------------------------
Description:
This function serve for power supply backup, and takes effect when Bar_SysPwrMd_Scroll has a action.
********************************************************************/
HRESULT CPlugInForSaintDlg::Function_System_Power_Mode_Backup_IPC_LS(WPARAM wParam, LPARAM lParam)
{
	Function_Reload_DataBase();

	Function_Write_DataBase(System_Power_Mode_Backup_LS::SysBkUpPwrMd::Start_Bit, System_Power_Mode_Backup_LS::SysBkUpPwrMd::Length, (int)FormFunc.Ctrl_MainForm->Bar_SysPwrMd->Value);
	Function_Write_DataBase(System_Power_Mode_Backup_LS::SysBkupPwrMdEn::Start_Bit, System_Power_Mode_Backup_LS::SysBkupPwrMdEn::Length, (int)FormFunc.Ctrl_MainForm->Box_SysBkUpPwrMdEn->Checked);
	//Function_Write_DataBase(System_Power_Mode_Backup_LS::SysBkUpPwrMdV::Start_Bit, System_Power_Mode_Backup_LS::SysBkUpPwrMdV::Length, 0);
	Function_Build_Command(System_Power_Mode_Backup_LS::Basic::Message_ID, 8, 1);
	return 0;
}


/********************************************************************
Function: Function_VNMF_LS_621_BCM
--------------------------------------------------------------------
Description:
This function is the necessary condition for power on.
********************************************************************/
HRESULT CPlugInForSaintDlg::Function_VNMF_LS_621_BCM(WPARAM wParam, LPARAM lParam)
{
	Function_Reload_DataBase();

	Function_Write_DataBase(VNMF_LS_621_BCM::VectraSpcNWMgtD_Byte0::Start_Bit, VNMF_LS_621_BCM::VectraSpcNWMgtD_Byte0::Length, 0);

	Function_Write_DataBase(VNMF_LS_621_BCM::VectraSpcNWMgtD_Byte1::Start_Bit, VNMF_LS_621_BCM::VectraSpcNWMgtD_Byte1::Length, 0x40);

	Function_Build_Command(VNMF_LS_621_BCM::Basic::Message_ID, 8);

	return 0;
}


/********************************************************************
Function: Function_Engine_Information_1_LS
--------------------------------------------------------------------
Description:
This function is to send cycle messages about engine information.
********************************************************************/
HRESULT CPlugInForSaintDlg::Function_Engine_Information_1_LS(WPARAM wParam, LPARAM lParam)
{
	Function_Reload_DataBase();

	Function_Write_DataBase(Engine_Information_1_LS::Engine_Information_1_LS_Byte0::Start_Bit, Engine_Information_1_LS::Engine_Information_1_LS_Byte0::Length, 0);

	Function_Build_Command(Engine_Information_1_LS::Basic::Message_ID);

	return 0;
}


/********************************************************************
Function: Function_Vehicle_Speed_Information
--------------------------------------------------------------------
Description:
This function is to send cycle messages about vehicel speed information.
********************************************************************/
HRESULT CPlugInForSaintDlg::Function_Vehicle_Speed_Information(WPARAM wParam, LPARAM lParam)
{
	Function_Reload_DataBase();

	Function_Write_DataBase(Vehicle_Speed_Information::VehSpdAvgDrvnV::Start_Bit, Vehicle_Speed_Information::VehSpdAvgDrvnV::Length, (int)FormFunc.Ctrl_MainForm->Box_VehSpdAvgDrvnV->Checked);

	Function_Write_DataBase(Vehicle_Speed_Information::VehSpdAvgDrvn::Start_Bit, Vehicle_Speed_Information::VehSpdAvgDrvn::Length, (int)FormFunc.Ctrl_MainForm->Bar_VehSpdAvgDrvn->Value);

	Function_Write_DataBase(Vehicle_Speed_Information::VehSpdAvgNDrvnV::Start_Bit, Vehicle_Speed_Information::VehSpdAvgNDrvnV::Length, (int)FormFunc.Ctrl_MainForm->Box_VehSpdAvgNDrvnV->Checked);

	Function_Write_DataBase(Vehicle_Speed_Information::VehSpdAvgNDrvn::Start_Bit, Vehicle_Speed_Information::VehSpdAvgNDrvn::Length, (int)FormFunc.Ctrl_MainForm->Bar_VehSpdAvgNDrvn->Value);

	Function_Build_Command(Vehicle_Speed_Information::Basic::Message_ID);

	return 0;
}

HRESULT CPlugInForSaintDlg::Function_PPEI_VIN_Digits_10_to_17(WPARAM wParam, LPARAM lParam)
{
	if(FormFunc.Ctrl_SettingForm->Box_VinAuto->Checked)
	{
		Function_Reload_DataBase();

		Function_Write_DataBase(0,8,System::Convert::ToInt32(FormFunc.Ctrl_SettingForm->Box_PPEI_VIN_Digits_10->Text, 16));

		Function_Write_DataBase(8,8,System::Convert::ToInt32(FormFunc.Ctrl_SettingForm->Box_PPEI_VIN_Digits_11->Text, 16));

		Function_Write_DataBase(16,8,System::Convert::ToInt32(FormFunc.Ctrl_SettingForm->Box_PPEI_VIN_Digits_12->Text, 16));

		Function_Write_DataBase(24,8,System::Convert::ToInt32(FormFunc.Ctrl_SettingForm->Box_PPEI_VIN_Digits_13->Text, 16));

		Function_Write_DataBase(32,8,System::Convert::ToInt32(FormFunc.Ctrl_SettingForm->Box_PPEI_VIN_Digits_14->Text, 16));

		Function_Write_DataBase(40,8,System::Convert::ToInt32(FormFunc.Ctrl_SettingForm->Box_PPEI_VIN_Digits_15->Text, 16));

		Function_Write_DataBase(48,8,System::Convert::ToInt32(FormFunc.Ctrl_SettingForm->Box_PPEI_VIN_Digits_16->Text, 16));

		Function_Write_DataBase(56,8,System::Convert::ToInt32(FormFunc.Ctrl_SettingForm->Box_PPEI_VIN_Digits_17->Text, 16));

		Function_Build_Command(PPEI_VIN_Digits_10_to_17::Basic::Message_ID);
	}

	return 0;
}

HRESULT CPlugInForSaintDlg::Function_VIN_Digits_2_to_9_HS(WPARAM wParam, LPARAM lParam)
{
	
	if(FormFunc.Ctrl_SettingForm->Box_VinAuto->Checked)
	{
		Function_Reload_DataBase();

		Function_Write_DataBase(0,8,System::Convert::ToInt32(FormFunc.Ctrl_SettingForm->Box_Vin_Digits_2->Text, 16));

		Function_Write_DataBase(8,8,System::Convert::ToInt32(FormFunc.Ctrl_SettingForm->Box_Vin_Digits_3->Text, 16));

		Function_Write_DataBase(16,8,System::Convert::ToInt32(FormFunc.Ctrl_SettingForm->Box_Vin_Digits_4->Text, 16));

		Function_Write_DataBase(24,8,System::Convert::ToInt32(FormFunc.Ctrl_SettingForm->Box_Vin_Digits_5->Text, 16));

		Function_Write_DataBase(32,8,System::Convert::ToInt32(FormFunc.Ctrl_SettingForm->Box_Vin_Digits_6->Text, 16));

		Function_Write_DataBase(40,8,System::Convert::ToInt32(FormFunc.Ctrl_SettingForm->Box_Vin_Digits_7->Text, 16));

		Function_Write_DataBase(48,8,System::Convert::ToInt32(FormFunc.Ctrl_SettingForm->Box_Vin_Digits_8->Text, 16));

		Function_Write_DataBase(56,8,System::Convert::ToInt32(FormFunc.Ctrl_SettingForm->Box_Vin_Digits_9->Text, 16));

		Function_Build_Command(VIN_Digits_2_to_9_HS::Basic::Message_ID);
	}
	return 0;
}

HRESULT CPlugInForSaintDlg::Function_Steering_Wheel_Control_Switches(WPARAM wParam, LPARAM lParam)
{
	Function_Reload_DataBase();

	Function_Write_DataBase(Steering_Wheel_Control_Switches::StrgWhlUnit1SwStat::Start_Bit,Steering_Wheel_Control_Switches::StrgWhlUnit1SwStat::Length,(int)FormFunc.Ctrl_SettingForm->Box_StrgWhlUnit1SwStat->SelectedIndex);

	Function_Write_DataBase(Steering_Wheel_Control_Switches::StrgWhlUnit2SwStat::Start_Bit,Steering_Wheel_Control_Switches::StrgWhlUnit2SwStat::Length,(int)FormFunc.Ctrl_SettingForm->Box_StrgWhlUnit2SwStat->SelectedIndex);

	Function_Build_Command(Steering_Wheel_Control_Switches::Basic::Message_ID);

	return 0;
}

HRESULT CPlugInForSaintDlg::Function_DTCRead_Active(WPARAM wParam, LPARAM lParam)
{	//Enter Diagnostic
    Function_Send_Command("58 02 48 07 31 F0 C0 E0 F0 F8 FC");
	EnterDiagnostic=DIAGNOSTIC_COMMAND;
	Sleep(100);
	Function_Send_Command("58024803A981"+dtcframe->str_status);
	return 0;
}

void CPlugInForSaintDlg::OnClose()
{
	Function_Send_Command("087001");
	DestroyWindow();     
}

void CPlugInForSaintDlg::OnTimer(UINT_PTR nIDEvent)
{
	switch(nIDEvent) 
	{
	case T_Periodic_100:
		Function_Engine_Information_1_LS(0,0);
	//	Function_Antilock_Brake_and_TC_Status_HS(0,0);
		Function_Vehicle_Speed_Information(0,0);
		break;
	//case T_Periodic_500:
	//	Function_Battery_Voltage(0,0);
	//	break;
	//case T_Periodic_10:
		//break;
	case T_Periodic_1000:
		Function_VNMF_LS_621_BCM(0,0);
		//Function_PPEI_VIN_Digits_10_to_17(0,0);
		//Function_VIN_Digits_2_to_9_HS(0,0);
		break;
	case T_Periodic_5000:
		Function_Send_System_Power_Mode_LS(0,0);
		if (FormFunc.Ctrl_MainForm->Box_SysBkUpPwrMdEn->Checked)
		{
			Function_System_Power_Mode_Backup_IPC_LS(0, 0);
		}
		break;
	default:
		break;
	}
	CDialogEx::OnTimer(nIDEvent);
}

HRESULT CPlugInForSaintDlg::Function_HVAC_DynData(WPARAM wParam, LPARAM lParam)
{
	Function_Reload_DataBase();
	//Data_Type:0x03-EnuerationValue
	Function_Write_DataBase(ODIDynamicData_ECC::Data_Type::Start_Bit,ODIDynamicData_ECC::Data_Type::Length,0x03);
	//Invalid_Data:1 true|0 false
	Function_Write_DataBase(ODIDynamicData_ECC::Invalid_Data::Start_Bit,ODIDynamicData_ECC::Invalid_Data::Length,0x01);
	//FUClass 0x07
	Function_Write_DataBase(ODIDynamicData_ECC::FUClass::Start_Bit,ODIDynamicData_ECC::FUClass::Length,0x07);
	//Data_ID
	Function_Write_DataBase(ODIDynamicData_ECC::Data_ID::Start_Bit,ODIDynamicData_ECC::Data_ID::Length,wParam);
	//Data_Value
	switch(wParam)
	{
	case 1://Front_BlowerMode
		Function_Write_DataBase(ODIDynamicData_ECC::Data_Value::Start_Bit,ODIDynamicData_ECC::Data_Value::Length,FormFunc.Ctrl_AirConForm->Box_Front_BlowerMode->SelectedIndex);
		break;
	case 2://Front_FanSpeed
		Function_Write_DataBase(ODIDynamicData_ECC::Data_Value::Start_Bit,ODIDynamicData_ECC::Data_Value::Length,(int)FormFunc.Ctrl_AirConForm->Box_Front_FanSpeed->Value);
		break;
	case 3://Front_LeftSetTemp
		Function_Write_DataBase(ODIDynamicData_ECC::Data_Value::Start_Bit,ODIDynamicData_ECC::Data_Value::Length,(int)FormFunc.Ctrl_AirConForm->Box_Front_LeftSetTemp->Value);
		break;
	case 4://Front_RightSetTemp
		Function_Write_DataBase(ODIDynamicData_ECC::Data_Value::Start_Bit,ODIDynamicData_ECC::Data_Value::Length,(int)FormFunc.Ctrl_AirConForm->Box_Front_RightSetTemp->Value);
		break;
	case 5://Rear_BlowerMode
		Function_Write_DataBase(ODIDynamicData_ECC::Data_Value::Start_Bit,ODIDynamicData_ECC::Data_Value::Length,FormFunc.Ctrl_AirConForm->Box_Rear_BlowerMode->SelectedIndex);
		break;
	case 6://Rear_FanSpeed
		Function_Write_DataBase(ODIDynamicData_ECC::Data_Value::Start_Bit,ODIDynamicData_ECC::Data_Value::Length,(int)FormFunc.Ctrl_AirConForm->Box_Rear_FanSpeed->Value);
		break;
	case 9://Zone
		Function_Write_DataBase(ODIDynamicData_ECC::Data_Value::Start_Bit,ODIDynamicData_ECC::Data_Value::Length,FormFunc.Ctrl_AirConForm->Box_Zone->SelectedIndex);
		break;
	case 10://AirQualitySensor
		Function_Write_DataBase(ODIDynamicData_ECC::Data_Value::Start_Bit,ODIDynamicData_ECC::Data_Value::Length,FormFunc.Ctrl_AirConForm->Box_AirQualitySensor->Checked);
		break;
	case 11://AutoDefog
		Function_Write_DataBase(ODIDynamicData_ECC::Data_Value::Start_Bit,ODIDynamicData_ECC::Data_Value::Length,FormFunc.Ctrl_AirConForm->Box_AutoDefog->Checked);
		break;
	case 12://AirCondition
		Function_Write_DataBase(ODIDynamicData_ECC::Data_Value::Start_Bit,ODIDynamicData_ECC::Data_Value::Length,FormFunc.Ctrl_AirConForm->Box_AirCondition->SelectedIndex);
		break;
	case 13://AirInlet
		Function_Write_DataBase(ODIDynamicData_ECC::Data_Value::Start_Bit,ODIDynamicData_ECC::Data_Value::Length,FormFunc.Ctrl_AirConForm->Box_AirInlet->SelectedIndex);
		break;
	case 15://Front_LeftThermalSeat
		Function_Write_DataBase(ODIDynamicData_ECC::Data_Value::Start_Bit,ODIDynamicData_ECC::Data_Value::Length,FormFunc.Ctrl_AirConForm->Box_Front_LeftThermalSeat->SelectedIndex);
		break;
	case 16://Front_RightThermalSeat
		Function_Write_DataBase(ODIDynamicData_ECC::Data_Value::Start_Bit,ODIDynamicData_ECC::Data_Value::Length,FormFunc.Ctrl_AirConForm->Box_Front_RightThermalSeat->SelectedIndex);
		break;
	}
	Function_Build_Command(ODIDynamicData_ECC::Basic::Message_ID);
	Sleep(100);
	if(lParam != 100)
	{
		switch(wParam)
		{
		case 1:	//Front_BlowerMode -> Events:Front_BlowerModeActivation = 1;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_HVAC_ODIEVENT,1,0);
			break;
		case 2://Front_FanSpeed ->Events:Front_FanSpeedActivation = 2
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_HVAC_ODIEVENT,2,0);
			break;
		case 3://Front_LeftSetTemp ->Events:Front_LeftSetTempActivation = 3
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_HVAC_ODIEVENT,3,0);
			break;
		case 4://Front_RightSetTemp ->Events:Front_RightSetTempActivation = 4
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_HVAC_ODIEVENT,4,0);
			break;
		case 5:	//Rear_BlowerMode -> Events:Front_BlowerModeActivation = 5;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_HVAC_ODIEVENT,5,0);
			break;
		case 6://Rear_FanSpeed -> Events:Rear_FanSpeedActivation = 6;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_HVAC_ODIEVENT,6,0);
			break;
		case 9://Zone -> Events:ZoneActivation = 10;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_HVAC_ODIEVENT,10,0);
			break;
		case 10://AirQualitySensor -> Events:AQSActivation = 11;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_HVAC_ODIEVENT,11,0);
			break;
		case 11://AutoDefog -> Events:AutoDefogActivation = 12;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_HVAC_ODIEVENT,12,0);
			break;
		case 12://AirCondition -> Events:AirConditionActivation = 12;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_HVAC_ODIEVENT,13,0);
			break;
		case 13://AirInlet -> Events:AirinletModeActivation = 14
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_HVAC_ODIEVENT,14,0);
			break;
		case 15://Front_leftThermalSeat -> Events:Front_LeftThermalSeatActivation = 16
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_HVAC_ODIEVENT,16,0);
			break;
		case 16://Front_RightThermalSeat -> Events:Front_RightThermalSeatActivation = 17
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_HVAC_ODIEVENT,17,0);
			break;
		}
	}
	return 0;
}

HRESULT CPlugInForSaintDlg::Function_HVAC_Event(WPARAM wParam, LPARAM lParam)
{
	Function_Reload_DataBase();
	//Event ID
	Function_Write_DataBase(ODIEvent_ECC::EventID::Start_Bit,ODIEvent_ECC::EventID::Length,wParam);
	//FUClass 0x07
	Function_Write_DataBase(ODIEvent_ECC::FUClass::Start_Bit,ODIEvent_ECC::FUClass::Length,0x07);
	//
	Function_Write_DataBase(ODIEvent_ECC::MultiFrameReturnChannel::Start_Bit,ODIEvent_ECC::MultiFrameReturnChannel::Length,0x01);

	Function_Build_Command(ODIEvent_ECC::Basic::Message_ID);

	return 0;
}

HRESULT CPlugInForSaintDlg::Function_HVAC_Indication(WPARAM wParam, LPARAM lParam)
{
	Function_Reload_DataBase();

	Function_Write_DataBase(ODIIndication_ECC::ODII_FUCID::Start_Bit,ODIIndication_ECC::ODII_FUCID::Length,0x07);

	Function_Write_DataBase(ODIIndication_ECC::ODII_ODIInd1::Start_Bit,ODIIndication_ECC::ODII_ODIInd1::Length,FormFunc.Ctrl_AirConForm->Box_ODIIECC_ODIInd1->Checked);

	Function_Write_DataBase(ODIIndication_ECC::ODII_ODIInd2::Start_Bit,ODIIndication_ECC::ODII_ODIInd2::Length,FormFunc.Ctrl_AirConForm->Box_ODIIECC_ODIInd2->Checked);

	Function_Write_DataBase(ODIIndication_ECC::ODII_ODIInd3::Start_Bit,ODIIndication_ECC::ODII_ODIInd3::Length,FormFunc.Ctrl_AirConForm->Box_ODIIECC_ODIInd3->Checked);

	Function_Write_DataBase(ODIIndication_ECC::ODII_ODIInd4::Start_Bit,ODIIndication_ECC::ODII_ODIInd4::Length,FormFunc.Ctrl_AirConForm->Box_ODIIECC_ODIInd4->Checked);

	Function_Write_DataBase(ODIIndication_ECC::ODII_ODIInd5::Start_Bit,ODIIndication_ECC::ODII_ODIInd5::Length,FormFunc.Ctrl_AirConForm->Box_ODIIECC_ODIInd5->Checked);

	Function_Write_DataBase(ODIIndication_ECC::ODII_ODIInd6::Start_Bit,ODIIndication_ECC::ODII_ODIInd6::Length,FormFunc.Ctrl_AirConForm->Box_ODIIECC_ODIInd6->Checked);

	Function_Write_DataBase(ODIIndication_ECC::ODII_ODIInd7::Start_Bit,ODIIndication_ECC::ODII_ODIInd7::Length,FormFunc.Ctrl_AirConForm->Box_ODIIECC_ODIInd7->Checked);

	Function_Write_DataBase(ODIIndication_ECC::ODII_ODIInd8::Start_Bit,ODIIndication_ECC::ODII_ODIInd8::Length,FormFunc.Ctrl_AirConForm->Box_ODIIECC_ODIInd8->Checked);

	Function_Write_DataBase(ODIIndication_ECC::ODII_ODIInd9::Start_Bit,ODIIndication_ECC::ODII_ODIInd9::Length,FormFunc.Ctrl_AirConForm->Box_ODIIECC_ODIInd9->Checked);

	Function_Write_DataBase(ODIIndication_ECC::ODII_ODIInd10::Start_Bit,ODIIndication_ECC::ODII_ODIInd10::Length,FormFunc.Ctrl_AirConForm->Box_ODIIECC_ODIInd10->Checked);

	Function_Write_DataBase(ODIIndication_ECC::ODII_ODIInd11::Start_Bit,ODIIndication_ECC::ODII_ODIInd11::Length,FormFunc.Ctrl_AirConForm->Box_ODIIECC_ODIInd11->Checked);

	Function_Write_DataBase(ODIIndication_ECC::ODII_ODIInd12::Start_Bit,ODIIndication_ECC::ODII_ODIInd12::Length,FormFunc.Ctrl_AirConForm->Box_ODIIECC_ODIInd12->Checked);

	Function_Write_DataBase(ODIIndication_ECC::ODII_ODIInd13::Start_Bit,ODIIndication_ECC::ODII_ODIInd13::Length,FormFunc.Ctrl_AirConForm->Box_ODIIECC_ODIInd13->Checked);

	Function_Write_DataBase(ODIIndication_ECC::ODII_ODIInd14::Start_Bit,ODIIndication_ECC::ODII_ODIInd14::Length,FormFunc.Ctrl_AirConForm->Box_ODIIECC_ODIInd14->Checked);

	Function_Write_DataBase(ODIIndication_ECC::ODII_ODIInd15::Start_Bit,ODIIndication_ECC::ODII_ODIInd15::Length,FormFunc.Ctrl_AirConForm->Box_ODIIECC_ODIInd15->Checked);

	Function_Build_Command(ODIIndication_ECC::Basic::Message_ID);
	return 0;
}

HRESULT CPlugInForSaintDlg::Function_HVAC_Initialization(WPARAM wParam, LPARAM lParam)
{
	//Indication
	Function_HVAC_Indication(0,0);
	//DynData
	if(FormFunc.Ctrl_AirConForm->Box_ODIIECC_ODIInd1->Checked)
	{
		//Function_HVAC_DynData(1,100);
		Function_HVAC_DynData(1, 10);
	}
	if(FormFunc.Ctrl_AirConForm->Box_ODIIECC_ODIInd2->Checked)
	{
		//Function_HVAC_DynData(2,100);
		Function_HVAC_DynData(2, 10);
	}
	if(FormFunc.Ctrl_AirConForm->Box_ODIIECC_ODIInd3->Checked)
	{
		//Function_HVAC_DynData(3,100);
		Function_HVAC_DynData(3, 10);
	}
	if(FormFunc.Ctrl_AirConForm->Box_ODIIECC_ODIInd4->Checked)
	{
		//Function_HVAC_DynData(4,100);
		Function_HVAC_DynData(4, 10);
		if (FormFunc.Ctrl_AirConForm.GetControl()->Box_Zone->SelectedIndex != 3)//---12/14/2016 modify
		FormFunc.Ctrl_AirConForm.GetControl()->Box_Zone->SelectedIndex = 1;
	}
	else
	{
		FormFunc.Ctrl_AirConForm.GetControl()->Box_Zone->SelectedIndex = 0;
	}
	if(FormFunc.Ctrl_AirConForm->Box_ODIIECC_ODIInd13->Checked)
	{
		//Function_HVAC_DynData(12,100);
		Function_HVAC_DynData(12, 10);
	}
	if(FormFunc.Ctrl_AirConForm->Box_ODIIECC_ODIInd15->Checked)
	{
		//Function_HVAC_DynData(13,100);
		Function_HVAC_DynData(13, 10);
	}
	//Function_HVAC_DynData(9,100);
	Function_HVAC_DynData(9, 10);
	Function_HVAC_DynData(10, 10);
	Function_HVAC_DynData(11, 10);
	Function_HVAC_DynData(15, 10);
	Function_HVAC_DynData(16, 10);
	return 0;
}

HRESULT CPlugInForSaintDlg::Function_HVAC_FeedBack(WPARAM wParam, LPARAM lParam)
{
	switch(wParam)
	{
	//case 15://for 258 module
	case 51://for D2SB module
		if(FormFunc.Ctrl_AirConForm.GetControl()->Box_AirCondition->SelectedIndex == 0)
		{
			FormFunc.Ctrl_AirConForm.GetControl()->Box_AirCondition->SelectedIndex = 1;
		}
		else if(FormFunc.Ctrl_AirConForm.GetControl()->Box_AirCondition->SelectedIndex == 1)
		{
			FormFunc.Ctrl_AirConForm.GetControl()->Box_AirCondition->SelectedIndex = 2;
		}
		else if(FormFunc.Ctrl_AirConForm.GetControl()->Box_AirCondition->SelectedIndex == 2)
		{
			FormFunc.Ctrl_AirConForm.GetControl()->Box_AirCondition->SelectedIndex = 4;
		}
		else if(FormFunc.Ctrl_AirConForm.GetControl()->Box_AirCondition->SelectedIndex == 4)
		{
			FormFunc.Ctrl_AirConForm.GetControl()->Box_AirCondition->SelectedIndex = 0;
		}
		else
		{
			FormFunc.Ctrl_AirConForm.GetControl()->Box_AirCondition->SelectedIndex = 2;
		}
		break;
	case 16:
		FormFunc.Ctrl_AirConForm.GetControl()->Box_AirInlet->SelectedIndex = 1;
		break;
	case 17:
		FormFunc.Ctrl_AirConForm.GetControl()->Box_AirInlet->SelectedIndex = 2;
		break;
	case 27:
		FormFunc.Ctrl_AirConForm.GetControl()->Box_AirInlet->SelectedIndex = 0;
		break;
	case 52:
		if(FormFunc.Ctrl_AirConForm.GetControl()->Box_AirInlet->SelectedIndex < 2)
		{
			int buff = FormFunc.Ctrl_AirConForm.GetControl()->Box_AirInlet->SelectedIndex;
			FormFunc.Ctrl_AirConForm.GetControl()->Box_AirInlet->SelectedIndex = buff + 1;
		}
		else
		{
			FormFunc.Ctrl_AirConForm.GetControl()->Box_AirInlet->SelectedIndex = 0;
		}
		break;
	case 22:
		FormFunc.Ctrl_AirConForm.GetControl()->Btn_FFanSp_M_Press();
		break;
	case 23:
		FormFunc.Ctrl_AirConForm.GetControl()->Btn_FFanSp_P_Press();
		break;
	case 26:
		FormFunc.Ctrl_AirConForm.GetControl()->Box_AirCondition->SelectedIndex = 4;
		break;
	case 30:
		FormFunc.Ctrl_AirConForm.GetControl()->Btn_FLTemp_P_Press();
		break;
	case 31:
		FormFunc.Ctrl_AirConForm.GetControl()->Btn_FLTemp_M_Press();
		break;
	case 32:
		FormFunc.Ctrl_AirConForm.GetControl()->Btn_FRTemp_P_Press();
//---12/14/2016 modify		FormFunc.Ctrl_AirConForm.GetControl()->Box_Zone->SelectedIndex = 1;
		break;
	case 33:
		FormFunc.Ctrl_AirConForm.GetControl()->Btn_FRTemp_M_Press();
//---12/14/2016 modify		FormFunc.Ctrl_AirConForm.GetControl()->Box_Zone->SelectedIndex = 1;
		break;

	case 18:
		FormFunc.Ctrl_AirConForm.GetControl()->Box_Front_BlowerMode->SelectedIndex = 6;
		break;
	case 19:
		FormFunc.Ctrl_AirConForm.GetControl()->Box_Front_BlowerMode->SelectedIndex = 5;
		break;
	case 21:
		FormFunc.Ctrl_AirConForm.GetControl()->Box_Front_BlowerMode->SelectedIndex = 3;
		break;
	case 20:
		FormFunc.Ctrl_AirConForm.GetControl()->Box_Front_BlowerMode->SelectedIndex = 4;
		break;
	case 24:
		FormFunc.Ctrl_AirConForm.GetControl()->Function_VR_Control();
		break;
	case 25:
		FormFunc.Ctrl_AirConForm.GetControl()->Box_Zone->SelectedIndex = 3;
		break;
	case 28:
		FormFunc.Ctrl_AirConForm.GetControl()->Box_Front_BlowerMode->SelectedIndex = 11;
		break;
	case 29:
		FormFunc.Ctrl_AirConForm.GetControl()->Box_Front_BlowerMode->SelectedIndex = 2;
		break;
		
	}
	return 0;
}

HRESULT CPlugInForSaintDlg::Function_DTC_Read(WPARAM wParam, LPARAM lParam)
{
	if(wParam == 0)//Support
	{
		PublicParama::DTC_Read_Step = 1;
		Function_Send_Command("58 02 48 01 04");
		Function_Send_Command("58 02 48 03 A9 81 01");
	}
	else if(wParam == 1)//Current
	{
		PublicParama::DTC_Read_Step = 2;
		Function_Send_Command("58 02 48 03 A9 81 02");
	}
	else if(wParam == 2)//History
	{
		PublicParama::DTC_Read_Step = 3;
		Function_Send_Command("58 02 48 03 A9 81 10");
	}
	else if(wParam == 0xFF)//Clear
	{
		Function_Send_Command("58 02 48 01 04");
	}
	return 0;
}

HRESULT CPlugInForSaintDlg::Function_DTC_Process(WPARAM wParam, LPARAM lParam)
{
	unsigned __int8 *pData =(unsigned __int8*)wParam;
	CString Code;
	CString Temp1,Temp2;
	CString Type;

	int a = pData[4];
	int b = pData[5];
	int c = pData[6];
	if(pData[4] ==0x00 && pData[5] == 0x00 && pData[6] == 0x00)
	{
		PublicParama::DTC_Read_Step = 0;
		FormFunc.Ctrl_DTCForm->Function_Add_DTC_Function();
		//if(PublicParama::DTC_Read_Step == 1)
		//{
		//	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_DTC_READ,1,0);
		//}
		//else if(PublicParama::DTC_Read_Step == 2)
		//{
		//	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_DTC_READ,2,0);
		//}
		//else if(PublicParama::DTC_Read_Step == 3)
		//{
		//	
		//}
	}
	else
	{
		Temp1.Format(_T("%02X"),pData[4]);
		Temp2.Format(_T("%02X"),pData[5]);
		Code = "0x" + Temp1 + Temp2;
		Temp1.Format(_T("%02X"),pData[6]);
		Type = "0x" + Temp1;
		if(PublicParama::DTC_Read_Step == 1)
		{
			FormFunc.Ctrl_DTCForm->Function_Add_DTC_Infor_Function(gcnew System::String(Code),gcnew System::String(Type),pData[7],1);
		}
		else if(PublicParama::DTC_Read_Step == 2)
		{
			FormFunc.Ctrl_DTCForm->Function_Add_DTC_Infor_Function(gcnew System::String(Code),gcnew System::String(Type),pData[7],2);
		}
		else if(PublicParama::DTC_Read_Step == 3)
		{
			FormFunc.Ctrl_DTCForm->Function_Add_DTC_Infor_Function(gcnew System::String(Code),gcnew System::String(Type),pData[7],3);
		}
	}
	return 0;
}

HRESULT CPlugInForSaintDlg::Function_ODI_Initialization(WPARAM wParam, LPARAM lParam)
{
	if(Flag_ODI == false)
	{
		Function_FUCLASS40_Initialization();

		Function_FUCLASS44_Initialization();

		Function_FUCLASS41_Initialization();

		Function_FUCLASS42_Initialization();

		Function_FUCLASS43_Initialization();

		Function_FUCLASS47_Initialization();

		Function_FUCLASS48_Initialization();

		Function_FUCLASS45_Initialization();

		Function_FUCLASS40_ValueSetting(1,0);

		Function_FUCLASS44_ValueSetting(1,0);

		Function_FUCLASS41_ValueSetting(1,0);

		Function_FUCLASS42_ValueSetting(1,0);

		Function_FUCLASS43_ValueSetting(1,0);

		Function_FUCLASS47_ValueSetting(1,0);

		Function_FUCLASS48_ValueSetting(1,0);

		Function_FUCLASS45_ValueSetting(1,0);
		Flag_ODI = true;
	}
	return 0;
}

HRESULT CPlugInForSaintDlg::Function_ODI_Action(WPARAM wParam, LPARAM lParam)
{
	unsigned __int8 *pData =(unsigned __int8*)wParam;

	if(pData[6] == 40)
	{
		int ActionID = pData[7];
		int Action_Value = pData[12];
		if(ActionID != 1)
		{
			FUClass40[ActionID - 2] = Action_Value;
			Function_FUCLASS40_ValueSetting(0,0);
		}
		else
		{
			Function_FUCLASS40_ValueSetting(1,0);
		}
	}
	else if(pData[6] == 44)
	{
		int ActionID = pData[7];
		int Action_Value = pData[12];
		if(ActionID != 1)
		{
			FUClass44[ActionID - 2] = Action_Value;
			Function_FUCLASS44_ValueSetting(0,0);
		}
		else
		{
			Function_FUCLASS44_ValueSetting(1,0);
		}
	}
	else if(pData[6] == 41)
	{
		int ActionID = pData[7];
		int Action_Value = pData[12];
		if(ActionID != 1)
		{
			FUClass41[ActionID - 2] = Action_Value;
			Function_FUCLASS41_ValueSetting(0,0);
		}
		else
		{
			Function_FUCLASS41_ValueSetting(1,0);
		}
	}
	else if(pData[6] == 42)
	{
		int ActionID = pData[7];
		int Action_Value = pData[12];
		if(ActionID != 1)
		{
			FUClass42[ActionID - 2] = Action_Value;
			Function_FUCLASS42_ValueSetting(0,0);
		}
		else
		{
			Function_FUCLASS42_ValueSetting(1,0);
		}
	}
	else if(pData[6] == 43)
	{
		int ActionID = pData[7];
		int Action_Value = pData[12];
		if(ActionID != 1)
		{
			FUClass43[ActionID - 2] = Action_Value;
			Function_FUCLASS43_ValueSetting(0,0);
		}
		else
		{
			Function_FUCLASS43_ValueSetting(1,0);
		}
	}
	else if(pData[6] == 47)
	{
		int ActionID = pData[7];
		int Action_Value = pData[12];
		if(ActionID != 1)
		{
			FUClass47[ActionID - 2] = Action_Value;
			Function_FUCLASS47_ValueSetting(0,0);
		}
		else
		{
			Function_FUCLASS47_ValueSetting(1,0);
		}
	}
	else if(pData[6] == 48)
	{
		int ActionID = pData[7];
		int Action_Value = pData[12];
		if(ActionID != 1)
		{
			FUClass48[ActionID - 2] = Action_Value;
			Function_FUCLASS48_ValueSetting(0,0);
		}
		else
		{
			Function_FUCLASS48_ValueSetting(1,0);
		}
	}
	else if(pData[6] == 45)
	{
		int ActionID = pData[7];
		int Action_Value = pData[12];
		if(ActionID != 1)
		{
			FUClass45[ActionID - 2] = Action_Value;
			Function_FUCLASS45_ValueSetting(0,0);
		}
		else
		{
			Function_FUCLASS45_ValueSetting(1,0);
		}
	}
	//free(pData);

	return 0;
}

void CPlugInForSaintDlg::Function_FUCLASS40_Initialization()
{
	Function_Reload_DataBase();
	//ApproachLightingOptions
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd1::Start_Bit,ODIIndication_BCM::ODII_ODIInd1::Length,1);
	//AutoReverseGearRearWiperOptions
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd2::Start_Bit,ODIIndication_BCM::ODII_ODIInd2::Length,1);
	//DriverPersonalizationOptions
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd3::Start_Bit,ODIIndication_BCM::ODII_ODIInd3::Length,1);
	//ExitLightTimeOptions
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd4::Start_Bit,ODIIndication_BCM::ODII_ODIInd4::Length,1);
	//RemoteStartOptions
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd5::Start_Bit,ODIIndication_BCM::ODII_ODIInd5::Length,1);
	//RemoteStartCooledSeatSetting
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd6::Start_Bit,ODIIndication_BCM::ODII_ODIInd6::Length,1);
	//RemoteStartHeatedSeatSetting
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd7::Start_Bit,ODIIndication_BCM::ODII_ODIInd7::Length,1);
	//PowertrainPerformanceOptions
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd8::Start_Bit,ODIIndication_BCM::ODII_ODIInd8::Length,1);
	//DaytimeTaillightsOptions
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd9::Start_Bit,ODIIndication_BCM::ODII_ODIInd9::Length,1);
	//RemoteStartCooledDrPasSeatOptions
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd10::Start_Bit,ODIIndication_BCM::ODII_ODIInd10::Length,1);
	//RemoteStartHeatedDrPasSeatOptions
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd11::Start_Bit,ODIIndication_BCM::ODII_ODIInd11::Length,1);
	//RainSenseWipersOptions
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd12::Start_Bit,ODIIndication_BCM::ODII_ODIInd12::Length,1);
	//FUClass
	Function_Write_DataBase(ODIIndication_BCM::ODII_FUCID::Start_Bit,ODIIndication_BCM::ODII_FUCID::Length,40);

	Function_Build_Command(ODIIndication_BCM::Basic::Message_ID);
}

void CPlugInForSaintDlg::Function_FUCLASS41_Initialization()
{
	Function_Reload_DataBase();
	//DriverSeatEasyExitPresent
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd1::Start_Bit, ODIIndication_BCM::ODII_ODIInd1::Length, 1);
	//FoldingMirrorsPresent
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd2::Start_Bit, ODIIndication_BCM::ODII_ODIInd2::Length, 1);
	//MemoryColumnPresent
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd3::Start_Bit, ODIIndication_BCM::ODII_ODIInd3::Length, 1);
	//ParkingTiltMirrorsPresent
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd4::Start_Bit, ODIIndication_BCM::ODII_ODIInd4::Length, 1);
	//RemoteMemoryUnlockRecallPresent
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd5::Start_Bit, ODIIndication_BCM::ODII_ODIInd5::Length, 1);
	//MemoryTiltColumnPresent
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd6::Start_Bit, ODIIndication_BCM::ODII_ODIInd6::Length, 1);
	//CrashAvoidanceAlertTypePresent
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd7::Start_Bit, ODIIndication_BCM::ODII_ODIInd7::Length, 1);
	//ReverseTiltMirrorsPresent
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd8::Start_Bit, ODIIndication_BCM::ODII_ODIInd8::Length, 1);
	//EasyExitPresent
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd9::Start_Bit, ODIIndication_BCM::ODII_ODIInd9::Length, 1);
	//MemoryRemoteRecallPresent
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd10::Start_Bit, ODIIndication_BCM::ODII_ODIInd10::Length, 1);
	//FUClass
	Function_Write_DataBase(ODIIndication_BCM::ODII_FUCID::Start_Bit, ODIIndication_BCM::ODII_FUCID::Length, 41);

	Function_Build_Command(ODIIndication_BCM::Basic::Message_ID);
}

void CPlugInForSaintDlg::Function_FUCLASS44_Initialization()
{
	Function_Reload_DataBase();
	//AutoLockingPresent
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd1::Start_Bit,ODIIndication_BCM::ODII_ODIInd1::Length,1);
	//AutoUnlockingPresent
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd2::Start_Bit,ODIIndication_BCM::ODII_ODIInd2::Length,1);
	//LastDoorClosedPresent
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd3::Start_Bit,ODIIndication_BCM::ODII_ODIInd3::Length,1);
	//ManualTransUnlockingPresent
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd4::Start_Bit,ODIIndication_BCM::ODII_ODIInd4::Length,1);
	//PassiveLockingPresent
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd5::Start_Bit,ODIIndication_BCM::ODII_ODIInd5::Length,1);
	//PassiveUnlockingPresent
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd6::Start_Bit,ODIIndication_BCM::ODII_ODIInd6::Length,1);
	//RelockRemoteDoorPresent
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd7::Start_Bit,ODIIndication_BCM::ODII_ODIInd7::Length,1);
	//RelockRemoteUnlockedDoorPresent
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd8::Start_Bit,ODIIndication_BCM::ODII_ODIInd8::Length,1);
	//RemoteInVehicleReminderPresent
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd9::Start_Bit,ODIIndication_BCM::ODII_ODIInd9::Length,1);
	//RemoteLockingFeedbackPresent
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd10::Start_Bit,ODIIndication_BCM::ODII_ODIInd10::Length,1);
	//RemoteSlidingDoorPresent
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd11::Start_Bit,ODIIndication_BCM::ODII_ODIInd11::Length,1);
	//RemoteUnlockLightingFeedbackPresent
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd12::Start_Bit,ODIIndication_BCM::ODII_ODIInd12::Length,1);
	//SelectiveUnlockingPresent
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd13::Start_Bit,ODIIndication_BCM::ODII_ODIInd13::Length,1);
	//OpenDoorAntiLockOutPresent
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd14::Start_Bit,ODIIndication_BCM::ODII_ODIInd14::Length,1);
	//FUClass
	Function_Write_DataBase(ODIIndication_BCM::ODII_FUCID::Start_Bit,ODIIndication_BCM::ODII_FUCID::Length,44);

	Function_Build_Command(ODIIndication_BCM::Basic::Message_ID);
}

void CPlugInForSaintDlg::Function_FUCLASS45_Initialization()
{
	Function_Reload_DataBase();
	//SetMultiSportMode_Steering
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd1::Start_Bit, ODIIndication_BCM::ODII_ODIInd1::Length, 1);
	//SetMultiSportMode_AccelPedal
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd2::Start_Bit, ODIIndication_BCM::ODII_ODIInd2::Length, 1);
	//SetMultiSportMode_AllWheelDrive
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd3::Start_Bit, ODIIndication_BCM::ODII_ODIInd3::Length, 1);
	//SetMultiSportMode_AutoTrans
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd4::Start_Bit, ODIIndication_BCM::ODII_ODIInd4::Length, 1);
	//SetMultiSportMode_RealTimeDamp
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd5::Start_Bit, ODIIndication_BCM::ODII_ODIInd5::Length, 1);
	//SetMultiSportMode_AdaptiveFwdLighting
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd6::Start_Bit, ODIIndication_BCM::ODII_ODIInd6::Length, 1);
	//SetSingleSportModeSetting
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd7::Start_Bit, ODIIndication_BCM::ODII_ODIInd7::Length, 1);
	//FUClass
	Function_Write_DataBase(ODIIndication_BCM::ODII_FUCID::Start_Bit, ODIIndication_BCM::ODII_FUCID::Length, 45);

	Function_Build_Command(ODIIndication_BCM::Basic::Message_ID);
}

void CPlugInForSaintDlg::Function_FUCLASS47_Initialization()
{
	Function_Reload_DataBase();
	//SideBlindZoneAlertOptions
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd1::Start_Bit, ODIIndication_BCM::ODII_ODIInd1::Length, 1);
	//RearCrossTrafficAlertOptions---12/2/2016 add
	Function_Write_DataBase(ODIIndication_BCM::ODII_ODIInd2::Start_Bit, ODIIndication_BCM::ODII_ODIInd2::Length, 1);
	//FUClass
	Function_Write_DataBase(ODIIndication_BCM::ODII_FUCID::Start_Bit, ODIIndication_BCM::ODII_FUCID::Length, 47);

	Function_Build_Command(ODIIndication_BCM::Basic::Message_ID);
}

void CPlugInForSaintDlg::Function_FUCLASS42_Initialization()
{
	Function_Reload_DataBase();
	//AirQualitySensorPresent
	Function_Write_DataBase(ODIIndication_ECC::ODII_ODIInd1::Start_Bit,ODIIndication_ECC::ODII_ODIInd1::Length,1);
	//AutoCoolSeatsPresent
	Function_Write_DataBase(ODIIndication_ECC::ODII_ODIInd2::Start_Bit,ODIIndication_ECC::ODII_ODIInd2::Length,1);
	//AutoFanPresent
	Function_Write_DataBase(ODIIndication_ECC::ODII_ODIInd3::Start_Bit,ODIIndication_ECC::ODII_ODIInd3::Length,1);
	//AutoHeatedSeatsPresent
	Function_Write_DataBase(ODIIndication_ECC::ODII_ODIInd4::Start_Bit,ODIIndication_ECC::ODII_ODIInd4::Length,1);
	//AutoZoneTempPresent
	Function_Write_DataBase(ODIIndication_ECC::ODII_ODIInd5::Start_Bit,ODIIndication_ECC::ODII_ODIInd5::Length,1);
	//HVACRemoteStartPresent
	Function_Write_DataBase(ODIIndication_ECC::ODII_ODIInd6::Start_Bit,ODIIndication_ECC::ODII_ODIInd6::Length,1);
	//ACModePresent
	Function_Write_DataBase(ODIIndication_ECC::ODII_ODIInd7::Start_Bit,ODIIndication_ECC::ODII_ODIInd7::Length,1);
	//AutoDefogPresent
	Function_Write_DataBase(ODIIndication_ECC::ODII_ODIInd8::Start_Bit,ODIIndication_ECC::ODII_ODIInd8::Length,1);
	//AirQualitySensorPresent1
	Function_Write_DataBase(ODIIndication_ECC::ODII_ODIInd9::Start_Bit,ODIIndication_ECC::ODII_ODIInd9::Length,1);
	//RearZonePresent
	Function_Write_DataBase(ODIIndication_ECC::ODII_ODIInd10::Start_Bit,ODIIndication_ECC::ODII_ODIInd10::Length,1);
	//RearDefogStartUpPresent
	Function_Write_DataBase(ODIIndication_ECC::ODII_ODIInd11::Start_Bit,ODIIndication_ECC::ODII_ODIInd11::Length,1);
	//FUClass
	Function_Write_DataBase(ODIIndication_ECC::ODII_FUCID::Start_Bit,ODIIndication_ECC::ODII_FUCID::Length,42);

	Function_Build_Command(ODIIndication_ECC::Basic::Message_ID);
}

void CPlugInForSaintDlg::Function_FUCLASS43_Initialization()
{
	Function_Reload_DataBase();
	//AirQualitySensorPresent
	Function_Write_DataBase(ODIIndication_IPC_HS::ODII_ODIInd1::Start_Bit,ODIIndication_IPC_HS::ODII_ODIInd1::Length,1);
	//AutoCoolSeatsPresent
	Function_Write_DataBase(ODIIndication_IPC_HS::ODII_ODIInd2::Start_Bit,ODIIndication_IPC_HS::ODII_ODIInd2::Length,1);
	//AutoFanPresent
	Function_Write_DataBase(ODIIndication_IPC_HS::ODII_ODIInd3::Start_Bit,ODIIndication_IPC_HS::ODII_ODIInd3::Length,1);
	//FUClass
	Function_Write_DataBase(ODIIndication_IPC_HS::ODII_FUCID::Start_Bit,ODIIndication_IPC_HS::ODII_FUCID::Length,43);

	Function_Build_Command(ODIIndication_IPC_HS::Basic::Message_ID);
}

void CPlugInForSaintDlg::Function_FUCLASS48_Initialization()
{
	Function_Reload_DataBase();
	//ParkAssistSetting
	Function_Write_DataBase(ODIIndication_UPA_APA::ODII_ODIInd1::Start_Bit,ODIIndication_UPA_APA::ODII_ODIInd1::Length,1);
	//ParkAssistWithTowbarSetting
	Function_Write_DataBase(ODIIndication_UPA_APA::ODII_ODIInd2::Start_Bit,ODIIndication_UPA_APA::ODII_ODIInd2::Length,1);
	//FUClass
	Function_Write_DataBase(ODIIndication_UPA_APA::ODII_FUCID::Start_Bit,ODIIndication_UPA_APA::ODII_FUCID::Length,48);

	Function_Build_Command(ODIIndication_UPA_APA::Basic::Message_ID);
}

HRESULT CPlugInForSaintDlg::Function_FUCLASS40_ValueSetting(WPARAM wParam, LPARAM lParam)
{
	Function_Reload_DataBase();
	if(wParam == 1)
	{
		FUClass40[0] = 0;
		FUClass40[1] = 0;
		FUClass40[2] = 0;
		FUClass40[3] = 0;
		FUClass40[4] = 0;
		FUClass40[5] = 0;
		FUClass40[6] = 0;
		FUClass40[7] = 0;
		FUClass40[8] = 0;
		FUClass40[9] = 0;
		FUClass40[10] = 0;
		FUClass40[11] = 0;
	}
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_FUCID::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_FUCID::Length,40);
	//SetApproachLighting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data1Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data1Value::Length,FUClass40[0]);
	//SetAutoReverseGearRearWiperSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data2Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data2Value::Length,FUClass40[1]);
	//SetDriverPersonalizationSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data3Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data3Value::Length,FUClass40[2]);
	//SetExitLightTimeSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data4Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data4Value::Length,FUClass40[3]);
	//SetRemoteStartSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data5Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data5Value::Length,FUClass40[4]);
	//SetRemoteStartCooledSeatSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data6Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data6Value::Length,FUClass40[5]);
	//SetRemoteStartHeatedSeatSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data7Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data7Value::Length,FUClass40[6]);
	//SetPowertrainPerformanceSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data8Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data8Value::Length,FUClass40[7]);
	//SetDaytimeTaillightsSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data9Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data9Value::Length,FUClass40[8]);
	//SetRemoteStartCooledDrPasSeatSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data10Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data10Value::Length,FUClass40[9]);
	//SetRemoteStartHeatedDrPasSeatSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data11Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data11Value::Length,FUClass40[10]);
	//SetRainSenseWipersSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data12Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data12Value::Length,FUClass40[11]);

	Function_Build_Command(ODIEnumDynamicData_BCM::Basic::Message_ID);
	
	return 0;
}

//DoorsLocks
HRESULT CPlugInForSaintDlg::Function_FUCLASS44_ValueSetting(WPARAM wParam, LPARAM lParam)
{
	Function_Reload_DataBase();
	if(wParam == 1)
	{
		FUClass44[0] = 0;
		FUClass44[1] = 0;
		FUClass44[2] = 0;
		FUClass44[3] = 0;
		FUClass44[4] = 0;
		FUClass44[5] = 0;
		FUClass44[6] = 0;
		FUClass44[7] = 0;
		FUClass44[8] = 0;
		FUClass44[9] = 0;
		FUClass44[10] = 0;
		FUClass44[11] = 0;
		FUClass44[12] = 0;
		FUClass44[13] = 0;
	}
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_FUCID::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_FUCID::Length,44);
	//SetAutoLockingSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data1Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data1Value::Length,FUClass44[0]);
	//SetAutoUnlockingSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data2Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data2Value::Length,FUClass44[1]);
	//SetLastDoorClosedLockingSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data3Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data3Value::Length,FUClass44[2]);
	//SetManualTransUnlockingSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data4Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data4Value::Length,FUClass44[3]);
	//SetPassiveLockingSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data5Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data5Value::Length,FUClass44[4]);
	//SetPassiveUnlockingSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data6Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data6Value::Length,FUClass44[5]);
	//SetRelockRemoteDoorSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data7Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data7Value::Length,FUClass44[6]);
	//SetRelockRemoteUnlockedDoorSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data8Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data8Value::Length,FUClass44[7]);
	//SetRemoteInVehicleReminderSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data9Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data9Value::Length,FUClass44[8]);
	//SetRemoteLockingFeedbackSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data10Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data10Value::Length,FUClass44[9]);
	//SetRemoteSlidingDoorSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data11Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data11Value::Length,FUClass44[10]);
	//SetRemoteUnlocklLightingFeedbackSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data12Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data12Value::Length,FUClass44[11]);
	//SetSelectiveUnlockingSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data13Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data13Value::Length,FUClass44[12]);
	//SetOpenDoorAntiLockOutSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data14Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data14Value::Length,FUClass44[13]);

	Function_Build_Command(ODIEnumDynamicData_BCM::Basic::Message_ID);
	
	return 0;
}

//MemorySettings
HRESULT CPlugInForSaintDlg::Function_FUCLASS41_ValueSetting(WPARAM wParam, LPARAM lParam)
{
	Function_Reload_DataBase();
	if(wParam == 1)
	{
		FUClass41[0] = 0;
		FUClass41[1] = 0;
		FUClass41[2] = 0;
		FUClass41[3] = 0;
		FUClass41[4] = 0;
		FUClass41[5] = 0;
		FUClass41[6] = 0;
		FUClass41[7] = 0;
		FUClass41[8] = 0;
		FUClass41[9] = 0;
	}
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_FUCID::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_FUCID::Length,41);
	//DriverSeatEasyExitSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data1Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data1Value::Length,FUClass41[0]);
	//FoldingMirrorsSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data2Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data2Value::Length,FUClass41[1]);
	//MemoryColumnSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data3Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data3Value::Length,FUClass41[2]);
	//ParkingTiltMirrorsSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data4Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data4Value::Length,FUClass41[3]);
	//RemoteMemoryUnlockRecallSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data5Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data5Value::Length,FUClass41[4]);
	//MemoryTiltColumnSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data6Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data6Value::Length,FUClass41[5]);
	//CrashAvoidanceAlertTypeSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data7Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data7Value::Length,FUClass41[6]);
	//ReverseTiltMirrorsSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data8Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data8Value::Length,FUClass41[7]);
	//EasyExitSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data9Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data9Value::Length,FUClass41[8]);
	//MemoryRemoteRecallSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data10Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data10Value::Length,FUClass41[9]);

	Function_Build_Command(ODIEnumDynamicData_BCM::Basic::Message_ID);
	
	return 0;
}

HRESULT CPlugInForSaintDlg::Function_FUCLASS42_ValueSetting(WPARAM wParam, LPARAM lParam)
{
	Function_Reload_DataBase();
	if(wParam == 1)
	{
		FUClass42[0] = 0;
		FUClass42[1] = 0;
		FUClass42[2] = 0;
		FUClass42[3] = 0;
		FUClass42[4] = 0;
		FUClass42[5] = 0;
		FUClass42[6] = 0;
		FUClass42[7] = 0;
		FUClass42[8] = 0;
		FUClass42[9] = 0;
		FUClass42[10] = 0;
	}
	Function_Write_DataBase(ODIEnumDynamicData_ECC::ODIEDD_FUCID::Start_Bit,ODIEnumDynamicData_ECC::ODIEDD_FUCID::Length,42);
	//AirQualitySensorSetting
	Function_Write_DataBase(ODIEnumDynamicData_ECC::ODIEDD_Data1Value::Start_Bit,ODIEnumDynamicData_ECC::ODIEDD_Data1Value::Length,FUClass42[0]);
	//AutoCoolSeatsSetting 
	Function_Write_DataBase(ODIEnumDynamicData_ECC::ODIEDD_Data2Value::Start_Bit,ODIEnumDynamicData_ECC::ODIEDD_Data2Value::Length,FUClass42[1]);
	//AutoFanSetting
	Function_Write_DataBase(ODIEnumDynamicData_ECC::ODIEDD_Data3Value::Start_Bit,ODIEnumDynamicData_ECC::ODIEDD_Data3Value::Length,FUClass42[2]);
	//AutoHeatedSeatsSetting
	Function_Write_DataBase(ODIEnumDynamicData_ECC::ODIEDD_Data4Value::Start_Bit,ODIEnumDynamicData_ECC::ODIEDD_Data4Value::Length,FUClass42[3]);
	//AutoZoneTempSetting
	Function_Write_DataBase(ODIEnumDynamicData_ECC::ODIEDD_Data5Value::Start_Bit,ODIEnumDynamicData_ECC::ODIEDD_Data5Value::Length,FUClass42[4]);
	//HVACRemoteStartSetting
	Function_Write_DataBase(ODIEnumDynamicData_ECC::ODIEDD_Data6Value::Start_Bit,ODIEnumDynamicData_ECC::ODIEDD_Data6Value::Length,FUClass42[5]);
	//ACModeSetting
	Function_Write_DataBase(ODIEnumDynamicData_ECC::ODIEDD_Data7Value::Start_Bit,ODIEnumDynamicData_ECC::ODIEDD_Data7Value::Length,FUClass42[6]);
	//AutoDefogSetting
	Function_Write_DataBase(ODIEnumDynamicData_ECC::ODIEDD_Data8Value::Start_Bit,ODIEnumDynamicData_ECC::ODIEDD_Data8Value::Length,FUClass42[7]);
	//AirQualitySensorSetting1
	Function_Write_DataBase(ODIEnumDynamicData_ECC::ODIEDD_Data9Value::Start_Bit,ODIEnumDynamicData_ECC::ODIEDD_Data9Value::Length,FUClass42[8]);
	//RearZoneStartupSetting
	Function_Write_DataBase(ODIEnumDynamicData_ECC::ODIEDD_Data10Value::Start_Bit,ODIEnumDynamicData_ECC::ODIEDD_Data10Value::Length,FUClass42[9]);
	//RearDefogStartupSetting
	Function_Write_DataBase(ODIEnumDynamicData_ECC::ODIEDD_Data11Value::Start_Bit,ODIEnumDynamicData_ECC::ODIEDD_Data11Value::Length,FUClass42[10]);

	Function_Build_Command(ODIEnumDynamicData_ECC::Basic::Message_ID);
	
	return 0;
}

HRESULT CPlugInForSaintDlg::Function_FUCLASS43_ValueSetting(WPARAM wParam, LPARAM lParam)
{
	Function_Reload_DataBase();
	if(wParam == 1)
	{
		FUClass43[0] = 0;
		FUClass43[1] = 0;
		FUClass43[2] = 0;
	}
	Function_Write_DataBase(ODIEnumDynamicData_IPC_HS::ODIEDD_FUCID::Start_Bit,ODIEnumDynamicData_IPC_HS::ODIEDD_FUCID::Length,43);
	//SetSpeedScaleIlluminationSetting
	Function_Write_DataBase(ODIEnumDynamicData_IPC_HS::ODIEDD_Data1Value::Start_Bit,ODIEnumDynamicData_IPC_HS::ODIEDD_Data1Value::Length,FUClass43[0]);
	//SetSportModeBackLightingSetting
	Function_Write_DataBase(ODIEnumDynamicData_IPC_HS::ODIEDD_Data2Value::Start_Bit,ODIEnumDynamicData_IPC_HS::ODIEDD_Data2Value::Length,FUClass43[1]);
	//SetEcoModeTelltaleEnableSetting
	Function_Write_DataBase(ODIEnumDynamicData_IPC_HS::ODIEDD_Data3Value::Start_Bit,ODIEnumDynamicData_IPC_HS::ODIEDD_Data3Value::Length,FUClass43[2]);

	Function_Build_Command(ODIEnumDynamicData_IPC_HS::Basic::Message_ID);
	
	return 0;
}

HRESULT CPlugInForSaintDlg::Function_FUCLASS47_ValueSetting(WPARAM wParam, LPARAM lParam)
{
	Function_Reload_DataBase();
	if(wParam == 1)
	{
		FUClass47[0] = 0;
		FUClass47[1] = 0;

	}
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_FUCID::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_FUCID::Length,47);
	//SideBlindZoneAlertSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data1Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data1Value::Length,FUClass47[0]);
	//RearCrossTrafficAlertOptions---12/2/2016 add
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data2Value::Start_Bit, ODIEnumDynamicData_BCM::ODIEDD_Data2Value::Length, FUClass47[1]);

	Function_Build_Command(ODIEnumDynamicData_BCM::Basic::Message_ID);
	
	return 0;
}

HRESULT CPlugInForSaintDlg::Function_FUCLASS48_ValueSetting(WPARAM wParam, LPARAM lParam)
{
	Function_Reload_DataBase();
	if(wParam == 1)
	{
		FUClass48[0] = 0;
		FUClass48[1] = 0;
	}
	Function_Write_DataBase(ODIEnumDynamicData_UPA_APA::ODIEDD_FUCID::Start_Bit,ODIEnumDynamicData_UPA_APA::ODIEDD_FUCID::Length,48);
	//SetParkAssistSetting
	Function_Write_DataBase(ODIEnumDynamicData_UPA_APA::ODIEDD_Data1Value::Start_Bit,ODIEnumDynamicData_UPA_APA::ODIEDD_Data1Value::Length,FUClass48[0]);
	//SetParkAssistWithTowbarSetting
	Function_Write_DataBase(ODIEnumDynamicData_UPA_APA::ODIEDD_Data2Value::Start_Bit,ODIEnumDynamicData_UPA_APA::ODIEDD_Data2Value::Length,FUClass48[1]);

	Function_Build_Command(ODIEnumDynamicData_UPA_APA::Basic::Message_ID);
	
	return 0;
}

HRESULT CPlugInForSaintDlg::Function_FUCLASS45_ValueSetting(WPARAM wParam, LPARAM lParam)
{
	Function_Reload_DataBase();
	if(wParam == 1)
	{
		FUClass45[0] = 0;
		FUClass45[1] = 0;
		FUClass45[2] = 0;
		FUClass45[3] = 0;
		FUClass45[4] = 0;
		FUClass45[5] = 0;
		FUClass45[6] = 0;
	}
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_FUCID::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_FUCID::Length,45);
	//SetMultiSportMode_Steering
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data1Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data1Value::Length,FUClass45[0]);
	//SetMultiSportMode_AccelPedal
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data2Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data2Value::Length,FUClass45[1]);
	//SetMultiSportMode_AllWheelDrive
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data3Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data3Value::Length,FUClass45[2]);
	//SetMultiSportMode_AutoTrans
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data4Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data4Value::Length,FUClass45[3]);
	//SetMultiSportMode_RealTimeDamp
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data5Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data5Value::Length,FUClass45[4]);
	//SetMultiSportMode_AdaptiveFwdLighting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data6Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data6Value::Length,FUClass45[5]);
	//SetSingleSportModeSetting
	Function_Write_DataBase(ODIEnumDynamicData_BCM::ODIEDD_Data7Value::Start_Bit,ODIEnumDynamicData_BCM::ODIEDD_Data7Value::Length,FUClass45[6]);

	Function_Build_Command(ODIEnumDynamicData_BCM::Basic::Message_ID);
	
	return 0;
}

HRESULT CPlugInForSaintDlg::Function_MC_Read(WPARAM wParam, LPARAM lParam)
{
	Flag_MCheckSum = true;
	Count_MCheckStep = 0;
	Get_Count = 0;
	Function_Send_Command("58 02 48 07 31 F0 C0 E0 F0 F8 FC");//Enter Manufacturing Diagnostic Mode
	return 0;
}

HRESULT CPlugInForSaintDlg::Function_MC_Process(WPARAM wParam, LPARAM lParam)
{
	unsigned __int8 *pData =(unsigned __int8*)wParam;
	CString Value_Buff;
	switch(Count_MCheckStep)
	{
	#pragma region 0
	case 0://Waiting enter Manufacturing Diagnostic Mode
		if((pData[4] == 0xF0 && pData[5] == 0xC0 && pData[6] == 0xE0 && pData[7] == 0xF0 && pData[8] == 0xF8 && pData[9] == 0xFC)||(pData[5] == 0xF0 && pData[6] == 0xC0 && pData[7] == 0xE0 && pData[8] == 0xF0 && pData[9] == 0xF8 && pData[10] == 0xFC))
		{
			Count_MCheckStep++;
			//Request K0R checksum
			Function_Send_Command("58 02 48 07 31 00 02 24 02 03 01");
		}
		break;
	#pragma endregion
	#pragma region 1
	case 1://Waiting K0R checksum
		if(pData[4] == 0xD0 && pData[5] == 0x01)
		{
			
			//Write K0R
			Value_Buff = Function_Message_SBuild(8,1,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_AddInfo(gcnew System::String(Value_Buff),Count_MCheckStep - 1);
			//Request MTD0 value
			Function_Send_Command("58 02 48 07 31 40 10 FC 04 6D 74");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 90 64 30 00 00 02");
			Sleep(100);
			Function_Send_Command("58 02 48 05 31 E0 00 00 01");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 40 10 FE 04 6D 74");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 90 64 30 00 00 02");
			Sleep(100);
			Function_Send_Command("58 02 48 04 31 E0 00 00");
			Count_MCheckStep++;
		}
		if(pData[5] == 0xD0 && pData[6] == 0x01)
		{
			//Write K0R
			Value_Buff = Function_Message_SBuild(9,1,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_AddInfo(gcnew System::String(Value_Buff),Count_MCheckStep - 1);
			//Request MTD0 value
			Function_Send_Command("58 02 48 07 31 40 10 FC 04 6D 74");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 90 64 30 00 00 02");
			Sleep(100);
			Function_Send_Command("58 02 48 05 31 E0 00 00 01");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 40 10 FE 04 6D 74");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 90 64 30 00 00 02");
			Sleep(100);
			Function_Send_Command("58 02 48 04 31 E0 00 00");
			Count_MCheckStep++;
		}
	#pragma endregion
	#pragma region 2
	case 2://waiting MTD0 value
		if(pData[5] == 0xA0 && Get_Count == 0)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(10,0,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0xA0 && Get_Count == 0)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(9,0,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
		}
		if(pData[5] == 0xB0 && Get_Count == 1)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(6,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0xB0 && Get_Count == 1)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(5,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[5] == 0x80 && Get_Count == 2)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(6,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0x80 && Get_Count == 2)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(5,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[5] == 0xD0 && Get_Count == 3)
		{
			Get_Count = 0;
			Value_Buff = Function_Message_SBuild(6,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			FormFunc.Ctrl_MCheckForm->Function_MC_AddInfo(Count_MCheckStep - 1);

			//Write MTD0

			//Request MTD1
			Function_Send_Command("58 02 48 07 31 40 10 FC 04 6D 74");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 90 64 31 00 00 01");
			Sleep(100);
			Function_Send_Command("58 02 48 05 31 E0 00 00 01");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 40 10 FE 04 6D 74");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 90 64 31 00 00 01");
			Sleep(100);
			Function_Send_Command("58 02 48 04 31 E0 00 00");
			Count_MCheckStep++;
		}
		if(pData[4] == 0xD0 && Get_Count == 3)
		{
			Get_Count = 0;
			Value_Buff = Function_Message_SBuild(5,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			FormFunc.Ctrl_MCheckForm->Function_MC_AddInfo(Count_MCheckStep - 1);
			//Write MTD0

			//Request MTD1
			Function_Send_Command("58 02 48 07 31 40 10 FC 04 6D 74");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 90 64 31 00 00 01");
			Sleep(100);
			Function_Send_Command("58 02 48 05 31 E0 00 00 01");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 40 10 FE 04 6D 74");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 90 64 31 00 00 01");
			Sleep(100);
			Function_Send_Command("58 02 48 04 31 E0 00 00");
			Count_MCheckStep++;
		}
		break;
	#pragma endregion
	#pragma region 3
	case 3://waiting MTD1 value
		if(pData[5] == 0xA0 && Get_Count == 0)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(10,0,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0xA0 && Get_Count == 0)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(9,0,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
		}
		if(pData[5] == 0xB0 && Get_Count == 1)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(6,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0xB0 && Get_Count == 1)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(5,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[5] == 0x80 && Get_Count == 2)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(6,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0x80 && Get_Count == 2)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(5,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[5] == 0xD0 && Get_Count == 3)
		{
			Get_Count = 0;
			Value_Buff = Function_Message_SBuild(6,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			FormFunc.Ctrl_MCheckForm->Function_MC_AddInfo(Count_MCheckStep - 1);

			//Write MTD0

			//Request MTD1
			Function_Send_Command("58 02 48 07 31 40 10 FC 04 6D 74");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 90 64 33 00 00 02");
			Sleep(100);
			Function_Send_Command("58 02 48 05 31 E0 00 00 01");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 40 10 FE 04 6D 74");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 90 64 33 00 00 02");
			Sleep(100);
			Function_Send_Command("58 02 48 04 31 E0 00 00");
			Count_MCheckStep++;
		}
		if(pData[4] == 0xD0 && Get_Count == 3)
		{
			Get_Count = 0;
			Value_Buff = Function_Message_SBuild(5,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			FormFunc.Ctrl_MCheckForm->Function_MC_AddInfo(Count_MCheckStep - 1);
			//Write MTD0

			//Request MTD1
			Function_Send_Command("58 02 48 07 31 40 10 FC 04 6D 74");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 90 64 33 00 00 02");
			Sleep(100);
			Function_Send_Command("58 02 48 05 31 E0 00 00 01");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 40 10 FE 04 6D 74");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 90 64 33 00 00 02");
			Sleep(100);
			Function_Send_Command("58 02 48 04 31 E0 00 00");
			Count_MCheckStep++;
		}

		break;
	#pragma endregion
	#pragma region 4
	case 4://waiting MTD3 value
		if(pData[5] == 0xA0 && Get_Count == 0)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(10,0,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0xA0 && Get_Count == 0)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(9,0,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
		}
		if(pData[5] == 0xB0 && Get_Count == 1)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(6,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0xB0 && Get_Count == 1)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(5,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[5] == 0x80 && Get_Count == 2)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(6,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0x80 && Get_Count == 2)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(5,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[5] == 0xD0 && Get_Count == 3)
		{
			Get_Count = 0;
			Value_Buff = Function_Message_SBuild(6,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			FormFunc.Ctrl_MCheckForm->Function_MC_AddInfo(Count_MCheckStep - 1);

			//Write MTD0

			//Request MTD1
			Function_Send_Command("58 02 48 07 31 40 10 FC 04 6D 74");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 90 64 34 00 00 20");
			Sleep(100);
			Function_Send_Command("58 02 48 05 31 E0 00 00 01");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 40 10 FE 04 6D 74");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 90 64 34 00 00 20");
			Sleep(100);
			Function_Send_Command("58 02 48 04 31 E0 00 00");
			Count_MCheckStep++;
		}
		if(pData[4] == 0xD0 && Get_Count == 3)
		{
			Get_Count = 0;
			Value_Buff = Function_Message_SBuild(5,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			FormFunc.Ctrl_MCheckForm->Function_MC_AddInfo(Count_MCheckStep - 1);
			//Write MTD0

			//Request MTD1
			Function_Send_Command("58 02 48 07 31 40 10 FC 04 6D 74");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 90 64 34 00 00 20");
			Sleep(100);
			Function_Send_Command("58 02 48 05 31 E0 00 00 01");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 40 10 FE 04 6D 74");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 90 64 34 00 00 20");
			Sleep(100);
			Function_Send_Command("58 02 48 04 31 E0 00 00");
			Count_MCheckStep++;
		}
		break;
		#pragma endregion
	#pragma region 5
	case 5://waiting MTD4 value
		if(pData[5] == 0xA0 && Get_Count == 0)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(10,0,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0xA0 && Get_Count == 0)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(9,0,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
		}
		if(pData[5] == 0xB0 && Get_Count == 1)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(6,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0xB0 && Get_Count == 1)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(5,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[5] == 0x80 && Get_Count == 2)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(6,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0x80 && Get_Count == 2)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(5,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[5] == 0xD0 && Get_Count == 3)
		{
			Get_Count = 0;
			Value_Buff = Function_Message_SBuild(6,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			FormFunc.Ctrl_MCheckForm->Function_MC_AddInfo(Count_MCheckStep - 1);
			//Write MTD0

			//Request MTD1
			Function_Send_Command("58 02 48 07 31 40 10 FC 04 6D 74");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 90 64 35 00 00 30");
			Sleep(100);
			Function_Send_Command("58 02 48 05 31 E0 00 00 01");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 40 10 FE 04 6D 74");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 90 64 35 00 00 30");
			Sleep(100);
			Function_Send_Command("58 02 48 04 31 E0 00 00");
			Count_MCheckStep++;
		}
		if(pData[4] == 0xD0 && Get_Count == 3)
		{
			Get_Count = 0;
			Value_Buff = Function_Message_SBuild(5,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			FormFunc.Ctrl_MCheckForm->Function_MC_AddInfo(Count_MCheckStep - 1);
			//Write MTD0

			//Request MTD1
			Function_Send_Command("58 02 48 07 31 40 10 FC 04 6D 74");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 90 64 35 00 00 30");
			Sleep(100);
			Function_Send_Command("58 02 48 05 31 E0 00 00 01");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 40 10 FE 04 6D 74");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 90 64 35 00 00 30");
			Sleep(100);
			Function_Send_Command("58 02 48 04 31 E0 00 00");
			Count_MCheckStep++;
		}
		break;
		#pragma endregion
	#pragma region 6
	case 6://waiting MTD5 value
		if(pData[5] == 0xA0 && Get_Count == 0)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(10,0,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0xA0 && Get_Count == 0)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(9,0,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
		}
		if(pData[5] == 0xB0 && Get_Count == 1)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(6,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0xB0 && Get_Count == 1)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(5,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[5] == 0x80 && Get_Count == 2)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(6,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0x80 && Get_Count == 2)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(5,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[5] == 0xD0 && Get_Count == 3)
		{
			Get_Count = 0;
			Value_Buff = Function_Message_SBuild(6,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			FormFunc.Ctrl_MCheckForm->Function_MC_AddInfo(Count_MCheckStep - 1);
			//Write MTD0

			//Request MTD1
			Function_Send_Command("58 02 48 07 31 40 10 FC 04 6D 74");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 90 64 36 00 00 20");
			Sleep(100);
			Function_Send_Command("58 02 48 05 31 E0 00 00 01");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 40 10 FE 04 6D 74");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 90 64 36 00 00 20");
			Sleep(100);
			Function_Send_Command("58 02 48 04 31 E0 00 00");
			Count_MCheckStep++;
		}
		if(pData[4] == 0xD0 && Get_Count == 3)
		{
			Get_Count = 0;
			Value_Buff = Function_Message_SBuild(5,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			FormFunc.Ctrl_MCheckForm->Function_MC_AddInfo(Count_MCheckStep - 1);
			//Write MTD0

			//Request MTD1
			Function_Send_Command("58 02 48 07 31 40 10 FC 04 6D 74");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 90 64 36 00 00 20");
			Sleep(100);
			Function_Send_Command("58 02 48 05 31 E0 00 00 01");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 40 10 FE 04 6D 74");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 90 64 36 00 00 20");
			Sleep(100);
			Function_Send_Command("58 02 48 04 31 E0 00 00");
			Count_MCheckStep++;
		}
		
		break;
	#pragma endregion
	#pragma region 7
	case 7://waiting MTD6 value
		if(pData[5] == 0xA0 && Get_Count == 0)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(10,0,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0xA0 && Get_Count == 0)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(9,0,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
		}
		if(pData[5] == 0xB0 && Get_Count == 1)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(6,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0xB0 && Get_Count == 1)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(5,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[5] == 0x80 && Get_Count == 2)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(6,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0x80 && Get_Count == 2)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(5,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[5] == 0xD0 && Get_Count == 3)
		{
			Get_Count = 0;
			Value_Buff = Function_Message_SBuild(6,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			FormFunc.Ctrl_MCheckForm->Function_MC_AddInfo(Count_MCheckStep - 1);
			//Write MTD0

			//Request MTD1
			Function_Send_Command("58 02 48 07 31 40 10 FC 04 6D 74");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 90 64 39 00 00 01");
			Sleep(100);
			Function_Send_Command("58 02 48 05 31 E0 00 00 01");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 40 10 FE 04 6D 74");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 90 64 39 00 00 01");
			Sleep(100);
			Function_Send_Command("58 02 48 04 31 E0 00 00");
			Count_MCheckStep++;
		}
		if(pData[4] == 0xD0 && Get_Count == 3)
		{
			Get_Count = 0;
			Value_Buff = Function_Message_SBuild(5,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			FormFunc.Ctrl_MCheckForm->Function_MC_AddInfo(Count_MCheckStep - 1);
			//Write MTD0

			//Request MTD1
			Function_Send_Command("58 02 48 07 31 40 10 FC 04 6D 74");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 90 64 39 00 00 01");
			Sleep(100);
			Function_Send_Command("58 02 48 05 31 E0 00 00 01");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 40 10 FE 04 6D 74");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 90 64 39 00 00 01");
			Sleep(100);
			Function_Send_Command("58 02 48 04 31 E0 00 00");
			Count_MCheckStep++;
		}
		
		break;
	#pragma endregion
		#pragma region 8
	case 8://waiting MTD9 value
		if(pData[5] == 0xA0 && Get_Count == 0)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(10,0,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0xA0 && Get_Count == 0)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(9,0,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
		}
		if(pData[5] == 0xB0 && Get_Count == 1)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(6,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0xB0 && Get_Count == 1)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(5,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[5] == 0x80 && Get_Count == 2)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(6,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0x80 && Get_Count == 2)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(5,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[5] == 0xD0 && Get_Count == 3)
		{
			Get_Count = 0;
			Value_Buff = Function_Message_SBuild(6,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			FormFunc.Ctrl_MCheckForm->Function_MC_AddInfo(Count_MCheckStep - 1);
			//Write MTD0

			//Request MTD1
			Function_Send_Command("58 02 48 07 31 F0 C0 E0 F0 F8 FC");
			Sleep(100);
			Function_Send_Command("58 02 48 06 31 00 10 1E 00 01");
			Sleep(100);
			Function_Send_Command("58 02 48 06 31 00 02 00 00 01");
			Sleep(100);
			Function_Send_Command("58 02 48 06 31 00 02 02 00 01");
			Sleep(100);
			Function_Send_Command("58 02 48 04 31 00 02 F8");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 00 02 58 02 00 11");//request P0
			Count_MCheckStep++;
		}
		if(pData[4] == 0xD0 && Get_Count == 3)
		{
			Get_Count = 0;
			Value_Buff = Function_Message_SBuild(5,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			FormFunc.Ctrl_MCheckForm->Function_MC_AddInfo(Count_MCheckStep - 1);
			//Write MTD0

			//Request MTD1
			Function_Send_Command("58 02 48 07 31 F0 C0 E0 F0 F8 FC");
			Sleep(100);
			Function_Send_Command("58 02 48 06 31 00 10 1E 00 01");
			Sleep(100);
			Function_Send_Command("58 02 48 06 31 00 02 00 00 01");
			Sleep(100);
			Function_Send_Command("58 02 48 06 31 00 02 02 00 01");
			Sleep(100);
			Function_Send_Command("58 02 48 04 31 00 02 F8");
			Sleep(100);
			Function_Send_Command("58 02 48 07 31 00 02 58 02 00 11");//request P0
			Count_MCheckStep++;
		}
		break;
		#pragma endregion
		#pragma region 9
	case 9://Waiting P0
		if(pData[5] == 0x90 && Get_Count == 0)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(8,2,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0x90 && Get_Count == 0)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(7,2,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
		}
		if(pData[5] == 0xA0 && Get_Count == 1)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(6,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0xA0 && Get_Count == 1)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(5,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[5] == 0xB0 && Get_Count == 2)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(6,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0xB0 && Get_Count == 2)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(5,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[5] == 0xC0 && Get_Count == 3)
		{
			Get_Count = 0;
			Value_Buff = Function_Message_SBuild(6,2,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			FormFunc.Ctrl_MCheckForm->Function_MC_AddInfo(Count_MCheckStep - 1);
			//Write MTD0
			Function_Send_Command("58 02 48 07 31 00 02 58 02 00 12");//request P0
			//Request MTD1
			
			Count_MCheckStep++;
		}
		if(pData[4] == 0xC0 && Get_Count == 3)
		{
			Get_Count = 0;
			Value_Buff = Function_Message_SBuild(5,2,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			FormFunc.Ctrl_MCheckForm->Function_MC_AddInfo(Count_MCheckStep - 1);
			//Write MTD0
			Function_Send_Command("58 02 48 07 31 00 02 58 02 00 12");//request P0
			//Request MTD1
			
			Count_MCheckStep++;
		}

		break;
#pragma endregion
		#pragma region 10
	case 10://Waiting P1
		if(pData[5] == 0x90 && Get_Count == 0)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(8,2,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0x90 && Get_Count == 0)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(7,2,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
		}
		if(pData[5] == 0xA0 && Get_Count == 1)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(6,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0xA0 && Get_Count == 1)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(5,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[5] == 0xB0 && Get_Count == 2)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(6,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0xB0 && Get_Count == 2)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(5,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[5] == 0xC0 && Get_Count == 3)
		{
			Get_Count = 0;
			Value_Buff = Function_Message_SBuild(6,2,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			FormFunc.Ctrl_MCheckForm->Function_MC_AddInfo(Count_MCheckStep - 1);
			//Write MTD0
			Function_Send_Command("58 02 48 07 31 00 02 58 02 00 13");//request P2
			//Request MTD1
			
			Count_MCheckStep++;
		}
		if(pData[4] == 0xC0 && Get_Count == 3)
		{
			Get_Count = 0;
			Value_Buff = Function_Message_SBuild(5,2,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			FormFunc.Ctrl_MCheckForm->Function_MC_AddInfo(Count_MCheckStep - 1);
			//Write MTD0
			Function_Send_Command("58 02 48 07 31 00 02 58 02 00 13");//request P2
			//Request MTD1
			
			Count_MCheckStep++;
		}
		
		break;
#pragma endregion
	#pragma region 11
	case 11://Waiting P2
		if(pData[5] == 0x90 && Get_Count == 0)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(8,2,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0x90 && Get_Count == 0)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(7,2,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
		}
		if(pData[5] == 0xA0 && Get_Count == 1)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(6,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0xA0 && Get_Count == 1)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(5,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[5] == 0xB0 && Get_Count == 2)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(6,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0xB0 && Get_Count == 2)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(5,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[5] == 0xC0 && Get_Count == 3)
		{
			Get_Count = 0;
			Value_Buff = Function_Message_SBuild(6,2,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			FormFunc.Ctrl_MCheckForm->Function_MC_AddInfo(Count_MCheckStep - 1);
			//Write MTD0
			Function_Send_Command("58 02 48 07 31 00 02 58 02 00 14");//request P3
			//Request MTD1
			
			Count_MCheckStep++;
		}
		if(pData[4] == 0xC0 && Get_Count == 3)
		{
			Get_Count = 0;
			Value_Buff = Function_Message_SBuild(5,2,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			FormFunc.Ctrl_MCheckForm->Function_MC_AddInfo(Count_MCheckStep - 1);
			//Write MTD0
			Function_Send_Command("58 02 48 07 31 00 02 58 02 00 14");//request P3
			//Request MTD1
			
			Count_MCheckStep++;
		}
		break;
	#pragma endregion
	#pragma region 12
	case 12://Waiting P3
		if(pData[5] == 0x90 && Get_Count == 0)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(8,2,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0x90 && Get_Count == 0)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(7,2,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
		}
		if(pData[5] == 0xA0 && Get_Count == 1)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(6,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0xA0 && Get_Count == 1)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(5,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[5] == 0xB0 && Get_Count == 2)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(6,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0xB0 && Get_Count == 2)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(5,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[5] == 0xC0 && Get_Count == 3)
		{
			Get_Count = 0;
			Value_Buff = Function_Message_SBuild(6,2,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			FormFunc.Ctrl_MCheckForm->Function_MC_AddInfo(Count_MCheckStep - 1);
			//Write MTD0
			Function_Send_Command("58 02 48 07 31 00 02 58 02 00 15");//request P4
			//Request MTD1
			
			Count_MCheckStep++;
		}
		if(pData[4] == 0xC0 && Get_Count == 3)
		{
			Get_Count = 0;
			Value_Buff = Function_Message_SBuild(5,2,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			FormFunc.Ctrl_MCheckForm->Function_MC_AddInfo(Count_MCheckStep - 1);
			//Write MTD0
			Function_Send_Command("58 02 48 07 31 00 02 58 02 00 15");//request P4
			//Request MTD1
			
			Count_MCheckStep++;
		}
		break;
	#pragma endregion
	#pragma region 13
	case 13://Waiting P4
		if(pData[5] == 0x90 && Get_Count == 0)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(8,2,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0x90 && Get_Count == 0)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(7,2,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
		}
		if(pData[5] == 0xA0 && Get_Count == 1)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(6,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0xA0 && Get_Count == 1)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(5,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[5] == 0xB0 && Get_Count == 2)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(6,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[4] == 0xB0 && Get_Count == 2)
		{
			Get_Count++;
			Value_Buff = Function_Message_SBuild(5,4,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			//Write MTD0
		}
		if(pData[5] == 0xC0 && Get_Count == 3)
		{
			Get_Count = 0;
			Value_Buff = Function_Message_SBuild(6,2,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			FormFunc.Ctrl_MCheckForm->Function_MC_AddInfo(Count_MCheckStep - 1);
			//Write MTD0
			Flag_MCheckSum = false;
			//Request MTD1
			
			Count_MCheckStep++;
		}
		if(pData[4] == 0xC0 && Get_Count == 3)
		{
			Get_Count = 0;
			Value_Buff = Function_Message_SBuild(5,2,wParam);
			FormFunc.Ctrl_MCheckForm->Function_MC_ValueBuild(gcnew System::String(Value_Buff));
			FormFunc.Ctrl_MCheckForm->Function_MC_AddInfo(Count_MCheckStep - 1);
			//Write MTD0
			Flag_MCheckSum = false;
			//Request MTD1
			Count_MCheckStep++;
		}
		break;
	#pragma endregion
	default:
		break;
	}
	//free(pData);
	return 0;
}

HRESULT CPlugInForSaintDlg::Function_PITS_Read(WPARAM wParam, LPARAM lParam)
{
	Function_Send_Command("58 02 48 07 31 F0 C0 E0 F0 F8 FC");
	Sleep(100);
	Function_Send_Command("58 02 48 06 31 00 10 1E 00 01");
	Sleep(100);
	Function_Send_Command("58 02 48 06 31 00 02 00 00 01");
	Sleep(100);
	Function_Send_Command("58 02 48 06 31 00 02 02 00 01");
	Sleep(100);
	Function_Send_Command("58 02 48 04 31 00 02 F8");
	Sleep(100);
	PITS_Step = 0;
	PITS_Stage = 1;
	Function_Send_Command("58 02 48 07 31 00 02 58" + FormFunc.Ctrl_MCheckForm->Function_Get_SWID(PITS_Step));
	Flag_PITs = true;
	return 0;
}

HRESULT CPlugInForSaintDlg::Function_PITS_Process(WPARAM wParam, LPARAM lParam)
{
	unsigned __int8 *pData =(unsigned __int8*)wParam;

	if(PITS_Stage == 1)	//Check SWID
	{
		if(pData[0] == 0xC9)//Error Information
		{
			PITS_Check = Function_Message_SBuild(8,1,wParam);
		}
		else//Normal Information
		{
			PITS_Check = Function_Message_SBuild(9,1,wParam);
		}
		PITS_Stage = 2;
	}
	else if(PITS_Stage == 2)
	{
		if(pData[0] == 0xC9)//Check SWID
		{
			PITS_Check = PITS_Check + Function_Message_SBuild(5,0,wParam);
		}
		else
		{
			PITS_Check = PITS_Check + Function_Message_SBuild(6,0,wParam);
		}
		if(PITS_Check == FormFunc.Ctrl_MCheckForm->Function_Get_SWID(PITS_Step))//Compare SWID
		{
			if(pData[0] == 0xC9)//Check SWID
			{
				PITS_Length = pData[6];
				Length_Buff = PITS_Length;
			}
			else
			{
				PITS_Length = pData[7];
				Length_Buff = PITS_Length;
			}
			if(Length_Buff<=3)
			{
				if(pData[0] == 0xC9)
				{
					PITS_Value = Function_Message_SBuild(7,Length_Buff - 1,wParam);
				}
				else
				{
					PITS_Value = Function_Message_SBuild(8,Length_Buff - 1,wParam);
				}
				FormFunc.Ctrl_MCheckForm->Function_PITS_AddInfo(gcnew System::String(PITS_Value),PITS_Length,PITS_Step);
				Function_PITS_Restore();
			}
			else
			{
				if(pData[0] == 0xC9)
				{
					PITS_Value = Function_Message_SBuild(7,2,wParam);
				}
				else
				{
					PITS_Value = Function_Message_SBuild(8,2,wParam);
				}
				Length_Buff = Length_Buff - 3;
				PITS_Stage++;
			}
		}
		else//ReCheck SWID
		{
			if(pData[0] == 0xC9)//Error Information
			{
				PITS_Check = Function_Message_SBuild(8,1,wParam);
			}
			else//Normal Information
			{
				PITS_Check = Function_Message_SBuild(9,1,wParam);
			}
		}
	}
	else if(PITS_Stage == 3)
	{
		if(Length_Buff <= 5)
		{
			CString Buff;
			if(pData[0] == 0xC9)
			{
				Buff = Function_Message_SBuild(5,Length_Buff - 1,wParam);
			}
			else
			{
				Buff = Function_Message_SBuild(6,Length_Buff - 1,wParam);
			}
			PITS_Value = PITS_Value + Buff;
			FormFunc.Ctrl_MCheckForm->Function_PITS_AddInfo(gcnew System::String(PITS_Value),PITS_Length,PITS_Step);
			Function_PITS_Restore();
		}
		else
		{
			CString Buff;
			if(pData[0] == 0xC9)
			{
				Buff = Function_Message_SBuild(5,5,wParam);
			}
			else
			{
				Buff = Function_Message_SBuild(6,5,wParam);
			}
			PITS_Value = PITS_Value + Buff;
			Length_Buff = Length_Buff - 5;
		}
	}
	return 0;
}

void CPlugInForSaintDlg::Function_PITS_Restore()
{
	if(PITS_Step < 96)
	{
		PITS_Step++;
		PITS_Length = 0;
		PITS_Value = "";
		PITS_Check = "";
		Flag_PITs = true;
		Function_Send_Command("58 02 48 07 31 00 02 58" + FormFunc.Ctrl_MCheckForm->Function_Get_SWID(PITS_Step));
		PITS_Stage = 1;
	}
	else
	{
		PITS_Step = 0;
		PITS_Stage = 0;
		PITS_Length = 0;
		PITS_Check = "";
		PITS_Value = "";
		Flag_PITs = false;
	}
}
void CPlugInForSaintDlg::timestart(int value)
{
	if(value == 0)
	{

	}
}

HRESULT CPlugInForSaintDlg::Function_APASpeedNotEnabled(WPARAM wParam, LPARAM lParam)
{
	FormFunc.Ctrl_MainForm.GetControl()->Bar_VehSpdAvgDrvn->Enabled = false;
	FormFunc.Ctrl_MainForm.GetControl()->Bar_VehSpdAvgNDrvn->Enabled = false;
	return 0;
}

HRESULT CPlugInForSaintDlg::Function_APASpeed10(WPARAM wParam, LPARAM lParam)
{
	FormFunc.Ctrl_MainForm.GetControl()->Bar_VehSpdAvgDrvn->Value = 640;
	return 0;
}

HRESULT CPlugInForSaintDlg::Function_APASpeed0(WPARAM wParam, LPARAM lParam)
{
	FormFunc.Ctrl_MainForm.GetControl()->Bar_VehSpdAvgDrvn->Value = 0;
	return 0;
}

HRESULT CPlugInForSaintDlg::Function_APASpeedEnabled(WPARAM wParam, LPARAM lParam)
{
	FormFunc.Ctrl_MainForm.GetControl()->Bar_VehSpdAvgDrvn->Enabled = true;
	FormFunc.Ctrl_MainForm.GetControl()->Bar_VehSpdAvgNDrvn->Enabled = true;
	return 0;
}