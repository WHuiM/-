
// 0313实验题_2View.cpp : CMy0313实验题_2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0313实验题_2.h"
#endif

#include "0313实验题_2Doc.h"
#include "0313实验题_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0313实验题_2View

IMPLEMENT_DYNCREATE(CMy0313实验题_2View, CView)

BEGIN_MESSAGE_MAP(CMy0313实验题_2View, CView)
END_MESSAGE_MAP()

// CMy0313实验题_2View 构造/析构

CMy0313实验题_2View::CMy0313实验题_2View()
{
	// TODO: 在此处添加构造代码

}

CMy0313实验题_2View::~CMy0313实验题_2View()
{
}

BOOL CMy0313实验题_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0313实验题_2View 绘制

void CMy0313实验题_2View::OnDraw(CDC* pDC)
{
	CMy0313实验题_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->TextOutW(200, 200, pDoc->s);
	pDoc->s.Format(_T("%d"), pDoc->A);
	pDC->TextOutW(200, 250, pDoc->s);
}


// CMy0313实验题_2View 诊断

#ifdef _DEBUG
void CMy0313实验题_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0313实验题_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0313实验题_2Doc* CMy0313实验题_2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0313实验题_2Doc)));
	return (CMy0313实验题_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0313实验题_2View 消息处理程序
