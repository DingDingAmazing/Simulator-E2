#include "stdafx.h"
#include "PlugIn For Saint.h"
#include "APAFrame.h"
#include "afxdialogex.h"
#include "Message Map.h"

/*
CString apaExplain[] = 
{
	"Please slow down to 0 km/s and shift to gear P or D before you press the APA key",//initial

	"Warning! Speed 0 km/s but move mode is not ready",//step 0
	"Warning! There is a speed exception",//step 0
	"Warning! Speed 0 km/s and move mode is not ready",//step 0
	"Now move mode is ok, please press the APA key to acquire display focus",//step 0

	"APA key pressed, but display focus has not been gained",//step 1
	"APA display focus is gained, please choose parking search mode",//step 2
	"APA key twice pressed and display focus has been released"//step 3
	

	"Right parallel choosen, please move forward to search a parking slot",//step 4
	"Left parallel choosen, please move forward to search a parking slot",//step 4
	"Right perpendicular choosen, please move forward to search a parking slot",//step 4
	"Left perpendicular choosen, please move forward to search a parking slot",//step 4

	"Congratulations! A parking slot found! Stop and shift to reverse",//step 5

	"Autosteering is activated, prepare to brake",//step 8

	"Back up slowly, prepare to brake",//step 9

	"Hold on, vehicle is stopping",//step 10

	"Now, please shift to forward",//step 11

	"Drive forward slowly, prepare to brake",//step 12

	"Hold on, vehicle is stopping",//step 13

	"Now, please shift to reverse",//step 14

	"Automatic parking assist complete, shift to park",//step15

	"The APA has exited!",//step16

};
*/



int APAGears = 0;
///P=0, N=1, D=2, R=3
int APASpeed = 0;
bool APAGainDisplay = false;
int APAIndicationID[19] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
int APAParkMode[5] = {0, 1, 0, 1, 0};
bool MoveForwardFlag = false;
bool AutosteeringFlag = false;
int progressEnum = 0;
int autosteeringCount = 0;

int APAStep = 0;
///
/*
| step num | prerequisite               | trigger     | do something                         | explain                   | remarks                                              |
|:--------:|:--------------------------:|:-----------:|:------------------------------------:|:-------------------------:|:----------------------------------------------------:|
| step=0   | before.press.APA.key       | gear.Bar    | check.gear.speed                     | explain:Gears?D?N.Speed?30|                                                      |
| step=1   | when.press.APA.key         | APA.button  | active.APA.HMI, check.APAGainDisplay | explain:HMI.not.Gain      | send.ODIEvent, if.D.gear.do.speed.10                 |
| step=2   | pre.step.1, HMI.Gain       | DataCallback| initial.HMI.focus                    | explain:HMI.Gain          | send ODIIndication, ODIDynamicData, reset APAParkMode|
| step=3   | pre.step>1, twice.APA.key  | APA.button  | release display                      | explain:APA.quit          | send ODIEvent, reset step                            |
| step=4   | pre.step2, touch.park.mode | DataCallback| set.APAParkMode, change.HMI.focus    | explain:current.mode      | send ODIDynamicData                                  |
| step=5   | pre.step2/4, get.slot      | slot.button | check.gear.speed, reset.timer.15     | explain:slot.find         | send ODIIndication, ODIDynamicData                   |
| step=6   | pre.step2/4, R.gear        | gear.Bar    | quit.APA                             | explain:APA.quit          | send ODIEvent, ODIIndication, ODIDynamicData         |
| step=7   | pre.step5, pass.slot       | OnTimer.15  | back.to.search.HMI, back.to.step.4   | explain:pass.slot         | send ODIIndication, ODIDynamicData                   |

| step=8   | pre.step5, R.gears.speed.0 | gear.Bar    | active.autosteering, SetTimer.2s     | explain:autosteering      | send ODIIndication, ODIDynamicData                   |
step=9  if OnTimer 2s, if step8-->step9 progressBackward                explain-->speed 10-->KillTimer 2s-->msg per 200ms
step=10 if progressEnum 100, if step9-->step10 progressStop             explain-->speed 0-->msg-->SetTimer 1s
step=11 if OnTimer 1s, if step10-->step11 progressForward1               explain-->msg-->KillTimer 1s
step=12 if gears D, if step11-->step12 progressForward                 explain-->speed 10-->msg per 200ms
step=13 if progressEnum 100, if step12-->step13 progress stop           explain-->speed 0-->msg-->SetTimer 1s
step=14 if OnTimer 1s, if step13-->step14 progressBackward1             explain-->msg-->KillTimer 1s
step=9  if gears R, if step14-->step9 progressBackward                  explain-->speed 10-->msg per 200ms
step=15 if OnTimer 1s, if autosteeringCount 5, if step10-->step15 ParkComplete   explain-->msg-->SetTimer 3s-->KillTimer 1s
step=16 if OnTimer 3s, if step15-->step16 exitAPA                       explain-->msg-->KillTimer 200ms/1s/2s/3s-->step0
step=17 if press APAUnavaible-->step17                                  explain-->msg-->KillTimer 200ms/1s/2s/3s-->step0
step=18 if brake-->step18                                               explain-->msg-->step0

step=15 直接判断超速30                   控件触发           记录之前的step 给出explain                       发送ODIIndication和ODIDynamicData
step=16 刹车退出
step=17 lose display focus
chime 60ms
*/
///




// APAFrame dialog
IMPLEMENT_DYNAMIC(APAFrame, CDialogEx)

APAFrame::APAFrame(CWnd* pParent /*=NULL*/)
: CDialogEx(APAFrame::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME2);
}

APAFrame::~APAFrame()
{

}

void APAFrame::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_ManagedControl(pDX, IDC_APA_MAIN, APAFunc.Ctrl_APAForm);
}

BOOL APAFrame::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	SetWindowPos(&CWnd::wndTop, 750, 30, 580, 280, NULL);//初始化时的界面大小

	APAFunc.Function_Initialize();

	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}

void APAFrame::OnOK()
{

}

void APAFrame::OnCancel()
{
	// TODO: Add your specialized code here and/or call the base class
	this->ShowWindow(HIDE_WINDOW);
}

BEGIN_MESSAGE_MAP(APAFrame, CDialogEx)
	ON_MESSAGE(MESSAGE_APASpeed, Function_APASpeed_Change)
	ON_MESSAGE(MESSAGE_APAGears, Function_APAGears_Change)
	ON_MESSAGE(MESSAGE_APAkeyPress, Function_APAkeyPress)
	ON_MESSAGE(MESSAGE_SlotSearch, Function_APASlotSearch)
	ON_MESSAGE(MESSAGE_ODIAction_CntrStack_LS, Function_ODIAction_CntrStack_LS)
	ON_MESSAGE(MESSAGE_APAUnavaible, Function_APAUnavaible)
	ON_WM_TIMER()
END_MESSAGE_MAP()


//----------------------------explain-------------------------------------//
void APAFrame::Function_Explain_GearSpeed()
{
	if (APASpeed < 30)
	{
		if ((APAGears == 0) || (APAGears == 3))
			APAFunc.Ctrl_APAForm.GetControl()->lab_Explain_Content->Text = "Gear Warning! APA function can't enable";
		else
			APAFunc.Ctrl_APAForm.GetControl()->lab_Explain_Content->Text = "It's ok! You can press the APA key to get APA HMI";
	}
	else
	{
		if ((APAGears == 0) || (APAGears == 3))
			APAFunc.Ctrl_APAForm.GetControl()->lab_Explain_Content->Text = "Gear Warning! APA function can't enable";
		else
			APAFunc.Ctrl_APAForm.GetControl()->lab_Explain_Content->Text = "Speed Warning! APA function can't enable";
	}
}

void APAFrame::Function_Explain_presskey()
{
	if (APAGainDisplay == false)
		APAFunc.Ctrl_APAForm.GetControl()->lab_Explain_Content->Text = "APA key pressed, but display focus has not been gained";
	else
		APAFunc.Ctrl_APAForm.GetControl()->lab_Explain_Content->Text = "APA display focus is gained, please choose parking search mode";
}

void APAFrame::Function_Explain_ReleaseDisplay()
{
	APAFunc.Ctrl_APAForm.GetControl()->lab_Explain_Content->Text = "APA key twice pressed and display focus has been released";
}

void APAFrame::Function_Explain_ChooseMode()
{
	if((APAParkMode[1] == 1) && (APAParkMode[3] == 1))
		APAFunc.Ctrl_APAForm.GetControl()->lab_Explain_Content->Text = "Right parallel choosen, please move forward to search a parking slot";
	if ((APAParkMode[2] == 1) && (APAParkMode[3] == 1))
		APAFunc.Ctrl_APAForm.GetControl()->lab_Explain_Content->Text = "Left parallel choosen, please move forward to search a parking slot";
	if ((APAParkMode[1] == 1) && (APAParkMode[4] == 1))
		APAFunc.Ctrl_APAForm.GetControl()->lab_Explain_Content->Text = "Right perpendicular choosen, please move forward to search a parking slot";
	if ((APAParkMode[2] == 1) && (APAParkMode[4] == 1))
		APAFunc.Ctrl_APAForm.GetControl()->lab_Explain_Content->Text = "Left perpendicular choosen, please move forward to search a parking slot";
}

void APAFrame::Function_Explain_SlotFound()
{
	APAFunc.Ctrl_APAForm.GetControl()->lab_Explain_Content->Text = "Congratulations! A parking slot found! Stop and shift to reverse";
}

void APAFrame::Function_Explain_RGearInterrupt()
{
	APAFunc.Ctrl_APAForm.GetControl()->lab_Explain_Content->Text = "The APA was interrupted by your shifting to R gear!";
}

void APAFrame::Function_Explain_PassSlot()
{
	APAFunc.Ctrl_APAForm.GetControl()->lab_Explain_Content->Text = "Warning! You just drove pass the slot!";
}

void APAFrame::Function_Explain_AutosteeringActive()
{
	APAFunc.Ctrl_APAForm.GetControl()->lab_Explain_Content->Text = "Autosteering is activated, prepare to brake";
}

void APAFrame::Function_Explain_ProgressBackward()
{
	APAFunc.Ctrl_APAForm.GetControl()->lab_Explain_Content->Text = "Back up slowly, prepare to brake";
}

void APAFrame::Function_Explain_ProgressStop()
{
	APAFunc.Ctrl_APAForm.GetControl()->lab_Explain_Content->Text = "Hold on, vehicle is stopping";
}

void APAFrame::Function_Explain_ProgForward1()
{
	APAFunc.Ctrl_APAForm.GetControl()->lab_Explain_Content->Text = "Now, please shift to forward";
}

void APAFrame::Function_Explain_ProgForward()
{
	APAFunc.Ctrl_APAForm.GetControl()->lab_Explain_Content->Text = "Drive forward slowly, prepare to brake";
}

void APAFrame::Function_Explain_ProgressStop2()
{
	APAFunc.Ctrl_APAForm.GetControl()->lab_Explain_Content->Text = "Hold on, vehicle is stopping";
}

void APAFrame::Function_Explain_ProgressBackward1()
{
	APAFunc.Ctrl_APAForm.GetControl()->lab_Explain_Content->Text = "Now, please shift to reverse";
}

void APAFrame::Function_Explain_ParkComplete()
{
	APAFunc.Ctrl_APAForm.GetControl()->lab_Explain_Content->Text = "Automatic parking assist complete, shift to park";
}

void APAFrame::Function_Explain_ExitAPA()
{
	APAFunc.Ctrl_APAForm.GetControl()->lab_Explain_Content->Text = "The APA has exited!";
}

void APAFrame::Function_Explain_APAUnavaible()
{
		APAFunc.Ctrl_APAForm.GetControl()->lab_Explain_Content->Text = "The APA function is unavaible!";
}

void APAFrame::Function_Explain()
{
	switch (APAStep)
	{
	//before apa key, remind user to make move state right 
	case 0:
		Function_Explain_GearSpeed();
		break;
	//when apa key pressed, remind user to wait display focus
	case 1:
		Function_Explain_presskey();
		break;
	//when apa display focus, remind user to choose parking mode
	case 2:
		Function_Explain_presskey();
		break;
	//when display, twice press apa key, remind user that apa has release display
	case 3:
		Function_Explain_ReleaseDisplay();
		break;
	//when touch softbutton1-4, remind user to move forward to search parking slot
	case 4:
		Function_Explain_ChooseMode();
		break;
	//when move forward and find a slot for parking, remind user to slow down and switch to reverse
	case 5:
		Function_Explain_SlotFound();
		break;
	case 6:
		Function_Explain_RGearInterrupt();
		break;
	case 7:
		Function_Explain_PassSlot();
		break;
	case 8:
		Function_Explain_AutosteeringActive();
		break;
	case 9:
		Function_Explain_ProgressBackward();
		break;
	case 10:
		Function_Explain_ProgressStop();
		break;
	case 11:
		Function_Explain_ProgForward1();
		break;
	case 12:
		Function_Explain_ProgForward();
		break;
	case 13:
		Function_Explain_ProgressStop2();
	case 14:
		Function_Explain_ProgressBackward1();
		break;
	case 15:
		Function_Explain_ParkComplete();
		break;
	case 16:
		Function_Explain_ExitAPA();
		break;
	case 17:
		Function_Explain_APAUnavaible();
		break;
	default:
		break;
	}

}
//-----------------------------------------------------------------//


//----------------------------other function-------------------------------------//
void APAFrame::Fuction_JudgeForward()
{
	if ((APASpeed > 0) && (APAGears == 2))
		MoveForwardFlag = true;
	else
		MoveForwardFlag = false;
}

void APAFrame::Fuction_JudgeGearSwith()
{
	switch (APAStep)
	{
	case 2:
		if (APAGears == 3)
			APAStep = 6;
		else if (APAGears == 2)
			Function_TurnSpeed10();
		break;
	case 4:
		if (APAGears == 3)
		{
			APAStep = 6;
		}
		break;
	case 5:
		if (APAGears == 3)
		{
			KillTimer(APA_Period_15s);
			Function_TurnSpeed0();
			APAStep = 8;
			Function_Explain();

			//chooseFoucs = ::FindWindow(NULL, _T("E2LB Simulator"));
			//::SendMessage(chooseFoucs, MESSAGE_APASpeedNotEnabled, 0, 0);

			MSG_AutosteeringActive();

			SetTimer(APA_Period_2s, 2000, NULL);
		}
		else if ((APAGears == 0) || (APAGears == 1))
		{
			KillTimer(APA_Period_15s);
		}
		else
		{
			Function_TurnSpeed10();
			SetTimer(APA_Period_15s, 15000, NULL);
		}
		break;
	case 11:
		if (APAGears == 2)
		{
			APAStep = 12;
			Function_TurnSpeed10();
			Function_Explain();
		}
		break;
	case 14:
		if (APAGears == 3)
		{
			APAStep = 9;
			Function_Explain();
			Function_TurnSpeed10();
		}
		break;
	default:
		break;
	}

	if (APAStep == 6)
	{
		Function_Explain();
		MSG_RGearInterrupt();
		KillTimer(APA_Period_200ms);
		APAStep = 0;
		Function_Explain();
	}
}

void APAFrame::Function_Reset_APAParkMode()
{
	APAParkMode[1] = 1;
	APAParkMode[2] = 0;
	APAParkMode[3] = 1;
	APAParkMode[4] = 0;
}

void APAFrame::Function_TurnSpeed0()
{
	chooseFoucs = ::FindWindow(NULL, _T("E2LB Simulator"));
	::SendMessage(chooseFoucs, MESSAGE_APASpeed0, 0, 0);
	APAFunc.Ctrl_APAForm.GetControl()->Bnt_Speed->Text = "0 Km/s";
	APASpeed = 0;
}

void APAFrame::Function_TurnSpeed10()
{
	chooseFoucs = ::FindWindow(NULL, _T("E2LB Simulator"));
	::SendMessage(chooseFoucs, MESSAGE_APASpeed10, 0, 0);
	APAFunc.Ctrl_APAForm.GetControl()->Bnt_Speed->Text = "10 Km/s";
	APASpeed = 10;
}
//-----------------------------------------------------------------//


//-----------------------------ODI message framework--------------------------------------------//
void APAFrame::ODIEvent_ActivateAPAonInfotainmentDisplay()
{
	Function_Reload_DataBase();

	Function_Write_DataBase(ODIEvent_LS_APA::EventID::Start_Bit, ODIEvent_LS_APA::EventID::Length, 3);

	Function_Write_DataBase(ODIEvent_LS_APA::FUClass::Start_Bit, ODIEvent_LS_APA::FUClass::Length, 14);

	Function_Write_DataBase(ODIEvent_LS_APA::MultiFrameReturnChannel::Start_Bit, ODIEvent_LS_APA::MultiFrameReturnChannel::Length, 0);

	Function_Build_Command(ODIEvent_LS_APA::Basic::Message_ID, 8, 4);
}

void APAFrame::ODIEvent_CancelAPAonInfotainmentDisplay()
{
	Function_Reload_DataBase();

	Function_Write_DataBase(ODIEvent_LS_APA::EventID::Start_Bit, ODIEvent_LS_APA::EventID::Length, 4);

	Function_Write_DataBase(ODIEvent_LS_APA::FUClass::Start_Bit, ODIEvent_LS_APA::FUClass::Length, 14);

	Function_Write_DataBase(ODIEvent_LS_APA::MultiFrameReturnChannel::Start_Bit, ODIEvent_LS_APA::MultiFrameReturnChannel::Length, 0);

	Function_Build_Command(ODIEvent_LS_APA::Basic::Message_ID, 8, 4);
}

void APAFrame::ODIIndication_APA()
{
	Function_Reload_DataBase();

	Function_Write_DataBase(ODIIndication_LS_APA::ODII_FUCID::Start_Bit, ODIIndication_LS_APA::ODII_FUCID::Length, 14);

	Function_Write_DataBase(ODIIndication_LS_APA::ODII_ODIInd1::Start_Bit, ODIIndication_LS_APA::ODII_ODIInd1::Length, APAIndicationID[1]);
	Function_Write_DataBase(ODIIndication_LS_APA::ODII_ODIInd2::Start_Bit, ODIIndication_LS_APA::ODII_ODIInd2::Length, APAIndicationID[2]);
	Function_Write_DataBase(ODIIndication_LS_APA::ODII_ODIInd3::Start_Bit, ODIIndication_LS_APA::ODII_ODIInd3::Length, APAIndicationID[3]);
	Function_Write_DataBase(ODIIndication_LS_APA::ODII_ODIInd4::Start_Bit, ODIIndication_LS_APA::ODII_ODIInd4::Length, APAIndicationID[4]);
	Function_Write_DataBase(ODIIndication_LS_APA::ODII_ODIInd5::Start_Bit, ODIIndication_LS_APA::ODII_ODIInd5::Length, APAIndicationID[5]);
	Function_Write_DataBase(ODIIndication_LS_APA::ODII_ODIInd6::Start_Bit, ODIIndication_LS_APA::ODII_ODIInd6::Length, APAIndicationID[6]);
	Function_Write_DataBase(ODIIndication_LS_APA::ODII_ODIInd7::Start_Bit, ODIIndication_LS_APA::ODII_ODIInd7::Length, APAIndicationID[7]);
	Function_Write_DataBase(ODIIndication_LS_APA::ODII_ODIInd8::Start_Bit, ODIIndication_LS_APA::ODII_ODIInd8::Length, APAIndicationID[8]);
	Function_Write_DataBase(ODIIndication_LS_APA::ODII_ODIInd9::Start_Bit, ODIIndication_LS_APA::ODII_ODIInd9::Length, APAIndicationID[9]);
	Function_Write_DataBase(ODIIndication_LS_APA::ODII_ODIInd10::Start_Bit, ODIIndication_LS_APA::ODII_ODIInd10::Length, APAIndicationID[10]);
	Function_Write_DataBase(ODIIndication_LS_APA::ODII_ODIInd11::Start_Bit, ODIIndication_LS_APA::ODII_ODIInd11::Length, APAIndicationID[11]);
	Function_Write_DataBase(ODIIndication_LS_APA::ODII_ODIInd12::Start_Bit, ODIIndication_LS_APA::ODII_ODIInd12::Length, APAIndicationID[12]);
	Function_Write_DataBase(ODIIndication_LS_APA::ODII_ODIInd13::Start_Bit, ODIIndication_LS_APA::ODII_ODIInd13::Length, APAIndicationID[13]);
	Function_Write_DataBase(ODIIndication_LS_APA::ODII_ODIInd14::Start_Bit, ODIIndication_LS_APA::ODII_ODIInd14::Length, APAIndicationID[14]);
	Function_Write_DataBase(ODIIndication_LS_APA::ODII_ODIInd15::Start_Bit, ODIIndication_LS_APA::ODII_ODIInd15::Length, APAIndicationID[15]);
	Function_Write_DataBase(ODIIndication_LS_APA::ODII_ODIInd16::Start_Bit, ODIIndication_LS_APA::ODII_ODIInd16::Length, APAIndicationID[16]);
	Function_Write_DataBase(ODIIndication_LS_APA::ODII_ODIInd17::Start_Bit, ODIIndication_LS_APA::ODII_ODIInd17::Length, APAIndicationID[17]);
	Function_Write_DataBase(ODIIndication_LS_APA::ODII_ODIInd18::Start_Bit, ODIIndication_LS_APA::ODII_ODIInd18::Length, APAIndicationID[18]);

	Function_Build_Command(ODIIndication_LS_APA::Basic::Message_ID, 8, 8);
}

void APAFrame::ODIDynamicData_APA(int type, int dataID, int dataValue)
{
	Function_Reload_DataBase();

	Function_Write_DataBase(ODIDynamicData_LS_APA::Data_Type::Start_Bit, ODIDynamicData_LS_APA::Data_Type::Length, type);
	Function_Write_DataBase(ODIDynamicData_LS_APA::FUClass::Start_Bit, ODIDynamicData_LS_APA::FUClass::Length, 14);
	Function_Write_DataBase(ODIDynamicData_LS_APA::Data_ID::Start_Bit, ODIDynamicData_LS_APA::Data_ID::Length, dataID);
	Function_Write_DataBase(ODIDynamicData_LS_APA::Data_Value::Start_Bit, ODIDynamicData_LS_APA::Data_Value::Length, dataValue);

	Function_Build_Command(ODIDynamicData_LS_APA::Basic::Message_ID, 8, 8);
}
//--------------------------------------------------------------------------------//


//-----------------------------fucntion message pack--------------------------------------------//
void APAFrame::MSG_AcquireFocus()
{
	MSG_ChimeEnterAPA();
	Sleep(10);

	ODIEvent_ActivateAPAonInfotainmentDisplay();
	Sleep(10);
	
	APAIndicationID[9] = 1;//APA2
	APAIndicationID[10] = 1;//SoftButton1Visible
	APAIndicationID[11] = 1;//SoftButton2Visible
	APAIndicationID[12] = 1;//SoftButton3Visible
	APAIndicationID[13] = 1;//SoftButton4Visible
	ODIIndication_APA();
	Sleep(10);

	ODIDynamicData_APA(3, 1, 0);//APA1 NotAvailable
	Sleep(10);

	ODIDynamicData_APA(3, 4, 3);//SearchingForParkingSlotRightParallelPerp1
	Sleep(10);
	ODIDynamicData_APA(3, 5, 5);//HeaderIconLeft Blank
	Sleep(10);
	ODIDynamicData_APA(3, 6, 2);//HeaderIconRight Blank
	Sleep(10);
	ODIDynamicData_APA(3, 7, 6);//FooterText Blank
	Sleep(10);
	ODIDynamicData_APA(3, 8, 4);//SoftButton4 focus parallel
	Sleep(10);
	ODIDynamicData_APA(3, 8, 2);//SoftButton2 focus Right
}

void APAFrame::MSG_FirstDisplay()
{
	ODIDynamicData_APA(3, 1, 0);//APA1 NotAvailable
	Sleep(10);

	APAIndicationID[9] = 1;//APA2
	APAIndicationID[10] = 1;//SoftButton1Visible
	APAIndicationID[11] = 1;//SoftButton2Visible
	APAIndicationID[12] = 1;//SoftButton3Visible
	APAIndicationID[13] = 1;//SoftButton4Visible
	ODIIndication_APA();
	Sleep(10);

	ODIDynamicData_APA(3, 4, 3);//SearchingForParkingSlotRightParallelPerp1
	Sleep(10);
	ODIDynamicData_APA(3, 5, 5);//HeaderIconLeft Blank
	Sleep(10);
	ODIDynamicData_APA(3, 6, 2);//HeaderIconRight Blank
	Sleep(10);
	ODIDynamicData_APA(3, 7, 6);//FooterText Blank
	Sleep(10);
	ODIDynamicData_APA(3, 8, 4);//SoftButton4 focus parallel
	Sleep(10);
	ODIDynamicData_APA(3, 8, 2);//SoftButton2 focus Right
}

void APAFrame::MSG_ReleaseFocus()
{
	MSG_ChimeReleaseAPA();
	Sleep(10);

	APAIndicationID[7] = 1;//SelectHeader
	APAIndicationID[9] = 1;//APA2
	APAIndicationID[10] = 0;//SoftButton1 Invisible
	APAIndicationID[11] = 0;//SoftButton2 Invisible
	APAIndicationID[12] = 0;//SoftButton3 Invisible
	APAIndicationID[13] = 0;//SoftButton4 Invisible
	ODIIndication_APA();

	Sleep(10);
	ODIDynamicData_APA(3, 4, 0);//APANotAvailableSteeringFailure
	Sleep(10);
	ODIDynamicData_APA(3, 8, 0);//Spare

	Sleep(2000);
	ODIEvent_CancelAPAonInfotainmentDisplay();
}

void APAFrame::MSG_RGearInterrupt()
{
	MSG_ChimeReleaseAPA();
	Sleep(10);

	APAIndicationID[7] = 1;//SelectHeader
	APAIndicationID[9] = 1;//APA2
	APAIndicationID[10] = 0;//SoftButton1 Invisible
	APAIndicationID[11] = 0;//SoftButton2 Invisible
	APAIndicationID[12] = 0;//SoftButton3 Invisible
	APAIndicationID[13] = 0;//SoftButton4 Invisible
	ODIIndication_APA();

	Sleep(40);
	ODIDynamicData_APA(3, 4, 0x1A);//Cancel
	Sleep(20);
	ODIDynamicData_APA(3, 8, 0);//Spare

	Sleep(2000);
	ODIEvent_CancelAPAonInfotainmentDisplay();
}

void APAFrame::MSG_SoftButton1Left()
{
	ODIDynamicData_APA(3, 8, 1);
}

void APAFrame::MSG_SoftButton2Right()
{
	ODIDynamicData_APA(3, 8, 2);
}

void APAFrame::MSG_SoftButton3Perpendicular()
{
	ODIDynamicData_APA(3, 8, 3);
}

void APAFrame::MSG_SoftButton4Parallel()
{
	ODIDynamicData_APA(3, 8, 4);
}

void APAFrame::MSG_ChooseMode()
{
	if ((APAParkMode[1] == 1) && (APAParkMode[3] == 1))
		ODIDynamicData_APA(3, 4, 3);
	if ((APAParkMode[2] == 1) && (APAParkMode[3] == 1))
		ODIDynamicData_APA(3, 4, 4);
	if ((APAParkMode[1] == 1) && (APAParkMode[4] == 1))
		ODIDynamicData_APA(3, 4, 17);
	if ((APAParkMode[2] == 1) && (APAParkMode[4] == 1))
		ODIDynamicData_APA(3, 4, 18);
}

void APAFrame::MSG_SlotSearch()
{
	APAIndicationID[7] = 1;//SelectHeader
	ODIIndication_APA();

	Sleep(10);
	if ((APAParkMode[1] == 1) && (APAParkMode[3] == 1))
		ODIDynamicData_APA(3, 4, 9);
	if ((APAParkMode[2] == 1) && (APAParkMode[3] == 1))
		ODIDynamicData_APA(3, 4, 13);
	if ((APAParkMode[1] == 1) && (APAParkMode[4] == 1))
		ODIDynamicData_APA(3, 4, 19);
	if ((APAParkMode[2] == 1) && (APAParkMode[4] == 1))
		ODIDynamicData_APA(3, 4, 22);
}

void APAFrame::MSG_PassSlot()
{
	APAIndicationID[7] = 0;//SelectHeader
	ODIIndication_APA();
	Sleep(10);
	MSG_ChooseMode();
	if ((APAParkMode[1] == 1) && (APAParkMode[3] == 1))
	{
		MSG_SoftButton2Right();
		Sleep(10);
		MSG_SoftButton4Parallel();
	}
	else if ((APAParkMode[2] == 1) && (APAParkMode[3] == 1))
	{
		MSG_SoftButton1Left();
		Sleep(10);
		MSG_SoftButton4Parallel();
	}
	else if ((APAParkMode[1] == 1) && (APAParkMode[4] == 1))
	{
		MSG_SoftButton2Right();
		Sleep(10);
		MSG_SoftButton3Perpendicular();
	}
	else if ((APAParkMode[2] == 1) && (APAParkMode[4] == 1))
	{
		MSG_SoftButton1Left();
		Sleep(10);
		MSG_SoftButton3Perpendicular();
	}
}

///the same as MSG_ChimeEnterAPA
void APAFrame::MSG_ChimeParkMode()
{
	Function_Reload_DataBase();
	Function_Write_DataBase(Chime_Command::SC_SndTne::Start_Bit, Chime_Command::SC_SndTne::Length, 5);
	Function_Write_DataBase(Chime_Command::SndLocRtRr::Start_Bit, Chime_Command::SndLocRtRr::Length, 0);
	Function_Write_DataBase(Chime_Command::SndLocLftRr::Start_Bit, Chime_Command::SndLocLftRr::Length, 0);
	Function_Write_DataBase(Chime_Command::SndLocPasFr::Start_Bit, Chime_Command::SndLocPasFr::Length, 1);
	Function_Write_DataBase(Chime_Command::SndLocDrFr::Start_Bit, Chime_Command::SndLocDrFr::Length, 1);
	Function_Write_DataBase(Chime_Command::SC_SndCdnPrd::Start_Bit, Chime_Command::SC_SndCdnPrd::Length, 0x32);
	Function_Write_DataBase(Chime_Command::SC_NmofRp::Start_Bit, Chime_Command::SC_NmofRp::Length, 1);
	Function_Write_DataBase(Chime_Command::SC_SndDutCyc::Start_Bit, Chime_Command::SC_SndDutCyc::Length, 0x33);
	Function_Write_DataBase(Chime_Command::SndPriority::Start_Bit, Chime_Command::SndPriority::Length, 0x25);
	Function_Build_Command(Chime_Command::Basic::APA_LS, 8, 5);
}

///the same as MSG_ChimeParkMode
void APAFrame::MSG_ChimeEnterAPA()
{
	Function_Reload_DataBase();
	Function_Write_DataBase(Chime_Command::SC_SndTne::Start_Bit, Chime_Command::SC_SndTne::Length, 5);
	Function_Write_DataBase(Chime_Command::SndLocRtRr::Start_Bit, Chime_Command::SndLocRtRr::Length, 0);
	Function_Write_DataBase(Chime_Command::SndLocLftRr::Start_Bit, Chime_Command::SndLocLftRr::Length, 0);
	Function_Write_DataBase(Chime_Command::SndLocPasFr::Start_Bit, Chime_Command::SndLocPasFr::Length, 1);
	Function_Write_DataBase(Chime_Command::SndLocDrFr::Start_Bit, Chime_Command::SndLocDrFr::Length, 1);
	Function_Write_DataBase(Chime_Command::SC_SndCdnPrd::Start_Bit, Chime_Command::SC_SndCdnPrd::Length, 0x32);
	Function_Write_DataBase(Chime_Command::SC_NmofRp::Start_Bit, Chime_Command::SC_NmofRp::Length, 1);
	Function_Write_DataBase(Chime_Command::SC_SndDutCyc::Start_Bit, Chime_Command::SC_SndDutCyc::Length, 0x33);
	Function_Write_DataBase(Chime_Command::SndPriority::Start_Bit, Chime_Command::SndPriority::Length, 0x25);
	Function_Build_Command(Chime_Command::Basic::APA_LS, 8, 5);
}

void APAFrame::MSG_ChimeReleaseAPA()
{
	Function_Reload_DataBase();
	Function_Write_DataBase(Chime_Command::SC_SndTne::Start_Bit, Chime_Command::SC_SndTne::Length, 4);
	Function_Write_DataBase(Chime_Command::SndLocRtRr::Start_Bit, Chime_Command::SndLocRtRr::Length, 0);
	Function_Write_DataBase(Chime_Command::SndLocLftRr::Start_Bit, Chime_Command::SndLocLftRr::Length, 0);
	Function_Write_DataBase(Chime_Command::SndLocPasFr::Start_Bit, Chime_Command::SndLocPasFr::Length, 1);
	Function_Write_DataBase(Chime_Command::SndLocDrFr::Start_Bit, Chime_Command::SndLocDrFr::Length, 1);
	Function_Write_DataBase(Chime_Command::SC_SndCdnPrd::Start_Bit, Chime_Command::SC_SndCdnPrd::Length, 0x14);
	Function_Write_DataBase(Chime_Command::SC_NmofRp::Start_Bit, Chime_Command::SC_NmofRp::Length, 3);
	Function_Write_DataBase(Chime_Command::SC_SndDutCyc::Start_Bit, Chime_Command::SC_SndDutCyc::Length, 0x7F);
	Function_Write_DataBase(Chime_Command::SndPriority::Start_Bit, Chime_Command::SndPriority::Length, 0x25);
	Function_Build_Command(Chime_Command::Basic::APA_LS, 8, 5);
}

void APAFrame::MSG_ChimeFindSlot()
{
	Function_Reload_DataBase();
	Function_Write_DataBase(Chime_Command::SC_SndTne::Start_Bit, Chime_Command::SC_SndTne::Length, 4);
	Function_Write_DataBase(Chime_Command::SndLocRtRr::Start_Bit, Chime_Command::SndLocRtRr::Length, 0);
	Function_Write_DataBase(Chime_Command::SndLocLftRr::Start_Bit, Chime_Command::SndLocLftRr::Length, 0);
	Function_Write_DataBase(Chime_Command::SndLocPasFr::Start_Bit, Chime_Command::SndLocPasFr::Length, 1);
	Function_Write_DataBase(Chime_Command::SndLocDrFr::Start_Bit, Chime_Command::SndLocDrFr::Length, 1);
	Function_Write_DataBase(Chime_Command::SC_SndCdnPrd::Start_Bit, Chime_Command::SC_SndCdnPrd::Length, 0x64);
	Function_Write_DataBase(Chime_Command::SC_NmofRp::Start_Bit, Chime_Command::SC_NmofRp::Length, 1);
	Function_Write_DataBase(Chime_Command::SC_SndDutCyc::Start_Bit, Chime_Command::SC_SndDutCyc::Length, 0x7F);
	Function_Write_DataBase(Chime_Command::SndPriority::Start_Bit, Chime_Command::SndPriority::Length, 0x25);
	Function_Build_Command(Chime_Command::Basic::APA_LS, 8, 5);
}

void APAFrame::MSG_ManueverProgress_Non()
{
	ODIDynamicData_APA(2, 2, 0);//there is none Manuever Progress
}

void APAFrame::MSG_AutosteeringActive()
{
	APAIndicationID[10] = 0;//SoftButton1 invisible
	APAIndicationID[11] = 0;//SoftButton2 invisible
	APAIndicationID[12] = 0;//SoftButton3 invisible
	APAIndicationID[13] = 0;//SoftButton4 invisible
	ODIIndication_APA();
	Sleep(10);

	ODIDynamicData_APA(3, 4, 6);//AutoSteeringActivated
	Sleep(10);
	ODIDynamicData_APA(3, 6, 0);//RightIconSteeringEnabled
	Sleep(10);
	ODIDynamicData_APA(3, 8, 0);//Spare
}

void APAFrame::MSG_ProgressBackward()
{
	APAIndicationID[1] = 1;
	APAIndicationID[4] = 0;
	ODIIndication_APA();
	Sleep(10);

	if ((APAParkMode[1] == 1) && (APAParkMode[3] == 1))
		ODIDynamicData_APA(3, 4, 11);
	if ((APAParkMode[2] == 1) && (APAParkMode[3] == 1))
		ODIDynamicData_APA(3, 4, 15);
	if ((APAParkMode[1] == 1) && (APAParkMode[4] == 1))
		ODIDynamicData_APA(3, 4, 20);
	if ((APAParkMode[2] == 1) && (APAParkMode[4] == 1))
		ODIDynamicData_APA(3, 4, 23);
}

void APAFrame::MSG_ProgressStop()
{
	ODIDynamicData_APA(3, 4, 12);
}

void APAFrame::MSG_ProgressForward()
{
	APAIndicationID[1] = 0;
	APAIndicationID[4] = 1;
	ODIIndication_APA();
	Sleep(10);

	if ((APAParkMode[1] == 1) && (APAParkMode[3] == 1))
		ODIDynamicData_APA(3, 4, 10);
	if ((APAParkMode[2] == 1) && (APAParkMode[3] == 1))
		ODIDynamicData_APA(3, 4, 14);
	if ((APAParkMode[1] == 1) && (APAParkMode[4] == 1))
		ODIDynamicData_APA(3, 4, 20);
	if ((APAParkMode[2] == 1) && (APAParkMode[4] == 1))
		ODIDynamicData_APA(3, 4, 23);
}

void APAFrame::MSG_ParkComplete()
{
	APAIndicationID[1] = 0;
	APAIndicationID[4] = 0;
	ODIIndication_APA();
	Sleep(10);

	ODIDynamicData_APA(3, 4, 8);
	Sleep(10);
	ODIDynamicData_APA(3, 6, 1);
}

void APAFrame::MSG_ExitAPA()
{
	ODIEvent_CancelAPAonInfotainmentDisplay();
}

void APAFrame::MSG_ManueverProgress(int percentage)
{
	ODIDynamicData_APA(2, 2, percentage);//display Progress percentage
}

void APAFrame::MSG_APAUnavaible()
{
	ODIDynamicData_APA(3, 4, 0);
	Sleep(10);
	
	APAIndicationID[1] = 0;
	APAIndicationID[4] = 0;
	APAIndicationID[5] = 1;
	APAIndicationID[7] = 0;//SelectHeader
	APAIndicationID[9] = 1;//APA2
	APAIndicationID[10] = 0;//SoftButton1 Invisible
	APAIndicationID[11] = 0;//SoftButton2 Invisible
	APAIndicationID[12] = 0;//SoftButton3 Invisible
	APAIndicationID[13] = 0;//SoftButton4 Invisible
	ODIIndication_APA();
	Sleep(10);

	ODIEvent_CancelAPAonInfotainmentDisplay();
}
//--------------------------------------------------------------------------------//


//------------------------------------control code----------------------------------------------//
HRESULT APAFrame::Function_APASpeed_Change(WPARAM wParam, LPARAM lParam)
{
	
	APAFunc.Ctrl_APAForm.GetControl()->Bnt_Speed->Text = lParam.ToString() + "  Km/s";
	APASpeed = lParam;
	Function_Explain();
	Fuction_JudgeForward();//judge if move forward
	if (APAStep == 5)
	Fuction_JudgeGearSwith();
	return 0;
}

HRESULT APAFrame::Function_APAGears_Change(WPARAM wParam, LPARAM lParam)
{
	switch (lParam)
	{
	case 0:
		APAFunc.Ctrl_APAForm.GetControl()->Bnt_Gear->Text = "P";
		APAFunc.Ctrl_APAForm.GetControl()->Bnt_Move->Text = "Park";
		APAGears = 0;
		Function_Explain();
		break;
	case 1:
		APAFunc.Ctrl_APAForm.GetControl()->Bnt_Gear->Text = "N";
		APAFunc.Ctrl_APAForm.GetControl()->Bnt_Move->Text = "Neutral";
		APAGears = 1;
		Function_Explain();
		break;
	case 2:
		APAFunc.Ctrl_APAForm.GetControl()->Bnt_Gear->Text = "D";
		APAFunc.Ctrl_APAForm.GetControl()->Bnt_Move->Text = "Forward";
		APAGears = 2;
		Function_Explain();
		break;
	case 3:
		APAFunc.Ctrl_APAForm.GetControl()->Bnt_Gear->Text = "R";
		APAFunc.Ctrl_APAForm.GetControl()->Bnt_Move->Text = "Backwards";
		APAGears = 3;
		Function_Explain();
		break;
	default:
		break;
	}
	Fuction_JudgeForward();//judge if move forward
	Fuction_JudgeGearSwith();
	return 0;
}

HRESULT APAFrame::Function_APAkeyPress(WPARAM wParam, LPARAM lParam)
{
	if (((APAStep==0) || (APAStep==1)) && (APASpeed<30) && (APAGears>0))
	{
		MSG_AcquireFocus();
		Function_Reset_APAParkMode();
		autosteeringCount = 0;
		APAStep = 1;
	}

	else if (APAStep > 1)
	{
		MSG_ReleaseFocus();
		APAStep = 3;
		Function_Explain();
		APAGainDisplay = false;
		KillTimer(APA_Period_200ms);
		KillTimer(APA_Period_1s);
		KillTimer(APA_Period_2s);
		KillTimer(APA_Period_3s);
		progressEnum = 0;
		autosteeringCount = 0;
		APAStep = 0;
	}
	Function_Explain();

	return 0;
}

HRESULT APAFrame::Function_APASlotSearch(WPARAM wParam, LPARAM lParam)
{
	if (((APAStep == 4) || (APAStep == 2)) && (APASpeed < 30))
	{
		MSG_ChimeFindSlot();
		Sleep(10);
		MSG_SlotSearch();
		if (MoveForwardFlag == true)
		{
			SetTimer(APA_Period_15s, 15000, NULL);
		}
		APAStep = 5;
		Function_Explain();
	}

	return 0;
}

HRESULT APAFrame::Function_ODIAction_CntrStack_LS(WPARAM wParam, LPARAM lParam)
{
	switch (wParam)
	{
	case 4:
		APAGainDisplay = true;//display get focus
		if (APAStep == 1)
		{
			APAStep = 2;
			SetTimer(APA_Period_200ms, 200, NULL);
			MSG_FirstDisplay();
			Function_Explain();

			if (APAGears == 2)
			{
				Function_TurnSpeed10();
			}
		}
		break;
	case 5:
		APAGainDisplay = false;
		break;
	case 6:
		APAStep = 4;
		if (APAParkMode[1] == 1)//if pre is right, then send msg and change focus
		{
			APAParkMode[1] = 0;//not at right
			APAParkMode[2] = 1;//at left
			MSG_ChooseMode();
			Sleep(10);
			MSG_SoftButton1Left();
		}
		Function_Explain();
		break;
	case 7:
		APAStep = 4;
		if (APAParkMode[2] == 1)//if pre is left, then send msg and change focus
		{
			APAParkMode[1] = 1;//at right
			APAParkMode[2] = 0;//not at left
			MSG_ChooseMode();
			Sleep(10);
			MSG_SoftButton2Right();
		}
		Function_Explain();
		break;
	case 8:
		APAStep = 4;
		if (APAParkMode[3] == 1)//if pre is parallel, then send msg and change focus
		{
			MSG_ChimeParkMode();//change mode chime
			Sleep(10);
			APAParkMode[3] = 0;//not at parallel
			APAParkMode[4] = 1;//at perpendicular
			MSG_ChooseMode();
			Sleep(10);
			MSG_SoftButton3Perpendicular();
		}
		Function_Explain();
		break;
	case 9:
		APAStep = 4;
		if (APAParkMode[4] == 1)//if pre is perpendicular, then send msg and change focus
		{
			MSG_ChimeParkMode();//change mode chime
			Sleep(10);
			APAParkMode[3] = 1;//at parallel
			APAParkMode[4] = 0;//not at perpendicular
			MSG_ChooseMode();
			Sleep(10);
			MSG_SoftButton4Parallel();
		}
		Function_Explain();
		break;
	default:
		break;
	}

	return 0;
}

//int n1;
HRESULT APAFrame::Function_APAUnavaible(WPARAM wParam, LPARAM lParam)
{
	APAStep = 17;
	Function_Explain();
	MSG_APAUnavaible();
	KillTimer(APA_Period_200ms);
	KillTimer(APA_Period_1s);
	KillTimer(APA_Period_2s);
	KillTimer(APA_Period_3s);
	progressEnum = 0;
	autosteeringCount = 0;
	APAStep = 0;
	//int n1;
	//n1++;
	//if (n1 % 2 == 1)
	//APAFunc.Ctrl_APAForm.GetControl()->Btn_APAUnavaible->Text = "ready!";
	//if (n1 % 2 == 0)
	//	APAFunc.Ctrl_APAForm.GetControl()->Btn_APAUnavaible->Text = "notready!";
	return 0;
}
//-------------------------------------------------------------------------------------//

void APAFrame::OnTimer(UINT_PTR nIDEvent)
{
	switch (nIDEvent)
	{
	case APA_Period_200ms:
		if ((APAStep == 9) || (APAStep == 12))
		{
			if (autosteeringCount == 0)
				progressEnum++;
			else if (autosteeringCount == 1)
				progressEnum = progressEnum + 2;
			else
				progressEnum = progressEnum + 4;

			MSG_ManueverProgress(progressEnum);

			if (progressEnum > 99)
			{
				progressEnum = 0;
				if (APAStep == 9)
					APAStep = 10;
				else if (APAStep == 12)
					APAStep = 13;
				Function_Explain();
				Function_TurnSpeed0();
				MSG_ProgressStop();
				autosteeringCount++;
				SetTimer(APA_Period_1s, 1000, NULL);
			}
		}
		//else
		//{
		//	MSG_ManueverProgress_Non();
		//}
		break;
	case APA_Period_1s:
		if (APAStep == 10)
		{
			if (autosteeringCount == 5)
			{
				APAStep = 15;

				//chooseFoucs = ::FindWindow(NULL, _T("E2LB Simulator"));
				//::SendMessage(chooseFoucs, MESSAGE_APASpeedEnabled, 0, 0);
				MSG_ParkComplete();
				autosteeringCount = 0;
				SetTimer(APA_Period_3s, 3000, NULL);
				KillTimer(APA_Period_1s);
			}
			else
			{
				APAStep = 11;
				Function_Explain();
				MSG_ProgressForward();
				KillTimer(APA_Period_1s);
			}
		}
		else if (APAStep == 13)
		{
			APAStep = 14;
			Function_Explain();
			MSG_ProgressBackward();
			KillTimer(APA_Period_1s);
		}
		break;
	case APA_Period_2s:
		if (APAStep == 8)
		{
			APAStep = 9;
			Function_Explain();
			Function_TurnSpeed10();
			MSG_ProgressBackward();
			KillTimer(APA_Period_2s);
		}
		break;
	case APA_Period_3s:
		if (APAStep == 15)
		{
			APAStep = 16;
			Function_Explain();
			MSG_ExitAPA();
			APAStep = 0;
			KillTimer(APA_Period_200ms);
			KillTimer(APA_Period_3s);
		}
		break;
	case APA_Period_15s:
		if (APAStep == 5)
		{
			APAStep = 7;
			Function_Explain();
			MSG_PassSlot();
			APAStep = 4;
			Function_Explain();
			KillTimer(APA_Period_15s);
		}
		break;
	default:
		break;
	}
	CDialogEx::OnTimer(nIDEvent);
}