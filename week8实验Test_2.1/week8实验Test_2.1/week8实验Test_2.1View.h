
// week8实验Test_2.1View.h : Cweek8实验Test_21View 类的接口
//

#pragma once


class Cweek8实验Test_21View : public CView
{
protected: // 仅从序列化创建
	Cweek8实验Test_21View();
	DECLARE_DYNCREATE(Cweek8实验Test_21View)

// 特性
public:
	Cweek8实验Test_21Doc* GetDocument() const;

// 操作
public:
	CPoint a, b;
	int flag;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek8实验Test_21View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // week8实验Test_2.1View.cpp 中的调试版本
inline Cweek8实验Test_21Doc* Cweek8实验Test_21View::GetDocument() const
   { return reinterpret_cast<Cweek8实验Test_21Doc*>(m_pDocument); }
#endif

