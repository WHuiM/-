
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
	m_strLine=" ";
	m_ptorigin.x=0;  m_ptorigin.y = 0;
	cr.top = 0; cr.left = 0;
	cr.bottom = 800; cr.right = 800; 
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

void CMy0331实验题_1View::OnDraw(CDC* pDC)
{
	CMy0331实验题_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	
	pDC->Rectangle(cr);
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
	SetCaretPos(point);
	m_strLine.Empty();
	if (cr.PtInRect(point))
	{
		m_ptorigin.x = point.x;
		m_ptorigin.y = point.y;
	}
	
	CView::OnLButtonDown(nFlags, point);
}


void CMy0331实验题_1View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	
	TEXTMETRIC tm;
	dc.GetTextMetrics(&tm);
	if (0x0d == nChar)
	{
		m_strLine.Empty();
		m_ptorigin.y += tm.tmHeight;
	}
	  if(0x08==nChar)
	{
		COLORREF clr = dc.SetTextColor(dc.GetBkColor());
		dc.TextOutW(m_ptorigin.x, m_ptorigin.y, m_strLine);
		m_strLine = m_strLine.Left(m_strLine.GetLength() - 1);
		dc.SetTextColor(clr);

	} 
	 else
	 {
		 m_strLine +=(char) nChar;
	 }
	 CSize sz = dc.GetTextExtent(m_strLine);
	 CPoint pt;
	 pt.x = m_ptorigin.x + sz.cx;
	 pt.y = m_ptorigin.x = sz.cy;
	 SetCaretPos(pt);
	 dc.TextOutW(m_ptorigin.x, m_ptorigin.y, m_strLine);
	CView::OnChar(nChar, nRepCnt, nFlags);
}
