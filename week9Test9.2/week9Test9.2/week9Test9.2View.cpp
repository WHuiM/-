
// week9Test9.2View.cpp : Cweek9Test92View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week9Test9.2.h"
#endif

#include "week9Test9.2Doc.h"
#include "week9Test9.2View.h"
#include<afxtempl.h>
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek9Test92View

IMPLEMENT_DYNCREATE(Cweek9Test92View, CView)

BEGIN_MESSAGE_MAP(Cweek9Test92View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// Cweek9Test92View 构造/析构

Cweek9Test92View::Cweek9Test92View()
{
	// TODO: 在此处添加构造代码
	
	a.x = a.y = 0;
	flag = 0;
	cr.bottom = cr.right = cr.left = cr.top = 0;
}

Cweek9Test92View::~Cweek9Test92View()
{
}

BOOL Cweek9Test92View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek9Test92View 绘制

void Cweek9Test92View::OnDraw(CDC* pDC)
{
	Cweek9Test92Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	for (int i = 0; i < pDoc->ca.GetSize(); i++)
	{
		pDC->Ellipse(pDoc->ca.GetAt(i));
	}
	pDC->Ellipse(cr);
}


// Cweek9Test92View 诊断

#ifdef _DEBUG
void Cweek9Test92View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek9Test92View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek9Test92Doc* Cweek9Test92View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek9Test92Doc)));
	return (Cweek9Test92Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek9Test92View 消息处理程序


void Cweek9Test92View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	cr.left = point.x;
	cr.top = point.y;
	a = point;
	flag = 1;
	CView::OnLButtonDown(nFlags, point);
}


void Cweek9Test92View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cweek9Test92Doc* pDoc = GetDocument();
	cr.bottom = point.y;
	cr.right = point.x;
	flag = 0;
	pDoc->ca.Add(cr);
	CView::OnLButtonUp(nFlags, point);
}


void Cweek9Test92View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	if (flag == 1)
	{
		cr.left = a.x;
		cr.top = a.y;
		cr.right = point.x;
		cr.bottom = point.y;
		InvalidateRect(&cr);
	}
	
		
	
	CView::OnMouseMove(nFlags, point);
}
