// MyDlg2.cpp : 实现文件
//

#include "stdafx.h"
#include "DB2018.h"
#include "MyDlg2.h"
#include "afxdialogex.h"


// MyDlg2 对话框

IMPLEMENT_DYNAMIC(MyDlg2, CDialogEx)

MyDlg2::MyDlg2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2, pParent)
	, a(_T(""))
{

}

MyDlg2::~MyDlg2()
{
}

void MyDlg2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, a);
}


BEGIN_MESSAGE_MAP(MyDlg2, CDialogEx)
END_MESSAGE_MAP()


// MyDlg2 消息处理程序
