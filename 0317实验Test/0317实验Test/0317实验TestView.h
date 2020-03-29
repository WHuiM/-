
// 0317实验TestView.h : CMy0317实验TestView 类的接口
//

#pragma once


class CMy0317实验TestView : public CView
{
protected: // 仅从序列化创建
	CMy0317实验TestView();
	DECLARE_DYNCREATE(CMy0317实验TestView)

// 特性
public:
	CMy0317实验TestDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy0317实验TestView();
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

#ifndef _DEBUG  // 0317实验TestView.cpp 中的调试版本
inline CMy0317实验TestDoc* CMy0317实验TestView::GetDocument() const
   { return reinterpret_cast<CMy0317实验TestDoc*>(m_pDocument); }
#endif

