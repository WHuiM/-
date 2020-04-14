
// 0406课堂实验_2View.cpp : CMy0406课堂实验_2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0406课堂实验_2.h"
#endif

#include "0406课堂实验_2Doc.h"
#include "0406课堂实验_2View.h"
#include "MYDIALOG.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0406课堂实验_2View

IMPLEMENT_DYNCREATE(CMy0406课堂实验_2View, CView)

BEGIN_MESSAGE_MAP(CMy0406课堂实验_2View, CView)
	ON_COMMAND(ID_POPOUT, &CMy0406课堂实验_2View::OnPopout)
END_MESSAGE_MAP()

// CMy0406课堂实验_2View 构造/析构

CMy0406课堂实验_2View::CMy0406课堂实验_2View()
{
	// TODO: 在此处添加构造代码

}

CMy0406课堂实验_2View::~CMy0406课堂实验_2View()
{
}

BOOL CMy0406课堂实验_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0406课堂实验_2View 绘制

void CMy0406课堂实验_2View::OnDraw(CDC* /*pDC*/)
{
	CMy0406课堂实验_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy0406课堂实验_2View 诊断

#ifdef _DEBUG
void CMy0406课堂实验_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0406课堂实验_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0406课堂实验_2Doc* CMy0406课堂实验_2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0406课堂实验_2Doc)));
	return (CMy0406课堂实验_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0406课堂实验_2View 消息处理程序


void CMy0406课堂实验_2View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	MYDIALOG *pD = new MYDIALOG();
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);
}
