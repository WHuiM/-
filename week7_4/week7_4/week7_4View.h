
// week7_4View.h : Cweek7_4View 类的接口
//

#pragma once


class Cweek7_4View : public CView
{
protected: // 仅从序列化创建
	Cweek7_4View();
	DECLARE_DYNCREATE(Cweek7_4View)

// 特性
public:
	Cweek7_4Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek7_4View();
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

#ifndef _DEBUG  // week7_4View.cpp 中的调试版本
inline Cweek7_4Doc* Cweek7_4View::GetDocument() const
   { return reinterpret_cast<Cweek7_4Doc*>(m_pDocument); }
#endif

