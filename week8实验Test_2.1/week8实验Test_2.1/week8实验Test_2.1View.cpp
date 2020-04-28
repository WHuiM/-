
// week8实验Test_2.1View.cpp : Cweek8实验Test_21View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week8实验Test_2.1.h"
#endif

#include "week8实验Test_2.1Doc.h"
#include "week8实验Test_2.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek8实验Test_21View

IMPLEMENT_DYNCREATE(Cweek8实验Test_21View, CView)

BEGIN_MESSAGE_MAP(Cweek8实验Test_21View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Cweek8实验Test_21View 构造/析构

Cweek8实验Test_21View::Cweek8实验Test_21View()
{
	// TODO: 在此处添加构造代码
	a.x = a.y = b.x = b.y = 0;
	flag = 0;
}

Cweek8实验Test_21View::~Cweek8实验Test_21View()
{
}

BOOL Cweek8实验Test_21View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek8实验Test_21View 绘制

void Cweek8实验Test_21View::OnDraw(CDC* pDC)
{
	Cweek8实验Test_21Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CRect cr(a, b);
	pDC->Ellipse(cr);
}


// Cweek8实验Test_21View 诊断

#ifdef _DEBUG
void Cweek8实验Test_21View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek8实验Test_21View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek8实验Test_21Doc* Cweek8实验Test_21View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek8实验Test_21Doc)));
	return (Cweek8实验Test_21Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek8实验Test_21View 消息处理程序


void Cweek8实验Test_21View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	a = point;
	flag = 1;
	
	CView::OnLButtonDown(nFlags, point);
}


void Cweek8实验Test_21View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (flag == 1)
	{
		b = point;
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}


void Cweek8实验Test_21View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	b = point;
	flag = 0;
	Invalidate();
	CView::OnLButtonUp(nFlags, point);
}
