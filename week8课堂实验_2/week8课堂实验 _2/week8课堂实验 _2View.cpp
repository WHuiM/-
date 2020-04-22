
// week8课堂实验 _2View.cpp : Cweek8课堂实验_2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week8课堂实验 _2.h"
#endif

#include "week8课堂实验 _2Doc.h"
#include "week8课堂实验 _2View.h"
#include "mydialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek8课堂实验_2View

IMPLEMENT_DYNCREATE(Cweek8课堂实验_2View, CView)

BEGIN_MESSAGE_MAP(Cweek8课堂实验_2View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_POPOUT, &Cweek8课堂实验_2View::OnPopout)
END_MESSAGE_MAP()

// Cweek8课堂实验_2View 构造/析构

Cweek8课堂实验_2View::Cweek8课堂实验_2View()
{
	// TODO: 在此处添加构造代码
	s = " ";
}

Cweek8课堂实验_2View::~Cweek8课堂实验_2View()
{
}

BOOL Cweek8课堂实验_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek8课堂实验_2View 绘制

void Cweek8课堂实验_2View::OnDraw(CDC* /*pDC*/)
{
	Cweek8课堂实验_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek8课堂实验_2View 诊断

#ifdef _DEBUG
void Cweek8课堂实验_2View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek8课堂实验_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek8课堂实验_2Doc* Cweek8课堂实验_2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek8课堂实验_2Doc)));
	return (Cweek8课堂实验_2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek8课堂实验_2View 消息处理程序


void Cweek8课堂实验_2View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		s = cfd.GetFileName();
		GetDC()->TextOutW(200, 200, s);
	}
	CView::OnLButtonDblClk(nFlags, point);
}


void Cweek8课堂实验_2View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	mydialog *P = new mydialog;
	P->ss = s;
	P->Create(IDD_DIALOG1);
	P->ShowWindow(1);
}
