// MYDialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "week7_2.h"
#include "MYDialog.h"
#include "afxdialogex.h"


// MYDialog �Ի���

IMPLEMENT_DYNAMIC(MYDialog, CDialogEx)

MYDialog::MYDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, a(0)
	, b(0)
	, c(0)
{

}

MYDialog::~MYDialog()
{
}

void MYDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, a);
	DDX_Text(pDX, IDC_EDIT2, b);
	DDX_Text(pDX, IDC_EDIT3, c);
}


BEGIN_MESSAGE_MAP(MYDialog, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON2, &MYDialog::OnBnClickedButton2)
END_MESSAGE_MAP()


// MYDialog ��Ϣ�������


void MYDialog::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	c = a + b;
	UpdateData(false);
}
