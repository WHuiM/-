#pragma once


// mydialog 对话框

class mydialog : public CDialogEx
{
	DECLARE_DYNAMIC(mydialog)

public:
	mydialog(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~mydialog();

	void mydialog::foo(CImage &img, int &sx, int &sy, int &w, int &h);
// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	CString filename;
	CRect crect;
};
