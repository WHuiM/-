
// week9.2View.cpp : Cweek92View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week9.2.h"
#endif

#include "week9.2Doc.h"
#include "week9.2View.h"
#include"MYDIALOG.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek92View

IMPLEMENT_DYNCREATE(Cweek92View, CView)

BEGIN_MESSAGE_MAP(Cweek92View, CView)
	ON_COMMAND(ID_POP_DIALOG, &Cweek92View::OnPopDialog)
END_MESSAGE_MAP()

// Cweek92View 构造/析构

Cweek92View::Cweek92View()
{
	// TODO: 在此处添加构造代码

}

Cweek92View::~Cweek92View()
{
}

BOOL Cweek92View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek92View 绘制

void Cweek92View::OnDraw(CDC* /*pDC*/)
{
	Cweek92Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek92View 诊断

#ifdef _DEBUG
void Cweek92View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek92View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek92Doc* Cweek92View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek92Doc)));
	return (Cweek92Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek92View 消息处理程序


void Cweek92View::OnPopDialog()
{
	// TODO: 在此添加命令处理程序代码
	MYDIALOG cfd;
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		
	}	
}
