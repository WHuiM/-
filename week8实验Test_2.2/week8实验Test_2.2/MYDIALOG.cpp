// MYDIALOG.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "week8ʵ��Test_2.2.h"
#include "MYDIALOG.h"
#include "afxdialogex.h"


// MYDIALOG �Ի���

IMPLEMENT_DYNAMIC(MYDIALOG, CDialogEx)

MYDIALOG::MYDIALOG(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(0)
	, y(0)
	, a(0)
	, b(0)
{

}

MYDIALOG::~MYDIALOG()
{
}

void MYDIALOG::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDX_Text(pDX, IDC_EDIT3, a);
	DDX_Text(pDX, IDC_EDIT4, b);
}


BEGIN_MESSAGE_MAP(MYDIALOG, CDialogEx)
END_MESSAGE_MAP()


// MYDIALOG ��Ϣ�������
