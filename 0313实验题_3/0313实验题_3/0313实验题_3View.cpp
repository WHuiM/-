
// 0313实验题_3View.cpp : CMy0313实验题_3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0313实验题_3.h"
#endif

#include "0313实验题_3Doc.h"
#include "0313实验题_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0313实验题_3View

IMPLEMENT_DYNCREATE(CMy0313实验题_3View, CView)

BEGIN_MESSAGE_MAP(CMy0313实验题_3View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMy0313实验题_3View 构造/析构

CMy0313实验题_3View::CMy0313实验题_3View()
{
	// TODO: 在此处添加构造代码

}

CMy0313实验题_3View::~CMy0313实验题_3View()
{
}

BOOL CMy0313实验题_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0313实验题_3View 绘制

void CMy0313实验题_3View::OnDraw(CDC* /*pDC*/)
{
	CMy0313实验题_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy0313实验题_3View 诊断

#ifdef _DEBUG
void CMy0313实验题_3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0313实验题_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0313实验题_3Doc* CMy0313实验题_3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0313实验题_3Doc)));
	return (CMy0313实验题_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0313实验题_3View 消息处理程序


void CMy0313实验题_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy0313实验题_3Doc* pDoc = GetDocument();
	pDoc->count += 1;
	CView::OnLButtonDown(nFlags, point);
}


void CMy0313实验题_3View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy0313实验题_3Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString s;
	s.Format(_T("%d"), pDoc->count);
	dc.TextOutW(200, 200, s);
	CView::OnRButtonDown(nFlags, point);
}
