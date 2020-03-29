
// 0313实验题_1View.h : CMy0313实验题_1View 类的接口
//

#pragma once


class CMy0313实验题_1View : public CView
{
protected: // 仅从序列化创建
	CMy0313实验题_1View();
	DECLARE_DYNCREATE(CMy0313实验题_1View)

// 特性
public:
	CMy0313实验题_1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy0313实验题_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 0313实验题_1View.cpp 中的调试版本
inline CMy0313实验题_1Doc* CMy0313实验题_1View::GetDocument() const
   { return reinterpret_cast<CMy0313实验题_1Doc*>(m_pDocument); }
#endif

