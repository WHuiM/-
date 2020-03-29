
// 0316课堂实验_1View.cpp : CMy0316课堂实验_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0316课堂实验_1.h"
#endif

#include "0316课堂实验_1Doc.h"
#include "0316课堂实验_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0316课堂实验_1View

IMPLEMENT_DYNCREATE(CMy0316课堂实验_1View, CView)

BEGIN_MESSAGE_MAP(CMy0316课堂实验_1View, CView)
//	ON_WM_MOUSEMOVE()
//ON_WM_LBUTTONDOWN()
//ON_WM_LBUTTONUP()
ON_WM_MOUSEMOVE()
ON_WM_LBUTTONDOWN()
ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMy0316课堂实验_1View 构造/析构

CMy0316课堂实验_1View::CMy0316课堂实验_1View()
{
	// TODO: 在此处添加构造代码

}

CMy0316课堂实验_1View::~CMy0316课堂实验_1View()
{
}

BOOL CMy0316课堂实验_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0316课堂实验_1View 绘制

void CMy0316课堂实验_1View::OnDraw(CDC* pDC)
{
	CMy0316课堂实验_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据
	pDC->Rectangle(pDoc->cr);
}


// CMy0316课堂实验_1View 诊断

#ifdef _DEBUG
void CMy0316课堂实验_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0316课堂实验_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0316课堂实验_1Doc* CMy0316课堂实验_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0316课堂实验_1Doc)));
	return (CMy0316课堂实验_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0316课堂实验_1View 消息处理程序


//void CMy0316课堂实验_1View::OnMouseMove(UINT nFlags, CPoint point)
//{
//	// TODO: 在此添加消息处理程序代码和/或调用默认值
//	CMy0316课堂实验_1Doc* pDoc = GetDocument();
//	CClientDC dc(this);
//	if (nFlags&MK_LBUTTON)
//	{
//		pDoc->cr.top = point.x;
//		pDoc->cr.left = point.y;
//	}
//	else
//	{
//		pDoc->cr.bottom = point.x;
//		pDoc->cr.right = point.y;
//		
//	}
//	dc.Rectangle(pDoc->cr);
//	Invalidate();
//	CView::OnMouseMove(nFlags, point);
//}


//void CMy0316课堂实验_1View::OnLButtonDown(UINT nFlags, CPoint point)
//{
//	// TODO: 在此添加消息处理程序代码和/或调用默认值
//	CRect c1;
//	CClientDC dc(this);
//	this->GetClientRect(&c1);
//	CMy0316课堂实验_1Doc* pDoc = GetDocument();
//	pDoc->cr.left = point.x;
//	pDoc->cr.top = point.y;
//	CView::OnLButtonDown(nFlags, point);
//}


//void CMy0316课堂实验_1View::OnLButtonUp(UINT nFlags, CPoint point)
//{
//	// TODO: 在此添加消息处理程序代码和/或调用默认值
//	CRect c2;
//	CClientDC dc(this);
//	this->GetClientRect(&c2);
//	CMy0316课堂实验_1Doc* pDoc = GetDocument();
//	pDoc->cr.right = point.x;
//	pDoc->cr.bottom = point.y;
//	CView::OnLButtonUp(nFlags, point);
//}


void CMy0316课堂实验_1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CMy0316课堂实验_1Doc* pDoc = GetDocument();
	if (nFlags&MK_LBUTTON)
	{
		CString s;
		s.Format(_T("%d   %d"), point.x, point.y);
		dc.TextOutW(200, 200, s);
	}
	CView::OnMouseMove(nFlags, point);
}


void CMy0316课堂实验_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CMy0316课堂实验_1Doc* pDoc = GetDocument();
	pDoc->cr.left = point.x;
	pDoc->cr.top = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CMy0316课堂实验_1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy0316课堂实验_1Doc* pDoc = GetDocument();
	pDoc->cr.right = point.x;
	pDoc->cr.bottom = point.y;
	Invalidate();
	CView::OnLButtonUp(nFlags, point);
}
