// CrackDlg.h : header file
//

#if !defined(AFX_CRACKDLG_H__680248A9_0430_4414_90AE_6703330A044F__INCLUDED_)
#define AFX_CRACKDLG_H__680248A9_0430_4414_90AE_6703330A044F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CCrackDlg dialog

class CCrackDlg : public CDialog
{
// Construction
public:
	CCrackDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CCrackDlg)
	enum { IDD = IDD_CRACK_DIALOG };
	CString	m_name;
	CString	m_code;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCrackDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CCrackDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton2();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CRACKDLG_H__680248A9_0430_4414_90AE_6703330A044F__INCLUDED_)
