
// week8实验Test_2.2View.cpp : Cweek8实验Test_22View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week8实验Test_2.2.h"
#endif

#include "week8实验Test_2.2Doc.h"
#include "week8实验Test_2.2View.h"
#include"MYDIALOG.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek8实验Test_22View

IMPLEMENT_DYNCREATE(Cweek8实验Test_22View, CView)

BEGIN_MESSAGE_MAP(Cweek8实验Test_22View, CView)
	ON_COMMAND(ID_POP_DIALOG, &Cweek8实验Test_22View::OnPopDialog)
END_MESSAGE_MAP()

// Cweek8实验Test_22View 构造/析构

Cweek8实验Test_22View::Cweek8实验Test_22View()
{
	// TODO: 在此处添加构造代码

}

Cweek8实验Test_22View::~Cweek8实验Test_22View()
{
}

BOOL Cweek8实验Test_22View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek8实验Test_22View 绘制

void Cweek8实验Test_22View::OnDraw(CDC* /*pDC*/)
{
	Cweek8实验Test_22Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek8实验Test_22View 诊断

#ifdef _DEBUG
void Cweek8实验Test_22View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek8实验Test_22View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek8实验Test_22Doc* Cweek8实验Test_22View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek8实验Test_22Doc)));
	return (Cweek8实验Test_22Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek8实验Test_22View 消息处理程序


void Cweek8实验Test_22View::OnPopDialog()
{
	// TODO: 在此添加命令处理程序代码
	MYDIALOG dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		GetDC()->Ellipse(dlg.x, dlg.y, dlg.a, dlg.b);
	}

}
