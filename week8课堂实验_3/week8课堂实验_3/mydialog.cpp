// mydialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "week8����ʵ��_3.h"
#include "mydialog.h"
#include "afxdialogex.h"


// mydialog �Ի���

IMPLEMENT_DYNAMIC(mydialog, CDialogEx)

mydialog::mydialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

mydialog::~mydialog()
{
}

void mydialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, lbox);
}


BEGIN_MESSAGE_MAP(mydialog, CDialogEx)
END_MESSAGE_MAP()


// mydialog ��Ϣ�������
