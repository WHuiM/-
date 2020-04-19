
// week7_1View.cpp : Cweek7_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week7_1.h"
#endif

#include "week7_1Doc.h"
#include "week7_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek7_1View

IMPLEMENT_DYNCREATE(Cweek7_1View, CView)

BEGIN_MESSAGE_MAP(Cweek7_1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// Cweek7_1View ����/����

Cweek7_1View::Cweek7_1View()
{
	// TODO: �ڴ˴���ӹ������
	a.x = a.y =b.x=b.y= 0;
	x1 =x2=y1=y2= 0;
	flag = 0;
}

Cweek7_1View::~Cweek7_1View()
{
}

BOOL Cweek7_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek7_1View ����

void Cweek7_1View::OnDraw(CDC* pDC)
{
	Cweek7_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	
	CBrush newpen(RGB(250, 150, 200));
	CBrush *oldpen = pDC->SelectObject(&newpen);
	pDC->Rectangle(pDoc->ce);
	pDC->SelectObject(oldpen);
}


// Cweek7_1View ���

#ifdef _DEBUG
void Cweek7_1View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek7_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek7_1Doc* Cweek7_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek7_1Doc)));
	return (Cweek7_1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek7_1View ��Ϣ�������


void Cweek7_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cweek7_1Doc* pDoc = GetDocument();
	if (pDoc->ce.PtInRect(point))
	{
		a = point;
		x1 = point.x - pDoc->ce.left;
		y1= point.y - pDoc->ce.top;
		x2 = pDoc->ce.right - point.x;
		y2 = pDoc->ce.bottom - point.y;
		flag = 1;
	}
	

	CView::OnLButtonDown(nFlags, point);
}


void Cweek7_1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cweek7_1Doc* pDoc = GetDocument();
	flag = 0;
	b = point;
	CView::OnLButtonUp(nFlags, point);
}


void Cweek7_1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cweek7_1Doc* pDoc = GetDocument();
	if (flag == 1)
	{
		pDoc->ce.left = point.x -x1;
		pDoc->ce.top = point .y-y1;
		pDoc->ce.right = point.x + x2;
		pDoc->ce.bottom = point.y + y2;
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}
