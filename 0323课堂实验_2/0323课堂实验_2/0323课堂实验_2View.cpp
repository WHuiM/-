
// 0323课堂实验_2View.cpp : CMy0323课堂实验_2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0323课堂实验_2.h"
#endif

#include "0323课堂实验_2Doc.h"
#include "0323课堂实验_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0323课堂实验_2View

IMPLEMENT_DYNCREATE(CMy0323课堂实验_2View, CView)

BEGIN_MESSAGE_MAP(CMy0323课堂实验_2View, CView)
	ON_COMMAND(ID_DIFFERENTCOLOR, &CMy0323课堂实验_2View::OnDifferentcolor)
END_MESSAGE_MAP()

// CMy0323课堂实验_2View 构造/析构

CMy0323课堂实验_2View::CMy0323课堂实验_2View()
{
	// TODO: 在此处添加构造代码

}

CMy0323课堂实验_2View::~CMy0323课堂实验_2View()
{
}

BOOL CMy0323课堂实验_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0323课堂实验_2View 绘制

void CMy0323课堂实验_2View::OnDraw(CDC* /*pDC*/)
{
	CMy0323课堂实验_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy0323课堂实验_2View 诊断

#ifdef _DEBUG
void CMy0323课堂实验_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0323课堂实验_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0323课堂实验_2Doc* CMy0323课堂实验_2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0323课堂实验_2Doc)));
	return (CMy0323课堂实验_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0323课堂实验_2View 消息处理程序


void CMy0323课堂实验_2View::OnDifferentcolor()
{
	// TODO: 在此添加命令处理程序代码
	int r, a, b,l,m,n;
	l = 200; m = 256; n = 256;
	CClientDC dc(this);//显示半径渐变的圆
	CRect cr;
	this->GetClientRect(&cr);
	if (cr.bottom - cr.top > cr.right - cr.left)
		r = (cr.right - cr.left) / 2;
	else
		r = (cr.bottom + cr.top) / 2;
	a = cr.right - cr.left;
	b = cr.bottom - cr.top;
	for (int i = 0; i < 15; i++)
	{
		if (r > 0)
		{
			CPen NewPen(PS_SOLID, 2, RGB(l, m, n)), *p01dPen;
			p01dPen = dc.SelectObject(&NewPen);
			dc.Ellipse(a / 2 - r, b / 2 - r, a / 2 + r, b / 2 + r);
			dc.SelectObject(p01dPen);
			NewPen.DeleteObject();
			r -= 20;
			l -= 20;
			m -= 20;
			n -= 20;
			
			

		}

	}
}
