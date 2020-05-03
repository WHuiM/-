// MYDIALOG.cpp : 实现文件
//

#include "stdafx.h"
#include "week9.2.h"
#include "MYDIALOG.h"
#include "afxdialogex.h"
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

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
	ON_BN_CLICKED(IDC_BUTTON1, &MYDIALOG::OnBnClickedButton1)
END_MESSAGE_MAP()


// MYDIALOG 消息处理程序


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
	// TODO: 在此添加控件通知处理程序代码
	CFileDialog cfd(true);     //构造文件对话框
	int r = cfd.DoModal();    //弹出文件对话框
	CString text;
	if (r == IDOK)
	{
		text = cfd.GetPathName();  //取出你想读取的文本文件内容的路径（abc.text）
	}
	ifstream ifs(text);             //与输入流建立联系
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
