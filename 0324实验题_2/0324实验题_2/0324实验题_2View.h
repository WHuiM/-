
// 0324实验题_2View.h : CMy0324实验题_2View 类的接口
//

#pragma once


class CMy0324实验题_2View : public CView
{
protected: // 仅从序列化创建
	CMy0324实验题_2View();
	DECLARE_DYNCREATE(CMy0324实验题_2View)

// 特性
public:
	CMy0324实验题_2Doc* GetDocument() const;

// 操作
public:
	CBitmap m_Bitmap;
	int m_nWidth;
	int m_nHeight;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy0324实验题_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 0324实验题_2View.cpp 中的调试版本
inline CMy0324实验题_2Doc* CMy0324实验题_2View::GetDocument() const
   { return reinterpret_cast<CMy0324实验题_2Doc*>(m_pDocument); }
#endif

