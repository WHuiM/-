
// 0324ʵ����_3View.cpp : CMy0324ʵ����_3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0324ʵ����_3.h"
#endif

#include "0324ʵ����_3Doc.h"
#include "0324ʵ����_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0324ʵ����_3View

IMPLEMENT_DYNCREATE(CMy0324ʵ����_3View, CView)

BEGIN_MESSAGE_MAP(CMy0324ʵ����_3View, CView)
	ON_COMMAND(ID_DRAWLINE, &CMy0324ʵ����_3View::OnDrawline)
//	ON_WM_MOUSEMOVE()
ON_WM_LBUTTONDOWN()
ON_WM_LBUTTONUP()
ON_COMMAND(ID_DRAWRECT, &CMy0324ʵ����_3View::OnDrawrect)
ON_COMMAND(ID_DRAWCIRCLE, &CMy0324ʵ����_3View::OnDrawcircle)
END_MESSAGE_MAP()

// CMy0324ʵ����_3View ����/����

CMy0324ʵ����_3View::CMy0324ʵ����_3View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0324ʵ����_3View::~CMy0324ʵ����_3View()
{
	a.x = 0; a.y = 0;
	b.x = 0; b.y = 0;
	flag = 0;
}

BOOL CMy0324ʵ����_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0324ʵ����_3View ����

void CMy0324ʵ����_3View::OnDraw(CDC* pDC)
{
	CMy0324ʵ����_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	if (flag == 1)
	{
		pDC->MoveTo(a);
		pDC->LineTo(b);
	}
	if (flag == 2)
	{
		
		pDC->Rectangle(a.x, a.y, b.x,b.y);
	}
	if (flag == 3)
	{
		
		pDC->Ellipse(a.x,a.y, b.x,b.y);

	}
	
}


// CMy0324ʵ����_3View ���

#ifdef _DEBUG
void CMy0324ʵ����_3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0324ʵ����_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0324ʵ����_3Doc* CMy0324ʵ����_3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0324ʵ����_3Doc)));
	return (CMy0324ʵ����_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0324ʵ����_3View ��Ϣ�������


void CMy0324ʵ����_3View::OnDrawline()
{
	// TODO: �ڴ���������������
	flag = 1;

}


void CMy0324ʵ����_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CRect c1;
	this->GetClientRect(&c1);
	a.x = point.x;
	a.y = point.y;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}


void CMy0324ʵ����_3View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CRect c2;
	this->GetClientRect(&c2);
	b.x = point.x;
	b.y = point.y;
	Invalidate();
	CView::OnLButtonUp(nFlags, point);
}


void CMy0324ʵ����_3View::OnDrawrect()
{
	// TODO: �ڴ���������������
	
	flag = 2;
	
}


void CMy0324ʵ����_3View::OnDrawcircle()
{
	// TODO: �ڴ���������������
	flag = 3;
	
}
