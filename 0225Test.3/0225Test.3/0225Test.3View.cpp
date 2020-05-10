
// 0225Test.3View.cpp : CMy0225Test3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0225Test.3.h"
#endif

#include "0225Test.3Doc.h"
#include "0225Test.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0225Test3View

IMPLEMENT_DYNCREATE(CMy0225Test3View, CView)

BEGIN_MESSAGE_MAP(CMy0225Test3View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy0225Test3View 构造/析构

CMy0225Test3View::CMy0225Test3View()
{
	// TODO: 在此处添加构造代码
	ss = _T("韦惠梅的学号是：");
}

CMy0225Test3View::~CMy0225Test3View()
{
}

BOOL CMy0225Test3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0225Test3View 绘制

void CMy0225Test3View::OnDraw(CDC* /*pDC*/)
{
	CMy0225Test3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy0225Test3View 诊断

#ifdef _DEBUG
void CMy0225Test3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0225Test3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0225Test3Doc* CMy0225Test3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0225Test3Doc)));
	return (CMy0225Test3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0225Test3View 消息处理程序


void CMy0225Test3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy0225Test3Doc* pDoc = GetDocument();
	CString s1;
	s1 = ss + pDoc->s;
	CClientDC dc(this);
	dc.TextOutW(200, 200, s1);
	CView::OnLButtonDown(nFlags, point);
}
