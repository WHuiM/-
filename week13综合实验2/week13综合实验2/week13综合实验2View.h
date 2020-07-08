
// week13综合实验2View.h : Cweek13综合实验2View 类的接口
//

#pragma once

class Cweek13综合实验2Set;

class Cweek13综合实验2View : public CRecordView
{
protected: // 仅从序列化创建
	Cweek13综合实验2View();
	DECLARE_DYNCREATE(Cweek13综合实验2View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK132_FORM };
#endif
	Cweek13综合实验2Set* m_pSet;

// 特性
public:
	Cweek13综合实验2Doc* GetDocument() const;

// 操作
public:
	CString file,s;
	CRect cr;
// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~Cweek13综合实验2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString picname;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	void Cweek13综合实验2View::Draw(CString filename);
	void Cweek13综合实验2View::foo(CImage &img, int &sx, int &sy, int &w, int &h);
	afx_msg void OnPaint();
	CString name;
	afx_msg void OnBnClickedButton1();
	
};

#ifndef _DEBUG  // week13综合实验2View.cpp 中的调试版本
inline Cweek13综合实验2Doc* Cweek13综合实验2View::GetDocument() const
   { return reinterpret_cast<Cweek13综合实验2Doc*>(m_pDocument); }
#endif

