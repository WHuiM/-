
// 0303课堂实验.4View.cpp : CMy0303课堂实验4View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0303课堂实验.4.h"
#endif

#include "0303课堂实验.4Doc.h"
#include "0303课堂实验.4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0303课堂实验4View

IMPLEMENT_DYNCREATE(CMy0303课堂实验4View, CView)

BEGIN_MESSAGE_MAP(CMy0303课堂实验4View, CView)
END_MESSAGE_MAP()

// CMy0303课堂实验4View 构造/析构

CMy0303课堂实验4View::CMy0303课堂实验4View()
{
	// TODO: 在此处添加构造代码

}

CMy0303课堂实验4View::~CMy0303课堂实验4View()
{
}

BOOL CMy0303课堂实验4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0303课堂实验4View 绘制

void CMy0303课堂实验4View::OnDraw(CDC* pDC)
{
	CMy0303课堂实验4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CRect cr;
	this->GetClientRect(&cr);
	pDC->Ellipse(cr);
	CBrush  newpen(RGB(200, 150, 200));
	CBrush *oldpen = pDC->SelectObject(&newpen);
	pDC->Ellipse(cr);
	pDC->SelectObject(oldpen);

}


// CMy0303课堂实验4View 诊断

#ifdef _DEBUG
void CMy0303课堂实验4View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0303课堂实验4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0303课堂实验4Doc* CMy0303课堂实验4View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0303课堂实验4Doc)));
	return (CMy0303课堂实验4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0303课堂实验4View 消息处理程序
