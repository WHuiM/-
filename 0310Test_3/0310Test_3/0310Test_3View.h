
// 0310Test_3View.h : CMy0310Test_3View 类的接口
//

#pragma once


class CMy0310Test_3View : public CView
{
protected: // 仅从序列化创建
	CMy0310Test_3View();
	DECLARE_DYNCREATE(CMy0310Test_3View)

// 特性
public:
	CMy0310Test_3Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy0310Test_3View();
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
};

#ifndef _DEBUG  // 0310Test_3View.cpp 中的调试版本
inline CMy0310Test_3Doc* CMy0310Test_3View::GetDocument() const
   { return reinterpret_cast<CMy0310Test_3Doc*>(m_pDocument); }
#endif

