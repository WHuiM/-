
// 0225Test.1View.cpp : CMy0225Test1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0225Test.1.h"
#endif

#include "0225Test.1Doc.h"
#include "0225Test.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0225Test1View

IMPLEMENT_DYNCREATE(CMy0225Test1View, CView)

BEGIN_MESSAGE_MAP(CMy0225Test1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy0225Test1View 构造/析构

CMy0225Test1View::CMy0225Test1View()
{
	// TODO: 在此处添加构造代码

}

CMy0225Test1View::~CMy0225Test1View()
{
}

BOOL CMy0225Test1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0225Test1View 绘制

void CMy0225Test1View::OnDraw(CDC* pDC)
{
	CMy0225Test1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	
}


// CMy0225Test1View 诊断

#ifdef _DEBUG
void CMy0225Test1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0225Test1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0225Test1Doc* CMy0225Test1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0225Test1Doc)));
	return (CMy0225Test1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0225Test1View 消息处理程序


void CMy0225Test1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy0225Test1Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString s = pDoc->ca.GetAt(0);
	dc.TextOutW(200, 200, s);
	CView::OnLButtonDown(nFlags, point);
}
