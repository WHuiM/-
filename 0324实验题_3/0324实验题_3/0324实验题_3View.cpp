
// 0324实验题_3View.cpp : CMy0324实验题_3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0324实验题_3.h"
#endif

#include "0324实验题_3Doc.h"
#include "0324实验题_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0324实验题_3View

IMPLEMENT_DYNCREATE(CMy0324实验题_3View, CView)

BEGIN_MESSAGE_MAP(CMy0324实验题_3View, CView)
	ON_COMMAND(ID_DRAWLINE, &CMy0324实验题_3View::OnDrawline)
//	ON_WM_MOUSEMOVE()
ON_WM_LBUTTONDOWN()
ON_WM_LBUTTONUP()
ON_COMMAND(ID_DRAWRECT, &CMy0324实验题_3View::OnDrawrect)
ON_COMMAND(ID_DRAWCIRCLE, &CMy0324实验题_3View::OnDrawcircle)
END_MESSAGE_MAP()

// CMy0324实验题_3View 构造/析构

CMy0324实验题_3View::CMy0324实验题_3View()
{
	// TODO: 在此处添加构造代码

}

CMy0324实验题_3View::~CMy0324实验题_3View()
{
	a.x = 0; a.y = 0;
	b.x = 0; b.y = 0;
	flag = 0;
}

BOOL CMy0324实验题_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0324实验题_3View 绘制

void CMy0324实验题_3View::OnDraw(CDC* pDC)
{
	CMy0324实验题_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	if (flag == 1)
	{
		pDC->MoveTo(a);
		pDC->LineTo(b);
	}
	if (flag == 2)
	{
		
		pDC->Rectangle(a.x, a.y, b.x,b.y);
	}
	if (flag == 3)
	{
		
		pDC->Ellipse(a.x,a.y, b.x,b.y);

	}
	
}


// CMy0324实验题_3View 诊断

#ifdef _DEBUG
void CMy0324实验题_3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0324实验题_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0324实验题_3Doc* CMy0324实验题_3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0324实验题_3Doc)));
	return (CMy0324实验题_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0324实验题_3View 消息处理程序


void CMy0324实验题_3View::OnDrawline()
{
	// TODO: 在此添加命令处理程序代码
	flag = 1;

}


void CMy0324实验题_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CRect c1;
	this->GetClientRect(&c1);
	a.x = point.x;
	a.y = point.y;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}


void CMy0324实验题_3View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CRect c2;
	this->GetClientRect(&c2);
	b.x = point.x;
	b.y = point.y;
	Invalidate();
	CView::OnLButtonUp(nFlags, point);
}


void CMy0324实验题_3View::OnDrawrect()
{
	// TODO: 在此添加命令处理程序代码
	
	flag = 2;
	
}


void CMy0324实验题_3View::OnDrawcircle()
{
	// TODO: 在此添加命令处理程序代码
	flag = 3;
	
}
