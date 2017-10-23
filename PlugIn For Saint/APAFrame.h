#include "APAForm.h"
#include "Public Parameter.h"

/// KeyBoardFrame dialog

class APAFrame : public CDialogEx, public PublicParama
{
	DECLARE_DYNAMIC(APAFrame)

public:
	APAFrame(CWnd* pParent = NULL);   // standard constructor
	virtual ~APAFrame();

	APAForm APAFunc;			//Class APA_Form
	PublicParama publicParama;

	afx_msg void			OnTimer(UINT_PTR nIDEvent);
	HWND chooseFoucs;

	// Dialog Data
	enum { IDD = IDD_APA };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	HICON m_hIcon;
	DECLARE_MESSAGE_MAP()
	virtual void OnOK();
	afx_msg HRESULT Function_APASpeed_Change(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_APAGears_Change(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_APAkeyPress(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_APASlotSearch(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_ODIAction_CntrStack_LS(WPARAM wParam, LPARAM lParam);
	afx_msg HRESULT Function_APAUnavaible(WPARAM wParam, LPARAM lParam);

	void Function_Explain_GearSpeed();
	void Function_Explain_presskey();
	void Function_Explain_ReleaseDisplay();
	void Function_Explain_ChooseMode();
	void Function_Explain_SlotFound();
	void Function_Explain_AutosteeringActive();
	void Function_Explain_ProgressBackward();
	void Function_Explain_ProgressBackward1();
	void Function_Explain_ProgressStop();
	void Function_Explain_ProgressStop2();
	void Function_Explain_ProgForward();
	void Function_Explain_ProgForward1();
	void Function_Explain_ParkComplete();
	void Function_Explain_ExitAPA();
	void Function_Explain_APAUnavaible();
	void Function_Explain();
	void Fuction_JudgeForward();
	void Fuction_JudgeGearSwith();

	void ODIEvent_ActivateAPAonInfotainmentDisplay();
	void ODIEvent_CancelAPAonInfotainmentDisplay();
	void ODIIndication_APA();
	void ODIDynamicData_APA(int type, int dataID, int dataValue);
	
	void MSG_AcquireFocus();
	void MSG_FirstDisplay();
	void MSG_ReleaseFocus();
	void MSG_SoftButton1Left();
	void MSG_SoftButton2Right();
	void MSG_SoftButton3Perpendicular();
	void MSG_SoftButton4Parallel();
	void MSG_ChooseMode();
	void MSG_SlotSearch();
	void MSG_ChimeParkMode();
	void MSG_ChimeEnterAPA();
	void MSG_ChimeReleaseAPA();
	void MSG_ChimeFindSlot();
	void MSG_ManueverProgress_Non();
	void MSG_AutosteeringActive();
	void MSG_ProgressBackward();
	void MSG_ProgressStop();
	void MSG_ProgressForward();
	void MSG_ParkComplete();
	void MSG_ExitAPA();
	void MSG_ManueverProgress(int percentage);
	void MSG_APAUnavaible();


public:
	virtual BOOL OnInitDialog();
	virtual void OnCancel();
};


