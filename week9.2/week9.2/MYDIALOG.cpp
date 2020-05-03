// MYDIALOG.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "week9.2.h"
#include "MYDIALOG.h"
#include "afxdialogex.h"
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

// MYDIALOG �Ի���

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
	ON_BN_CLICKED(IDC_BUTTON1, &MYDIALOG::OnBnClickedButton1)
END_MESSAGE_MAP()


// MYDIALOG ��Ϣ�������


void MYDIALOG::foo(CImage &img,int &sx, int &sy, int &w, int &h)
{
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);
	float rect_ratio = 1.0*rect.Width()/rect.Height();

	float img_ratio = 1.0*img.GetWidth()/img.GetHeight();
	if (rect_ratio > img_ratio)
	{
		h = rect.Height();
		w = img_ratio*h;
		sx = (rect.Width() - w) / 2;
		sy = 0;

	}
	else
	{
		w = rect.Width();
		h = w / img_ratio;
		sx = 0;
		sy = (rect.Height() - h) / 2;
	}
	
}
void MYDIALOG::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CFileDialog cfd(true);     //�����ļ��Ի���
	int r = cfd.DoModal();    //�����ļ��Ի���
	CString text;
	if (r == IDOK)
	{
		text = cfd.GetPathName();  //ȡ�������ȡ���ı��ļ����ݵ�·����abc.text��
	}
	ifstream ifs(text);             //��������������ϵ
	string s;
	ifs >> s;
	CImage img;
	img.Load(CString(s.c_str()));
	if (!img.IsNull())
	{
		int sx, sy, w, h;
		foo(img,sx, sy, w, h);
		CDC *pDC = GetDlgItem(IDC_STATIC)->GetDC();
		pDC->SetStretchBltMode(HALFTONE);
		img.Draw(pDC->m_hDC,sx,sy,w,h);
		ReleaseDC(pDC);
	}
		
	
}
