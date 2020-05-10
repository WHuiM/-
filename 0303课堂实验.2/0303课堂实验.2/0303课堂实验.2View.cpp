
// 0303课堂实验.2View.cpp : CMy0303课堂实验2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0303课堂实验.2.h"
#endif

#include "0303课堂实验.2Doc.h"
#include "0303课堂实验.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0303课堂实验2View

IMPLEMENT_DYNCREATE(CMy0303课堂实验2View, CView)

BEGIN_MESSAGE_MAP(CMy0303课堂实验2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy0303课堂实验2View 构造/析构

CMy0303课堂实验2View::CMy0303课堂实验2View()
{
	// TODO: 在此处添加构造代码
	
	r = 0;
	ca.SetSize(10);
}

CMy0303课堂实验2View::~CMy0303课堂实验2View()
{
}

BOOL CMy0303课堂实验2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0303课堂实验2View 绘制

void CMy0303课堂实验2View::OnDraw(CDC* pDC)
{
	CMy0303课堂实验2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	for (int i = 0; i < ca.GetSize(); i++)

	{
		pDC->Ellipse(ca.GetAt(i));
	}
}


// CMy0303课堂实验2View 诊断

#ifdef _DEBUG
void CMy0303课堂实验2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0303课堂实验2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0303课堂实验2Doc* CMy0303课堂实验2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0303课堂实验2Doc)));
	return (CMy0303课堂实验2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0303课堂实验2View 消息处理程序


void CMy0303课堂实验2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	 r = rand() % (101 - 1) + 1;
	CRect cr(point.x - r, point.y - r, point.x + r, point.y + r);
	ca.Add(cr);
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
