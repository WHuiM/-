
// week7_2View.h : Cweek7_2View 类的接口
//

#pragma once


class Cweek7_2View : public CView
{
protected: // 仅从序列化创建
	Cweek7_2View();
	DECLARE_DYNCREATE(Cweek7_2View)

// 特性
public:
	Cweek7_2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek7_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopout();
};

#ifndef _DEBUG  // week7_2View.cpp 中的调试版本
inline Cweek7_2Doc* Cweek7_2View::GetDocument() const
   { return reinterpret_cast<Cweek7_2Doc*>(m_pDocument); }
#endif

