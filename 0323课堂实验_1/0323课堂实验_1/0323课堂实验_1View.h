
// 0323课堂实验_1View.h : CMy0323课堂实验_1View 类的接口
//

#pragma once


class CMy0323课堂实验_1View : public CView
{
protected: // 仅从序列化创建
	CMy0323课堂实验_1View();
	DECLARE_DYNCREATE(CMy0323课堂实验_1View)

// 特性
public:
	CMy0323课堂实验_1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy0323课堂实验_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowcircle();
};

#ifndef _DEBUG  // 0323课堂实验_1View.cpp 中的调试版本
inline CMy0323课堂实验_1Doc* CMy0323课堂实验_1View::GetDocument() const
   { return reinterpret_cast<CMy0323课堂实验_1Doc*>(m_pDocument); }
#endif

