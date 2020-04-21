
// week7_3View.cpp : Cweek7_3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week7_3.h"
#endif

#include "week7_3Doc.h"
#include "week7_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek7_3View

IMPLEMENT_DYNCREATE(Cweek7_3View, CView)

BEGIN_MESSAGE_MAP(Cweek7_3View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
	ON_WM_TIMER()
END_MESSAGE_MAP()

// Cweek7_3View ����/����

Cweek7_3View::Cweek7_3View()
{
	// TODO: �ڴ˴���ӹ������
	cr.left = 100; cr.top = 200;
	cr.right = 150, cr.bottom = 250;
	flag = 1;
	sw = 0;
}

Cweek7_3View::~Cweek7_3View()
{
}

BOOL Cweek7_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek7_3View ����

void Cweek7_3View::OnDraw(CDC* pDC)
{
	Cweek7_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	
		SetTimer(1, 200, NULL);
	
	CBrush newpen(RGB(250,100,200));
	CBrush *oldpen = pDC->SelectObject(&newpen);
	pDC->Ellipse(cr);
	pDC->SelectObject(oldpen);
}


// Cweek7_3View ���

#ifdef _DEBUG
void Cweek7_3View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek7_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek7_3Doc* Cweek7_3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek7_3Doc)));
	return (Cweek7_3Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek7_3View ��Ϣ�������


void Cweek7_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CRect ca;
	GetClientRect(&ca);
	sw = 1;
	if (cr.right == ca.right)
	{
		flag = 0;
	}
	
	CView::OnLButtonDown(nFlags, point);
}


void Cweek7_3View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	sw = 0;
	CView::OnLButtonDblClk(nFlags, point);
}


void Cweek7_3View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CClientDC dc(this);
	CRect cc;
	GetClientRect(&cc);
	if (sw == 1)
	{
		if (cr.right >= cc.right) flag = 0;
		if (cr.left == cc.left) flag = 1;
		if (flag == 1 )
		{
			cr.left += 10;
			cr.right += 10;
			
		}
		if (flag == 0)
		{
			cr.left -= 10;
			cr.right -= 10;
		}
		
	}
	Invalidate();
	CView::OnTimer(nIDEvent);
}
