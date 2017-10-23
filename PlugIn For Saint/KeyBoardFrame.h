#include "KeyBoard Form.h"
#include "Public Parameter.h"
#pragma once


// KeyBoardFrame dialog

class KeyBoardFrame : public CDialogEx, public PublicParama
{
	DECLARE_DYNAMIC(KeyBoardFrame)

public:
	KeyBoardFrame(CWnd* pParent = NULL);   // standard constructor
	virtual ~KeyBoardFrame();

	KeyBoard_Form			KeyBoardFunc;			//Class KeyBoard Form

// Dialog Data
	enum { IDD = IDD_KEYBOARD_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	afx_msg HRESULT Faceplate_Event_Indication(WPARAM wParam,LPARAM lParam);
	afx_msg HRESULT	Faceplate_Event_Dynamic(WPARAM wParam,LPARAM lParam);

	DECLARE_MESSAGE_MAP()
	virtual void OnOK();
public:
	virtual BOOL OnInitDialog();
	virtual void OnCancel();
};
