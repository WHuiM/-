
// 0317实验Test_3View.cpp : CMy0317实验Test_3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0317实验Test_3.h"
#endif

#include "0317实验Test_3Doc.h"
#include "0317实验Test_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0317实验Test_3View

IMPLEMENT_DYNCREATE(CMy0317实验Test_3View, CView)

BEGIN_MESSAGE_MAP(CMy0317实验Test_3View, CView)
END_MESSAGE_MAP()

// CMy0317实验Test_3View 构造/析构

CMy0317实验Test_3View::CMy0317实验Test_3View()
{
	// TODO: 在此处添加构造代码

}

CMy0317实验Test_3View::~CMy0317实验Test_3View()
{
}

BOOL CMy0317实验Test_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0317实验Test_3View 绘制

void CMy0317实验Test_3View::OnDraw(CDC* /*pDC*/)
{
	CMy0317实验Test_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy0317实验Test_3View 诊断

#ifdef _DEBUG
void CMy0317实验Test_3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0317实验Test_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0317实验Test_3Doc* CMy0317实验Test_3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0317实验Test_3Doc)));
	return (CMy0317实验Test_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0317实验Test_3View 消息处理程序
