// CrackDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Crack.h"
#include "CrackDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCrackDlg dialog

CCrackDlg::CCrackDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCrackDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CCrackDlg)
	m_name = _T("");
	m_code = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCrackDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CCrackDlg)
	DDX_Text(pDX, IDC_EDIT1, m_name);
	DDX_Text(pDX, IDC_EDIT2, m_code);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CCrackDlg, CDialog)
	//{{AFX_MSG_MAP(CCrackDlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCrackDlg message handlers

BOOL CCrackDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCrackDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

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
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CCrackDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CCrackDlg::OnButton2() 
{
	UpdateData(TRUE);
	int i=m_name.GetLength(),and=0;
	for(int g=0;g<i;g++)
		and=and+m_name[g];
	and=1793-and;
	if(and<=41)
	{
		MessageBox("注册名太短，算不出来！");
		return;
	}
	int h=and/'1';
	int n=and%'1';
	char k[1000];
	memset(k,0,1000);
 	for(i=0;i<h;i++)
		k[i]='1';
	k[i]=n;
	m_code.Format("%s",k);
	GetDlgItem(IDC_EDIT2)->SetWindowText(m_code);
}
