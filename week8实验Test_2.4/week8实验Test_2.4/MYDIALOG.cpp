// MYDIALOG.cpp : 实现文件
//

#include "stdafx.h"
#include "week8实验Test_2.4.h"
#include "MYDIALOG.h"
#include "afxdialogex.h"


// MYDIALOG 对话框

IMPLEMENT_DYNAMIC(MYDIALOG, CDialogEx)

MYDIALOG::MYDIALOG(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, r(0)
	, g(0)
	, b(0)
{

}

MYDIALOG::~MYDIALOG()
{
}

void MYDIALOG::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, r);
	DDX_Text(pDX, IDC_EDIT2, g);
	DDX_Text(pDX, IDC_EDIT3, b);
}


BEGIN_MESSAGE_MAP(MYDIALOG, CDialogEx)
END_MESSAGE_MAP()


// MYDIALOG 消息处理程序
