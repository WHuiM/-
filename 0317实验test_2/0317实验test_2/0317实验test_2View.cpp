
// 0317实验test_2View.cpp : CMy0317实验test_2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0317实验test_2.h"
#endif

#include "0317实验test_2Doc.h"
#include "0317实验test_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0317实验test_2View

IMPLEMENT_DYNCREATE(CMy0317实验test_2View, CView)

BEGIN_MESSAGE_MAP(CMy0317实验test_2View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// CMy0317实验test_2View 构造/析构

CMy0317实验test_2View::CMy0317实验test_2View()
{
	// TODO: 在此处添加构造代码

}

CMy0317实验test_2View::~CMy0317实验test_2View()
{
}

BOOL CMy0317实验test_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0317实验test_2View 绘制

void CMy0317实验test_2View::OnDraw(CDC* pDC)
{
	CMy0317实验test_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Rectangle(pDoc->cr);
}


// CMy0317实验test_2View 诊断

#ifdef _DEBUG
void CMy0317实验test_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0317实验test_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0317实验test_2Doc* CMy0317实验test_2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0317实验test_2Doc)));
	return (CMy0317实验test_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0317实验test_2View 消息处理程序


void CMy0317实验test_2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy0317实验test_2Doc* pDoc = GetDocument();
	pDoc->cr.left = 400; pDoc->cr.top = 200;
	pDoc->cr.right = 700; pDoc->cr.bottom = 500;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}


void CMy0317实验test_2View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CRect cc;
	CClientDC dc(this);
	this->GetClientRect(&cc);
	CMy0317实验test_2Doc* pDoc = GetDocument();
	switch (nChar)
	{
	case VK_LEFT:
		if (pDoc->cr.left > 0)
		{
			pDoc->cr.left -= 10;
			pDoc->cr.right -= 10;
		}
		break;
	case VK_RIGHT:
		if (pDoc->cr.right <= (cc.right - cc.left))
		{
			pDoc->cr.left += 10;
			pDoc->cr.right += 10;
		}
	break;
	case VK_UP:
		if (pDoc->cr.top > 0)
		{
			pDoc->cr.top -= 10;
			pDoc->cr.bottom -= 10;
		}
	break;
	case VK_DOWN:
		if (pDoc->cr.bottom <= (cc.bottom - cc.top))
		{
			pDoc->cr.top += 10;
			pDoc->cr.bottom += 10;
		}
		break;
	case  VK_HOME:
		if (pDoc->cr.top > 0 && (pDoc->cr.left > 0))
		{
			pDoc->cr.top -= 10;
			pDoc->cr.left -= 10;
		}
	break;
	case  VK_END:
		if (pDoc->cr.bottom>pDoc->cr.top&&(pDoc->cr.right>pDoc->cr.left))
		{
			pDoc->cr.top += 10;
			pDoc->cr.left += 10;
		}
		break;
	}
	InvalidateRect(NULL,TRUE);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
