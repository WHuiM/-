
// week10TestView.h : Cweek10TestView 类的接口
//

#pragma once


class Cweek10TestView : public CView
{
protected: // 仅从序列化创建
	Cweek10TestView();
	DECLARE_DYNCREATE(Cweek10TestView)

// 特性
public:
	Cweek10TestDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek10TestView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // week10TestView.cpp 中的调试版本
inline Cweek10TestDoc* Cweek10TestView::GetDocument() const
   { return reinterpret_cast<Cweek10TestDoc*>(m_pDocument); }
#endif

