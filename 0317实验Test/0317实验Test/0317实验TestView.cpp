
// 0317实验TestView.cpp : CMy0317实验TestView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0317实验Test.h"
#endif

#include "0317实验TestDoc.h"
#include "0317实验TestView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0317实验TestView

IMPLEMENT_DYNCREATE(CMy0317实验TestView, CView)

BEGIN_MESSAGE_MAP(CMy0317实验TestView, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMy0317实验TestView 构造/析构

CMy0317实验TestView::CMy0317实验TestView()
{
	// TODO: 在此处添加构造代码

}

CMy0317实验TestView::~CMy0317实验TestView()
{
}

BOOL CMy0317实验TestView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0317实验TestView 绘制

void CMy0317实验TestView::OnDraw(CDC* pDC)
{
	CMy0317实验TestDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CString s;
	s.Format(_T("mousemove发生次数：%d"), pDoc->a);
	pDC->TextOutW(200, 200, s);
	s.Format(_T("横向移动距离：%d"), (pDoc->x2.x - pDoc->x1.x));
	pDC->TextOutW(200, 300, s);
}


// CMy0317实验TestView 诊断

#ifdef _DEBUG
void CMy0317实验TestView::AssertValid() const
{
	CView::AssertValid();
}

void CMy0317实验TestView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0317实验TestDoc* CMy0317实验TestView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0317实验TestDoc)));
	return (CMy0317实验TestDoc*)m_pDocument;
}
#endif //_DEBUG


// CMy0317实验TestView 消息处理程序


void CMy0317实验TestView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy0317实验TestDoc* pDoc = GetDocument();
	pDoc->x1.x = point.x;
	pDoc->x1.y = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CMy0317实验TestView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy0317实验TestDoc* pDoc = GetDocument();
	pDoc->x2.x = point.x;
	pDoc->x2.y = point.y;
	CView::OnLButtonUp(nFlags, point);
}


void CMy0317实验TestView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy0317实验TestDoc* pDoc = GetDocument();
	if (nFlags&MK_LBUTTON)
	{
		pDoc->a += 1;
	}
	Invalidate();
	CView::OnMouseMove(nFlags, point);
}
