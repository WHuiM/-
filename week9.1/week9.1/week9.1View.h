
// week9.1View.h : Cweek91View 类的接口
//

#pragma once


class Cweek91View : public CView
{
protected: // 仅从序列化创建
	Cweek91View();
	DECLARE_DYNCREATE(Cweek91View)

// 特性
public:
	Cweek91Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek91View();
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

#ifndef _DEBUG  // week9.1View.cpp 中的调试版本
inline Cweek91Doc* Cweek91View::GetDocument() const
   { return reinterpret_cast<Cweek91Doc*>(m_pDocument); }
#endif

