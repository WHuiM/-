
// week9Test.1Dlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"
#include<iostream>
#include<fstream>
#include<string>
#include <cassert>
using namespace std;

// Cweek9Test1Dlg �Ի���
class Cweek9Test1Dlg : public CDialogEx
{
// ����
public:
	Cweek9Test1Dlg(CWnd* pParent = NULL);	// ��׼���캯��
	~Cweek9Test1Dlg();
// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_WEEK9TEST1_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CListBox lbox;
	CString s;
	CString ss; 
	int r;
	CArray <CString>ca;
	afx_msg void OnBnClickedButton1();
	
//	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
//	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLbnSelchangeList1();
};
