#pragma once


// MYDIALOG �Ի���

class MYDIALOG : public CDialogEx
{
	DECLARE_DYNAMIC(MYDIALOG)

public:
	MYDIALOG(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MYDIALOG();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	void foo(CImage &img,int &sx, int &sy, int &sw, int &sh);
};

