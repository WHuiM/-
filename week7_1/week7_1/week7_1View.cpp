
// week7_1View.cpp : Cweek7_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week7_1.h"
#endif

#include "week7_1Doc.h"
#include "week7_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek7_1View

IMPLEMENT_DYNCREATE(Cweek7_1View, CView)

BEGIN_MESSAGE_MAP(Cweek7_1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// Cweek7_1View 构造/析构

Cweek7_1View::Cweek7_1View()
{
	// TODO: 在此处添加构造代码
	a.x = a.y =b.x=b.y= 0;
	x1 =x2=y1=y2= 0;
	flag = 0;
}

Cweek7_1View::~Cweek7_1View()
{
}

BOOL Cweek7_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek7_1View 绘制

void Cweek7_1View::OnDraw(CDC* pDC)
{
	Cweek7_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	
	CBrush newpen(RGB(250, 150, 200));
	CBrush *oldpen = pDC->SelectObject(&newpen);
	pDC->Rectangle(pDoc->ce);
	pDC->SelectObject(oldpen);
}


// Cweek7_1View 诊断

#ifdef _DEBUG
void Cweek7_1View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek7_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek7_1Doc* Cweek7_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek7_1Doc)));
	return (Cweek7_1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek7_1View 消息处理程序


void Cweek7_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cweek7_1Doc* pDoc = GetDocument();
	if (pDoc->ce.PtInRect(point))
	{
		a = point;
		x1 = point.x - pDoc->ce.left;
		y1= point.y - pDoc->ce.top;
		x2 = pDoc->ce.right - point.x;
		y2 = pDoc->ce.bottom - point.y;
		flag = 1;
	}
	

	CView::OnLButtonDown(nFlags, point);
}


void Cweek7_1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cweek7_1Doc* pDoc = GetDocument();
	flag = 0;
	b = point;
	CView::OnLButtonUp(nFlags, point);
}


void Cweek7_1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cweek7_1Doc* pDoc = GetDocument();
	if (flag == 1)
	{
		pDoc->ce.left = point.x -x1;
		pDoc->ce.top = point .y-y1;
		pDoc->ce.right = point.x + x2;
		pDoc->ce.bottom = point.y + y2;
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}
