
// 0316����ʵ��_1View.cpp : CMy0316����ʵ��_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0316����ʵ��_1.h"
#endif

#include "0316����ʵ��_1Doc.h"
#include "0316����ʵ��_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0316����ʵ��_1View

IMPLEMENT_DYNCREATE(CMy0316����ʵ��_1View, CView)

BEGIN_MESSAGE_MAP(CMy0316����ʵ��_1View, CView)
//	ON_WM_MOUSEMOVE()
//ON_WM_LBUTTONDOWN()
//ON_WM_LBUTTONUP()
ON_WM_MOUSEMOVE()
ON_WM_LBUTTONDOWN()
ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMy0316����ʵ��_1View ����/����

CMy0316����ʵ��_1View::CMy0316����ʵ��_1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0316����ʵ��_1View::~CMy0316����ʵ��_1View()
{
}

BOOL CMy0316����ʵ��_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0316����ʵ��_1View ����

void CMy0316����ʵ��_1View::OnDraw(CDC* pDC)
{
	CMy0316����ʵ��_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ��������
	pDC->Rectangle(pDoc->cr);
}


// CMy0316����ʵ��_1View ���

#ifdef _DEBUG
void CMy0316����ʵ��_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0316����ʵ��_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0316����ʵ��_1Doc* CMy0316����ʵ��_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0316����ʵ��_1Doc)));
	return (CMy0316����ʵ��_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0316����ʵ��_1View ��Ϣ�������


//void CMy0316����ʵ��_1View::OnMouseMove(UINT nFlags, CPoint point)
//{
//	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
//	CMy0316����ʵ��_1Doc* pDoc = GetDocument();
//	CClientDC dc(this);
//	if (nFlags&MK_LBUTTON)
//	{
//		pDoc->cr.top = point.x;
//		pDoc->cr.left = point.y;
//	}
//	else
//	{
//		pDoc->cr.bottom = point.x;
//		pDoc->cr.right = point.y;
//		
//	}
//	dc.Rectangle(pDoc->cr);
//	Invalidate();
//	CView::OnMouseMove(nFlags, point);
//}


//void CMy0316����ʵ��_1View::OnLButtonDown(UINT nFlags, CPoint point)
//{
//	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
//	CRect c1;
//	CClientDC dc(this);
//	this->GetClientRect(&c1);
//	CMy0316����ʵ��_1Doc* pDoc = GetDocument();
//	pDoc->cr.left = point.x;
//	pDoc->cr.top = point.y;
//	CView::OnLButtonDown(nFlags, point);
//}


//void CMy0316����ʵ��_1View::OnLButtonUp(UINT nFlags, CPoint point)
//{
//	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
//	CRect c2;
//	CClientDC dc(this);
//	this->GetClientRect(&c2);
//	CMy0316����ʵ��_1Doc* pDoc = GetDocument();
//	pDoc->cr.right = point.x;
//	pDoc->cr.bottom = point.y;
//	CView::OnLButtonUp(nFlags, point);
//}


void CMy0316����ʵ��_1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CMy0316����ʵ��_1Doc* pDoc = GetDocument();
	if (nFlags&MK_LBUTTON)
	{
		CString s;
		s.Format(_T("%d   %d"), point.x, point.y);
		dc.TextOutW(200, 200, s);
	}
	CView::OnMouseMove(nFlags, point);
}


void CMy0316����ʵ��_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CMy0316����ʵ��_1Doc* pDoc = GetDocument();
	pDoc->cr.left = point.x;
	pDoc->cr.top = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CMy0316����ʵ��_1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy0316����ʵ��_1Doc* pDoc = GetDocument();
	pDoc->cr.right = point.x;
	pDoc->cr.bottom = point.y;
	Invalidate();
	CView::OnLButtonUp(nFlags, point);
}
