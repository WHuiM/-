
// week9.2View.h : Cweek92View 类的接口
//

#pragma once


class Cweek92View : public CView
{
protected: // 仅从序列化创建
	Cweek92View();
	DECLARE_DYNCREATE(Cweek92View)

// 特性
public:
	Cweek92Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek92View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopDialog();
};

#ifndef _DEBUG  // week9.2View.cpp 中的调试版本
inline Cweek92Doc* Cweek92View::GetDocument() const
   { return reinterpret_cast<Cweek92Doc*>(m_pDocument); }
#endif

