
// MFCTest2View.cpp : CMFCTest2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCTest2.h"
#endif

#include "MFCTest2Doc.h"
#include "MFCTest2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest2View

IMPLEMENT_DYNCREATE(CMFCTest2View, CView)

BEGIN_MESSAGE_MAP(CMFCTest2View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCTest2View ����/����

CMFCTest2View::CMFCTest2View()
{
	// TODO: �ڴ˴���ӹ������
	
}

CMFCTest2View::~CMFCTest2View()
{
	 
}

BOOL CMFCTest2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCTest2View ����

void CMFCTest2View::OnDraw(CDC* pDC)
{
	CMFCTest2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(pDoc->A);
	pDC->Rectangle(pDoc->B);
	pDC->Rectangle(pDoc->C);
}


// CMFCTest2View ���

#ifdef _DEBUG
void CMFCTest2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTest2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTest2Doc* CMFCTest2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTest2Doc)));
	return (CMFCTest2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTest2View ��Ϣ�������


void CMFCTest2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	
	
	
	
	
	//ʵ�������
	CMFCTest2Doc* pDoc = GetDocument();
	CString s;
	CClientDC dc(this);
	
	if (pDoc->A.PtInRect(point))
	{
		pDoc->a = rand() % 150;
		s.Format(_T("%d"), pDoc ->a);
		dc.TextOutW(point.x, point.y, s);
	}
	
	
	else
	{
		if (pDoc->B.PtInRect(point))
		{
			pDoc->b = rand() % 150;
			s.Format(_T("%d"), pDoc->b);
			dc.TextOutW(point.x, point.y, s);
		}
		
		else 
		{
			s.Format(_T("�����Ч"));
				dc.TextOutW(point.x, point.y, s);
		}
		
	}
		
		
		
	
	
}


void CMFCTest2View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
}


void CMFCTest2View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCTest2Doc* pDoc = GetDocument();
	CString s;
	CClientDC dc(this);
    if (pDoc->C.PtInRect(point))
	{
		s.Format(_T("%d"), pDoc->a + pDoc->b);
		dc.TextOutW(point.x, point.y, s);
	}
	CView::OnRButtonDown(nFlags, point);
}
