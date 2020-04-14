// MYDIALOG.cpp : 实现文件
//

#include "stdafx.h"
#include "0406课堂实验_1.h"
#include "MYDIALOG.h"
#include "afxdialogex.h"


// MYDIALOG 对话框

IMPLEMENT_DYNAMIC(MYDIALOG, CDialogEx)

MYDIALOG::MYDIALOG(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

MYDIALOG::~MYDIALOG()
{
}

void MYDIALOG::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(MYDIALOG, CDialogEx)
END_MESSAGE_MAP()


// MYDIALOG 消息处理程序
