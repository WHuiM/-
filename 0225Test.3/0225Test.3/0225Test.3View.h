
// 0225Test.3View.h : CMy0225Test3View 类的接口
//

#pragma once


class CMy0225Test3View : public CView
{
protected: // 仅从序列化创建
	CMy0225Test3View();
	DECLARE_DYNCREATE(CMy0225Test3View)

// 特性
public:
	CMy0225Test3Doc* GetDocument() const;
	CString ss;
// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy0225Test3View();
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

#ifndef _DEBUG  // 0225Test.3View.cpp 中的调试版本
inline CMy0225Test3Doc* CMy0225Test3View::GetDocument() const
   { return reinterpret_cast<CMy0225Test3Doc*>(m_pDocument); }
#endif

