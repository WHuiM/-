
// week8ʵ��Test_2.3View.cpp : Cweek8ʵ��Test_23View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week8ʵ��Test_2.3.h"
#endif

#include "week8ʵ��Test_2.3Doc.h"
#include "week8ʵ��Test_2.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek8ʵ��Test_23View

IMPLEMENT_DYNCREATE(Cweek8ʵ��Test_23View, CView)

BEGIN_MESSAGE_MAP(Cweek8ʵ��Test_23View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cweek8ʵ��Test_23View ����/����

Cweek8ʵ��Test_23View::Cweek8ʵ��Test_23View()
{
	// TODO: �ڴ˴���ӹ������
	cr.SetRect(300, 200, 650, 300);
	cr1.SetRect(600, 400, 850, 500);
}

Cweek8ʵ��Test_23View::~Cweek8ʵ��Test_23View()
{
}

BOOL Cweek8ʵ��Test_23View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek8ʵ��Test_23View ����

void Cweek8ʵ��Test_23View::OnDraw(CDC* pDC)
{
	Cweek8ʵ��Test_23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	
	pDC->Ellipse(cr);
	pDC->Ellipse(cr1);
}


// Cweek8ʵ��Test_23View ���

#ifdef _DEBUG
void Cweek8ʵ��Test_23View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek8ʵ��Test_23View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek8ʵ��Test_23Doc* Cweek8ʵ��Test_23View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek8ʵ��Test_23Doc)));
	return (Cweek8ʵ��Test_23Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek8ʵ��Test_23View ��Ϣ�������


void Cweek8ʵ��Test_23View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	if (cr.PtInRect(point))
	{
		CPen newpen(PS_DASH, 1, RGB(0, 0, 0));
		CPen *oldpen = dc.SelectObject(&newpen);
		dc.Rectangle(cr);
		dc.SelectObject(oldpen);
		dc.Ellipse(cr);
	}
	if (cr1.PtInRect(point))
	{
		CPen newpen(PS_DASH, 1, RGB(0, 0, 0));
		CPen *oldpen = dc.SelectObject(&newpen);
		dc.Rectangle(cr1);
		dc.SelectObject(oldpen);
		dc.Ellipse(cr1);
	}
	CView::OnLButtonDown(nFlags, point);
}
