
// 0324实验题_1View.cpp : CMy0324实验题_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0324实验题_1.h"
#endif

#include "0324实验题_1Doc.h"
#include "0324实验题_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0324实验题_1View

IMPLEMENT_DYNCREATE(CMy0324实验题_1View, CView)

BEGIN_MESSAGE_MAP(CMy0324实验题_1View, CView)
	ON_COMMAND(ID_SHOWNAME, &CMy0324实验题_1View::OnShowname)
END_MESSAGE_MAP()

// CMy0324实验题_1View 构造/析构

CMy0324实验题_1View::CMy0324实验题_1View()
{
	// TODO: 在此处添加构造代码

}

CMy0324实验题_1View::~CMy0324实验题_1View()
{
}

BOOL CMy0324实验题_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0324实验题_1View 绘制

void CMy0324实验题_1View::OnDraw(CDC* /*pDC*/)
{
	CMy0324实验题_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy0324实验题_1View 诊断

#ifdef _DEBUG
void CMy0324实验题_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0324实验题_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0324实验题_1Doc* CMy0324实验题_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0324实验题_1Doc)));
	return (CMy0324实验题_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0324实验题_1View 消息处理程序


void CMy0324实验题_1View::OnShowname()
{
	// TODO: 在此添加命令处理程序代码
	CString s = _T("我是韦惠梅");
	CClientDC dc(this);
	dc.TextOutW(200, 200, s);
}
