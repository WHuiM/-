
// week8课堂实验_1View.h : Cweek8课堂实验_1View 类的接口
//

#pragma once


class Cweek8课堂实验_1View : public CView
{
protected: // 仅从序列化创建
	Cweek8课堂实验_1View();
	DECLARE_DYNCREATE(Cweek8课堂实验_1View)

// 特性
public:
	Cweek8课堂实验_1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek8课堂实验_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // week8课堂实验_1View.cpp 中的调试版本
inline Cweek8课堂实验_1Doc* Cweek8课堂实验_1View::GetDocument() const
   { return reinterpret_cast<Cweek8课堂实验_1Doc*>(m_pDocument); }
#endif

