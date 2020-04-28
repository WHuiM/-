
// week8实验Test_2.4View.cpp : Cweek8实验Test_24View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week8实验Test_2.4.h"
#endif

#include "week8实验Test_2.4Doc.h"
#include "week8实验Test_2.4View.h"
#include "MYDIALOG.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek8实验Test_24View

IMPLEMENT_DYNCREATE(Cweek8实验Test_24View, CView)

BEGIN_MESSAGE_MAP(Cweek8实验Test_24View, CView)
	ON_COMMAND(ID_POP_DIALOG, &Cweek8实验Test_24View::OnPopDialog)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cweek8实验Test_24View 构造/析构

Cweek8实验Test_24View::Cweek8实验Test_24View()
{
	// TODO: 在此处添加构造代码
	cr.SetRect(300, 200, 650, 300);
	cr1.SetRect(600, 400, 850, 500);
	r = g = b = 0;
	
}

Cweek8实验Test_24View::~Cweek8实验Test_24View()
{
}

BOOL Cweek8实验Test_24View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek8实验Test_24View 绘制

void Cweek8实验Test_24View::OnDraw(CDC* pDC)
{
	Cweek8实验Test_24Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Ellipse(cr);
	pDC->Ellipse(cr1);
}


// Cweek8实验Test_24View 诊断

#ifdef _DEBUG
void Cweek8实验Test_24View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek8实验Test_24View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek8实验Test_24Doc* Cweek8实验Test_24View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek8实验Test_24Doc)));
	return (Cweek8实验Test_24Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek8实验Test_24View 消息处理程序


void Cweek8实验Test_24View::OnPopDialog()
{
	// TODO: 在此添加命令处理程序代码
	MYDIALOG dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		UpdateData(true);
		r = dlg.r;
		g = dlg.g;
		b = dlg.b;
		
	}
}


void Cweek8实验Test_24View::OnLButtonDown(UINT nFlags, CPoint point)
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
		CBrush newp(RGB(r, g, b));
		CBrush *oldp = dc.SelectObject(&newp);
		dc.Ellipse(cr);
		dc.SelectObject(oldp);
	}
	if (cr1.PtInRect(point))
	{
		CPen newpen(PS_DASH, 1, RGB(0, 0, 0));
		CPen *oldpen = dc.SelectObject(&newpen);
		dc.Rectangle(cr1);
		dc.SelectObject(oldpen);
		dc.Ellipse(cr1);
		CBrush newp(RGB(r, g, b));
		CBrush *oldp = dc.SelectObject(&newp);
		dc.Ellipse(cr1);
		dc.SelectObject(oldp);
	}
	CView::OnLButtonDown(nFlags, point);
}
