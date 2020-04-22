
// week8课堂实验_1View.cpp : Cweek8课堂实验_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week8课堂实验_1.h"
#endif

#include "week8课堂实验_1Doc.h"
#include "week8课堂实验_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek8课堂实验_1View

IMPLEMENT_DYNCREATE(Cweek8课堂实验_1View, CView)

BEGIN_MESSAGE_MAP(Cweek8课堂实验_1View, CView)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// Cweek8课堂实验_1View 构造/析构

Cweek8课堂实验_1View::Cweek8课堂实验_1View()
{
	// TODO: 在此处添加构造代码

}

Cweek8课堂实验_1View::~Cweek8课堂实验_1View()
{
}

BOOL Cweek8课堂实验_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek8课堂实验_1View 绘制

void Cweek8课堂实验_1View::OnDraw(CDC* /*pDC*/)
{
	Cweek8课堂实验_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek8课堂实验_1View 诊断

#ifdef _DEBUG
void Cweek8课堂实验_1View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek8课堂实验_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek8课堂实验_1Doc* Cweek8课堂实验_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek8课堂实验_1Doc)));
	return (Cweek8课堂实验_1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek8课堂实验_1View 消息处理程序


void Cweek8课堂实验_1View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		CString s = cfd.GetFileName();
		GetDC()->TextOutW(200, 200, s);
	}
	CView::OnLButtonDblClk(nFlags, point);
}
