
// 0331实验题_1View.h : CMy0331实验题_1View 类的接口
//

#pragma once


class CMy0331实验题_1View : public CView
{
protected: // 仅从序列化创建
	CMy0331实验题_1View();
	DECLARE_DYNCREATE(CMy0331实验题_1View)

// 特性
public:
	CMy0331实验题_1Doc* GetDocument() const;

// 操作
	 
public:
	CString m_strLine;
	CPoint m_ptorigin;
	CRect cr;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy0331实验题_1View();
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
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // 0331实验题_1View.cpp 中的调试版本
inline CMy0331实验题_1Doc* CMy0331实验题_1View::GetDocument() const
   { return reinterpret_cast<CMy0331实验题_1Doc*>(m_pDocument); }
#endif

