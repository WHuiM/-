// MYDIALOG.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "week7_4.h"
#include "MYDIALOG.h"
#include "afxdialogex.h"


// MYDIALOG �Ի���

IMPLEMENT_DYNAMIC(MYDIALOG, CDialogEx)

MYDIALOG::MYDIALOG(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, s1(_T("��ʼ��"))
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


// MYDIALOG ��Ϣ�������


void MYDIALOG::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString s;
	UpdateData(true);
	s.Format(_T("%d"), s2);
	s3 = s1 + s;
	UpdateData(false);
}
