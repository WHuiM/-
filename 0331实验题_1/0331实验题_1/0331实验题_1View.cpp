
// 0331实验题_1View.cpp : CMy0331实验题_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0331实验题_1.h"
#endif

#include "0331实验题_1Doc.h"
#include "0331实验题_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0331实验题_1View

IMPLEMENT_DYNCREATE(CMy0331实验题_1View, CView)

BEGIN_MESSAGE_MAP(CMy0331实验题_1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_CHAR()
END_MESSAGE_MAP()

// CMy0331实验题_1View 构造/析构

CMy0331实验题_1View::CMy0331实验题_1View()
{
	// TODO: 在此处添加构造代码
	i = 1;
	x = 0; y = 0;
}

CMy0331实验题_1View::~CMy0331实验题_1View()
{
}

BOOL CMy0331实验题_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0331实验题_1View 绘制
CRect cr(200, 200, 500, 350);
CRect cr1(190, 190, 550, 350);
void CMy0331实验题_1View::OnDraw(CDC* pDC)
{
	CMy0331实验题_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	
	pDC->Rectangle(cr1);
	
}


// CMy0331实验题_1View 诊断

#ifdef _DEBUG
void CMy0331实验题_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0331实验题_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0331实验题_1Doc* CMy0331实验题_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0331实验题_1Doc)));
	return (CMy0331实验题_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0331实验题_1View 消息处理程序


void CMy0331实验题_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	/*SetCaretPos(point);
	m_strLine.Empty();
	if (cr.PtInRect(point))
	{
		m_ptorigin.x = point.x;
		m_ptorigin.y = point.y;
	}*/
	
	CView::OnLButtonDown(nFlags, point);
}


void CMy0331实验题_1View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CString ch;
	
	int postion;
	int flag;
	ch.Format(_T("%c"), nChar);
	if (x > 200 && y > 200)
	{
		postion = (x - 200) / 10 + (y - 200) / 20 * 30;
		s.Insert(postion, nChar);
	}
	else
	{
		s.Append(ch);
	}
	dc.DrawText(s, cr, DT_LEFT | DT_WORDBREAK | DT_EDITCONTROL);
	
	CView::OnChar(nChar, nRepCnt, nFlags);
}
