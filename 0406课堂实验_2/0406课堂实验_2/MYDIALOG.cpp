// MYDIALOG.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "0406����ʵ��_2.h"
#include "MYDIALOG.h"
#include "afxdialogex.h"


// MYDIALOG �Ի���

IMPLEMENT_DYNAMIC(MYDIALOG, CDialogEx)

MYDIALOG::MYDIALOG(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, a(_T(""))
	, b(_T(""))
{

}

MYDIALOG::~MYDIALOG()
{
}

void MYDIALOG::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, a);
	DDX_Text(pDX, IDC_EDIT2, b);
}


BEGIN_MESSAGE_MAP(MYDIALOG, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MYDIALOG::OnBnClickedButton1)
END_MESSAGE_MAP()


// MYDIALOG ��Ϣ�������


void MYDIALOG::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	c = a;
	a = b;
	b = c;
	UpdateData(false);
}
