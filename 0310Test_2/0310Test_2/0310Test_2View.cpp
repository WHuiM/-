
// 0310Test_2View.cpp : CMy0310Test_2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0310Test_2.h"
#endif

#include "0310Test_2Doc.h"
#include "0310Test_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0310Test_2View

IMPLEMENT_DYNCREATE(CMy0310Test_2View, CView)

BEGIN_MESSAGE_MAP(CMy0310Test_2View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMy0310Test_2View 构造/析构

CMy0310Test_2View::CMy0310Test_2View()
{
	// TODO: 在此处添加构造代码

}

CMy0310Test_2View::~CMy0310Test_2View()
{
}

BOOL CMy0310Test_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0310Test_2View 绘制

void CMy0310Test_2View::OnDraw(CDC* /*pDC*/)
{
	CMy0310Test_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy0310Test_2View 诊断

#ifdef _DEBUG
void CMy0310Test_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0310Test_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0310Test_2Doc* CMy0310Test_2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0310Test_2Doc)));
	return (CMy0310Test_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0310Test_2View 消息处理程序


void CMy0310Test_2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s = _T("左键正被按下");
	CClientDC dc(this);
	dc.TextOutW(200, 200, s);
	CView::OnLButtonDown(nFlags, point);
}


void CMy0310Test_2View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s = _T("左键正在抬起");
	CClientDC dc(this);
	dc.TextOutW(200, 400, s);
	CView::OnLButtonUp(nFlags, point);
	CView::OnLButtonUp(nFlags, point);
}
