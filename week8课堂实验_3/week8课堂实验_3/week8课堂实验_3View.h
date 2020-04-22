
// week8课堂实验_3View.h : Cweek8课堂实验_3View 类的接口
//

#pragma once


class Cweek8课堂实验_3View : public CView
{
protected: // 仅从序列化创建
	Cweek8课堂实验_3View();
	DECLARE_DYNCREATE(Cweek8课堂实验_3View)

// 特性
public:
	Cweek8课堂实验_3Doc* GetDocument() const;
	CString s;
// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek8课堂实验_3View();
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
	afx_msg void OnPopDialog();
};

#ifndef _DEBUG  // week8课堂实验_3View.cpp 中的调试版本
inline Cweek8课堂实验_3Doc* Cweek8课堂实验_3View::GetDocument() const
   { return reinterpret_cast<Cweek8课堂实验_3Doc*>(m_pDocument); }
#endif

