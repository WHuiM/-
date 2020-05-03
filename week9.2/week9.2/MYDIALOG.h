#pragma once


// MYDIALOG 对话框

class MYDIALOG : public CDialogEx
{
	DECLARE_DYNAMIC(MYDIALOG)

public:
	MYDIALOG(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~MYDIALOG();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	void foo(CImage &img,int &sx, int &sy, int &sw, int &sh);
};

