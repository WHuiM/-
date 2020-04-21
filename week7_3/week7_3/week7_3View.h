
// week7_3View.h : Cweek7_3View 类的接口
//

#pragma once


class Cweek7_3View : public CView
{
protected: // 仅从序列化创建
	Cweek7_3View();
	DECLARE_DYNCREATE(Cweek7_3View)

// 特性
public:
	Cweek7_3Doc* GetDocument() const;

// 操作
public:
	CRect cr;
	int flag,sw;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek7_3View();
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
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // week7_3View.cpp 中的调试版本
inline Cweek7_3Doc* Cweek7_3View::GetDocument() const
   { return reinterpret_cast<Cweek7_3Doc*>(m_pDocument); }
#endif

