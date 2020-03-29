
// 0313实验题_1View.cpp : CMy0313实验题_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0313实验题_1.h"
#endif

#include "0313实验题_1Doc.h"
#include "0313实验题_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0313实验题_1View

IMPLEMENT_DYNCREATE(CMy0313实验题_1View, CView)

BEGIN_MESSAGE_MAP(CMy0313实验题_1View, CView)
END_MESSAGE_MAP()

// CMy0313实验题_1View 构造/析构

CMy0313实验题_1View::CMy0313实验题_1View()
{
	// TODO: 在此处添加构造代码

}

CMy0313实验题_1View::~CMy0313实验题_1View()
{
}

BOOL CMy0313实验题_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0313实验题_1View 绘制

void CMy0313实验题_1View::OnDraw(CDC* pDC)
{
	CMy0313实验题_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CString s=_T("我是韦惠梅");
	pDC->TextOutW(200, 200, s);
	int a = 2020;
	s.Format(_T("%d"), a);
	pDC->TextOutW(200, 300, s);

}


// CMy0313实验题_1View 诊断

#ifdef _DEBUG
void CMy0313实验题_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0313实验题_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0313实验题_1Doc* CMy0313实验题_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0313实验题_1Doc)));
	return (CMy0313实验题_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0313实验题_1View 消息处理程序
