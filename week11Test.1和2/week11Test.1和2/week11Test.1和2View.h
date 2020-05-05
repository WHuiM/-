
// week11Test.1和2View.h : Cweek11Test1和2View 类的接口
//

#pragma once

class Cweek11Test1和2Set;

class Cweek11Test1和2View : public CRecordView
{
protected: // 仅从序列化创建
	Cweek11Test1和2View();
	DECLARE_DYNCREATE(Cweek11Test1和2View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK11TEST12_FORM };
#endif
	Cweek11Test1和2Set* m_pSet;

// 特性
public:
	Cweek11Test1和2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~Cweek11Test1和2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	long id;
	CString name;
	CString number;
	CString age;
	CString phonenumber;
	afx_msg void OnBnClickedButton1();
	void Cweek11Test1和2View::foo(CImage &img, int &sx, int &sy, int &w, int &h);
};

#ifndef _DEBUG  // week11Test.1和2View.cpp 中的调试版本
inline Cweek11Test1和2Doc* Cweek11Test1和2View::GetDocument() const
   { return reinterpret_cast<Cweek11Test1和2Doc*>(m_pDocument); }
#endif

