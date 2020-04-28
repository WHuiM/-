
// week8实验Test_2.4View.h : Cweek8实验Test_24View 类的接口
//

#pragma once


class Cweek8实验Test_24View : public CView
{
protected: // 仅从序列化创建
	Cweek8实验Test_24View();
	DECLARE_DYNCREATE(Cweek8实验Test_24View)

// 特性
public:
	Cweek8实验Test_24Doc* GetDocument() const;

// 操作
public:
	CRect cr;
	CRect cr1;
	int r, g, b;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek8实验Test_24View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopDialog();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // week8实验Test_2.4View.cpp 中的调试版本
inline Cweek8实验Test_24Doc* Cweek8实验Test_24View::GetDocument() const
   { return reinterpret_cast<Cweek8实验Test_24Doc*>(m_pDocument); }
#endif

