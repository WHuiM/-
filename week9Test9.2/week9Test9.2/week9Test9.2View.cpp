
// week9Test9.2View.cpp : Cweek9Test92View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week9Test9.2.h"
#endif

#include "week9Test9.2Doc.h"
#include "week9Test9.2View.h"
#include<afxtempl.h>
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek9Test92View

IMPLEMENT_DYNCREATE(Cweek9Test92View, CView)

BEGIN_MESSAGE_MAP(Cweek9Test92View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// Cweek9Test92View ����/����

Cweek9Test92View::Cweek9Test92View()
{
	// TODO: �ڴ˴���ӹ������
	
	a.x = a.y = 0;
	flag = 0;
	cr.bottom = cr.right = cr.left = cr.top = 0;
}

Cweek9Test92View::~Cweek9Test92View()
{
}

BOOL Cweek9Test92View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek9Test92View ����

void Cweek9Test92View::OnDraw(CDC* pDC)
{
	Cweek9Test92Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	for (int i = 0; i < pDoc->ca.GetSize(); i++)
	{
		pDC->Ellipse(pDoc->ca.GetAt(i));
	}
	pDC->Ellipse(cr);
}


// Cweek9Test92View ���

#ifdef _DEBUG
void Cweek9Test92View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek9Test92View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek9Test92Doc* Cweek9Test92View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek9Test92Doc)));
	return (Cweek9Test92Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek9Test92View ��Ϣ�������


void Cweek9Test92View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	cr.left = point.x;
	cr.top = point.y;
	a = point;
	flag = 1;
	CView::OnLButtonDown(nFlags, point);
}


void Cweek9Test92View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cweek9Test92Doc* pDoc = GetDocument();
	cr.bottom = point.y;
	cr.right = point.x;
	flag = 0;
	pDoc->ca.Add(cr);
	CView::OnLButtonUp(nFlags, point);
}


void Cweek9Test92View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	if (flag == 1)
	{
		cr.left = a.x;
		cr.top = a.y;
		cr.right = point.x;
		cr.bottom = point.y;
		InvalidateRect(&cr);
	}
	
		
	
	CView::OnMouseMove(nFlags, point);
}
