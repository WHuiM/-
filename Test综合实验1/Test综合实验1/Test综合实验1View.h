
// Test综合实验1View.h : CTest综合实验1View 类的接口
//

#pragma once

class CTest综合实验1Set;

class CTest综合实验1View : public CRecordView
{
protected: // 仅从序列化创建
	CTest综合实验1View();
	DECLARE_DYNCREATE(CTest综合实验1View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_TEST1_FORM };
#endif
	CTest综合实验1Set* m_pSet;

// 特性
public:
	CTest综合实验1Doc* GetDocument() const;

// 操作
public:
	CString filepath;
	CRect cr;
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
	virtual ~CTest综合实验1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit2();
	CString name;
	CString number;
	CString gender;
	CString picname;
	void CTest综合实验1View::foo(CImage &img, int &sx, int &sy, int &w, int &h);
	void CTest综合实验1View::Draw(CString filename);
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void OnPaint();
};

#ifndef _DEBUG  // Test综合实验1View.cpp 中的调试版本
inline CTest综合实验1Doc* CTest综合实验1View::GetDocument() const
   { return reinterpret_cast<CTest综合实验1Doc*>(m_pDocument); }
#endif

