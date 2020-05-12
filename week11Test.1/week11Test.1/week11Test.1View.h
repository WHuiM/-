
// week11Test.1View.h : Cweek11Test1View 类的接口
//

#pragma once

class Cweek11Test1Set;

class Cweek11Test1View : public CRecordView
{
protected: // 仅从序列化创建
	Cweek11Test1View();
	DECLARE_DYNCREATE(Cweek11Test1View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK11TEST1_FORM };
#endif
	Cweek11Test1Set* m_pSet;

// 特性
public:
	Cweek11Test1Doc* GetDocument() const;

// 操作
public:
	CRect picRect;
// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~Cweek11Test1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	void Cweek11Test1View::foo(CImage &img, int &sx, int &sy, int &w, int &h);
	void Cweek11Test1View::Draw(CString filename);
	long ID;
	CString name;
	CString number;
	CString age;
	CString phonenumber;
};

#ifndef _DEBUG  // week11Test.1View.cpp 中的调试版本
inline Cweek11Test1Doc* Cweek11Test1View::GetDocument() const
   { return reinterpret_cast<Cweek11Test1Doc*>(m_pDocument); }
#endif

