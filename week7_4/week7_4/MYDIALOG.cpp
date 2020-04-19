// MYDIALOG.cpp : 实现文件
//

#include "stdafx.h"
#include "week7_4.h"
#include "MYDIALOG.h"
#include "afxdialogex.h"


// MYDIALOG 对话框

IMPLEMENT_DYNAMIC(MYDIALOG, CDialogEx)

MYDIALOG::MYDIALOG(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, s1(_T("初始化"))
	, s2(0)
	, s3(_T(""))
{

}

MYDIALOG::~MYDIALOG()
{
}

void MYDIALOG::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, s1);
	DDX_Text(pDX, IDC_EDIT2, s2);
	DDX_Text(pDX, IDC_EDIT3, s3);
}


BEGIN_MESSAGE_MAP(MYDIALOG, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MYDIALOG::OnBnClickedButton1)
END_MESSAGE_MAP()


// MYDIALOG 消息处理程序


void MYDIALOG::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CString s;
	UpdateData(true);
	s.Format(_T("%d"), s2);
	s3 = s1 + s;
	UpdateData(false);
}
