// Crack.h : main header file for the CRACK application
//

#if !defined(AFX_CRACK_H__1CC76E5F_7FFE_42D8_A7C6_26970B35BB89__INCLUDED_)
#define AFX_CRACK_H__1CC76E5F_7FFE_42D8_A7C6_26970B35BB89__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CCrackApp:
// See Crack.cpp for the implementation of this class
//

class CCrackApp : public CWinApp
{
public:
	CCrackApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCrackApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CCrackApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CRACK_H__1CC76E5F_7FFE_42D8_A7C6_26970B35BB89__INCLUDED_)
