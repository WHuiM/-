
// 0317ʵ��TestView.cpp : CMy0317ʵ��TestView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0317ʵ��Test.h"
#endif

#include "0317ʵ��TestDoc.h"
#include "0317ʵ��TestView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0317ʵ��TestView

IMPLEMENT_DYNCREATE(CMy0317ʵ��TestView, CView)

BEGIN_MESSAGE_MAP(CMy0317ʵ��TestView, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMy0317ʵ��TestView ����/����

CMy0317ʵ��TestView::CMy0317ʵ��TestView()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0317ʵ��TestView::~CMy0317ʵ��TestView()
{
}

BOOL CMy0317ʵ��TestView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0317ʵ��TestView ����

void CMy0317ʵ��TestView::OnDraw(CDC* pDC)
{
	CMy0317ʵ��TestDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s;
	s.Format(_T("mousemove����������%d"), pDoc->a);
	pDC->TextOutW(200, 200, s);
	s.Format(_T("�����ƶ����룺%d"), (pDoc->x2.x - pDoc->x1.x));
	pDC->TextOutW(200, 300, s);
}


// CMy0317ʵ��TestView ���

#ifdef _DEBUG
void CMy0317ʵ��TestView::AssertValid() const
{
	CView::AssertValid();
}

void CMy0317ʵ��TestView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0317ʵ��TestDoc* CMy0317ʵ��TestView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0317ʵ��TestDoc)));
	return (CMy0317ʵ��TestDoc*)m_pDocument;
}
#endif //_DEBUG


// CMy0317ʵ��TestView ��Ϣ�������


void CMy0317ʵ��TestView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy0317ʵ��TestDoc* pDoc = GetDocument();
	pDoc->x1.x = point.x;
	pDoc->x1.y = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CMy0317ʵ��TestView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy0317ʵ��TestDoc* pDoc = GetDocument();
	pDoc->x2.x = point.x;
	pDoc->x2.y = point.y;
	CView::OnLButtonUp(nFlags, point);
}


void CMy0317ʵ��TestView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy0317ʵ��TestDoc* pDoc = GetDocument();
	if (nFlags&MK_LBUTTON)
	{
		pDoc->a += 1;
	}
	Invalidate();
	CView::OnMouseMove(nFlags, point);
}
