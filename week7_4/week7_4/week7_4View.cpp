
// week7_4View.cpp : Cweek7_4View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week7_4.h"
#endif

#include "week7_4Doc.h"
#include "week7_4View.h"
#include "MYDIALOG.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek7_4View

IMPLEMENT_DYNCREATE(Cweek7_4View, CView)

BEGIN_MESSAGE_MAP(Cweek7_4View, CView)
	ON_COMMAND(ID_POPOUT, &Cweek7_4View::OnPopout)
END_MESSAGE_MAP()

// Cweek7_4View 构造/析构

Cweek7_4View::Cweek7_4View()
{
	// TODO: 在此处添加构造代码

}

Cweek7_4View::~Cweek7_4View()
{
}

BOOL Cweek7_4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek7_4View 绘制

void Cweek7_4View::OnDraw(CDC* /*pDC*/)
{
	Cweek7_4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek7_4View 诊断

#ifdef _DEBUG
void Cweek7_4View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek7_4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek7_4Doc* Cweek7_4View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek7_4Doc)));
	return (Cweek7_4Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek7_4View 消息处理程序


void Cweek7_4View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	MYDIALOG dlg = new MYDIALOG;
	int r = dlg.DoModal();
}
