
// PlugIn For Saint.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CPlugInForSaintApp:
// See PlugIn For Saint.cpp for the implementation of this class
//

class CPlugInForSaintApp : public CWinApp
{
public:
	CPlugInForSaintApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CPlugInForSaintApp theApp;