
// week9Test.1Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "week9Test.1.h"
#include "week9Test.1Dlg.h"
#include "afxdialogex.h"
#include<iostream>
#include<fstream>
#include<string>
#include <cassert>
using namespace std;
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// Cweek9Test1Dlg �Ի���



Cweek9Test1Dlg::Cweek9Test1Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_WEEK9TEST1_DIALOG, pParent)
	, s(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}
Cweek9Test1Dlg::~Cweek9Test1Dlg()
	
{
	ofstream ofs(_T("C:\\Users\\14330\\Documents\\Visual Studio 2015\\Projects\\week9Test.1\\week9Test.1\\ѧ������.txt"));
	for (int i = 0; i < ca.GetCount(); i++)
	{
		ofs << CT2A(ca.GetAt(i).GetString())<<endl;
	}
}

void Cweek9Test1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, lbox);
	DDX_Text(pDX, IDC_EDIT1, s);
}

BEGIN_MESSAGE_MAP(Cweek9Test1Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &Cweek9Test1Dlg::OnBnClickedButton1)
//	ON_WM_LBUTTONDOWN()
//ON_WM_LBUTTONDOWN()
ON_LBN_SELCHANGE(IDC_LIST1, &Cweek9Test1Dlg::OnLbnSelchangeList1)
END_MESSAGE_MAP()


// Cweek9Test1Dlg ��Ϣ�������

BOOL Cweek9Test1Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������
	ifstream ifs(_T("C:\\Users\\14330\\Documents\\Visual Studio 2015\\Projects\\week9Test.1\\week9Test.1\\ѧ������.txt"));
	string s1;
	while (getline(ifs, s1))
	{
		CString name = CString(s1.c_str());
		lbox.AddString(name);
	}
	
	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void Cweek9Test1Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void Cweek9Test1Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
	
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR Cweek9Test1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
} 

void Cweek9Test1Dlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������	
	
	CString sss;
	UpdateData(true);
	lbox.InsertString(r, s);
	lbox.DeleteString(r + 1);
	for (int i = 0; i < lbox.GetCount(); i++)
	{
		lbox.GetText(i, sss);
		ca.Add(sss);

	}

	

}


void Cweek9Test1Dlg::OnLbnSelchangeList1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	r = lbox.GetCurSel();
	lbox.GetText(r, ss);
	SetDlgItemText(IDC_EDIT1, ss);

}




//void Cweek9Test1Dlg::OnLButtonDown(UINT nFlags, CPoint point)
//{
//	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
//	
//
//	CDialogEx::OnLButtonDown(nFlags, point);
//}


//void Cweek9Test1Dlg::OnLButtonDown(UINT nFlags, CPoint point)
//{
//	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
//	if (LBN_SELCHANGE)
//	{
//		r = lbox.GetCurSel();
//		lbox.GetText(r, s);
//		lbox.GetText(r, ss);
//		UpdateData(false);
//	}
//	CDialogEx::OnLButtonDown(nFlags, point);
//}


