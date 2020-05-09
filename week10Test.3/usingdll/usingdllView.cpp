
// usingdllView.cpp : CusingdllView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "usingdll.h"
#endif
#include"week10Test.3.h"
#include "usingdllDoc.h"
#include "usingdllView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CusingdllView

IMPLEMENT_DYNCREATE(CusingdllView, CView)

BEGIN_MESSAGE_MAP(CusingdllView, CView)
END_MESSAGE_MAP()

// CusingdllView 构造/析构

CusingdllView::CusingdllView()
{
	// TODO: 在此处添加构造代码

}

CusingdllView::~CusingdllView()
{
}

BOOL CusingdllView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CusingdllView 绘制

void CusingdllView::OnDraw(CDC* pDC)
{
	CusingdllDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CString ss;
	FAC f;
	ss.Format(_T("%f"), f.convert(30.0));
	pDC->TextOutW(200, 200, ss);
	CString s;
	s.Format(_T("%d"), factorial(5));
	pDC->TextOutW(200, 230, s);
}


// CusingdllView 诊断

#ifdef _DEBUG
void CusingdllView::AssertValid() const
{
	CView::AssertValid();
}

void CusingdllView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CusingdllDoc* CusingdllView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CusingdllDoc)));
	return (CusingdllDoc*)m_pDocument;
}
#endif //_DEBUG


// CusingdllView 消息处理程序
