
// week8ʵ��Test_1Dlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// Cweek8ʵ��Test_1Dlg �Ի���
class Cweek8ʵ��Test_1Dlg : public CDialogEx
{
// ����
public:
	Cweek8ʵ��Test_1Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_WEEK8TEST_1_DIALOG };
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
	double x;
	CListBox lbox;
	double y;
	double result;
	CString s;
	afx_msg void OnBnClickedButton1();
};
