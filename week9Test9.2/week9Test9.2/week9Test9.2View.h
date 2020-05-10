
// week9Test9.2View.h : Cweek9Test92View 类的接口
//

#pragma once


class Cweek9Test92View : public CView
{
protected: // 仅从序列化创建
	Cweek9Test92View();
	DECLARE_DYNCREATE(Cweek9Test92View)

// 特性
public:
	Cweek9Test92Doc* GetDocument() const;

// 操作
public:
	
	CRect cr;
	CPoint a;
	int flag;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek9Test92View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // week9Test9.2View.cpp 中的调试版本
inline Cweek9Test92Doc* Cweek9Test92View::GetDocument() const
   { return reinterpret_cast<Cweek9Test92Doc*>(m_pDocument); }
#endif

