
// week8课堂实验 _2View.h : Cweek8课堂实验_2View 类的接口
//

#pragma once


class Cweek8课堂实验_2View : public CView
{
protected: // 仅从序列化创建
	Cweek8课堂实验_2View();
	DECLARE_DYNCREATE(Cweek8课堂实验_2View)

// 特性
public:
	Cweek8课堂实验_2Doc*  GetDocument() const;

// 操作
public:
	CString s;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek8课堂实验_2View();
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
	afx_msg void OnPopout();
};

#ifndef _DEBUG  // week8课堂实验 _2View.cpp 中的调试版本
inline Cweek8课堂实验_2Doc* Cweek8课堂实验_2View::GetDocument() const
   { return reinterpret_cast<Cweek8课堂实验_2Doc*>(m_pDocument); }
#endif

