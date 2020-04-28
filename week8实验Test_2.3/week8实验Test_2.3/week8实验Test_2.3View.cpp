
// week8实验Test_2.3View.cpp : Cweek8实验Test_23View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week8实验Test_2.3.h"
#endif

#include "week8实验Test_2.3Doc.h"
#include "week8实验Test_2.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek8实验Test_23View

IMPLEMENT_DYNCREATE(Cweek8实验Test_23View, CView)

BEGIN_MESSAGE_MAP(Cweek8实验Test_23View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cweek8实验Test_23View 构造/析构

Cweek8实验Test_23View::Cweek8实验Test_23View()
{
	// TODO: 在此处添加构造代码
	cr.SetRect(300, 200, 650, 300);
	cr1.SetRect(600, 400, 850, 500);
}

Cweek8实验Test_23View::~Cweek8实验Test_23View()
{
}

BOOL Cweek8实验Test_23View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek8实验Test_23View 绘制

void Cweek8实验Test_23View::OnDraw(CDC* pDC)
{
	Cweek8实验Test_23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	
	pDC->Ellipse(cr);
	pDC->Ellipse(cr1);
}


// Cweek8实验Test_23View 诊断

#ifdef _DEBUG
void Cweek8实验Test_23View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek8实验Test_23View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek8实验Test_23Doc* Cweek8实验Test_23View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek8实验Test_23Doc)));
	return (Cweek8实验Test_23Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek8实验Test_23View 消息处理程序


void Cweek8实验Test_23View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	if (cr.PtInRect(point))
	{
		CPen newpen(PS_DASH, 1, RGB(0, 0, 0));
		CPen *oldpen = dc.SelectObject(&newpen);
		dc.Rectangle(cr);
		dc.SelectObject(oldpen);
		dc.Ellipse(cr);
	}
	if (cr1.PtInRect(point))
	{
		CPen newpen(PS_DASH, 1, RGB(0, 0, 0));
		CPen *oldpen = dc.SelectObject(&newpen);
		dc.Rectangle(cr1);
		dc.SelectObject(oldpen);
		dc.Ellipse(cr1);
	}
	CView::OnLButtonDown(nFlags, point);
}
