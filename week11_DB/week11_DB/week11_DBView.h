
// week11_DBView.h : Cweek11_DBView 类的接口
//

#pragma once

class Cweek11_DBSet;

class Cweek11_DBView : public CRecordView
{
protected: // 仅从序列化创建
	Cweek11_DBView();
	DECLARE_DYNCREATE(Cweek11_DBView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK11_DB_FORM };
#endif
	Cweek11_DBSet* m_pSet;

// 特性
public:
	Cweek11_DBDoc* GetDocument() const;

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
	virtual ~Cweek11_DBView();
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
	CString phonenum;
};

#ifndef _DEBUG  // week11_DBView.cpp 中的调试版本
inline Cweek11_DBDoc* Cweek11_DBView::GetDocument() const
   { return reinterpret_cast<Cweek11_DBDoc*>(m_pDocument); }
#endif

