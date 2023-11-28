// Exercise7.h : main header file for the Exercise7 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CExercise7App
// See Exercise7.cpp for the implementation of this class
//

class CExercise7App : public CWinApp
{
public:
	CExercise7App();

// Overrides
public:
	virtual BOOL InitInstance();

	static void inputLine();

	DECLARE_MESSAGE_MAP()
};
