
// week8ʵ��Test_2.1View.cpp : Cweek8ʵ��Test_21View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week8ʵ��Test_2.1.h"
#endif

#include "week8ʵ��Test_2.1Doc.h"
#include "week8ʵ��Test_2.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek8ʵ��Test_21View

IMPLEMENT_DYNCREATE(Cweek8ʵ��Test_21View, CView)

BEGIN_MESSAGE_MAP(Cweek8ʵ��Test_21View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Cweek8ʵ��Test_21View ����/����

Cweek8ʵ��Test_21View::Cweek8ʵ��Test_21View()
{
	// TODO: �ڴ˴���ӹ������
	a.x = a.y = b.x = b.y = 0;
	flag = 0;
}

Cweek8ʵ��Test_21View::~Cweek8ʵ��Test_21View()
{
}

BOOL Cweek8ʵ��Test_21View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek8ʵ��Test_21View ����

void Cweek8ʵ��Test_21View::OnDraw(CDC* pDC)
{
	Cweek8ʵ��Test_21Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CRect cr(a, b);
	pDC->Ellipse(cr);
}


// Cweek8ʵ��Test_21View ���

#ifdef _DEBUG
void Cweek8ʵ��Test_21View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek8ʵ��Test_21View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek8ʵ��Test_21Doc* Cweek8ʵ��Test_21View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek8ʵ��Test_21Doc)));
	return (Cweek8ʵ��Test_21Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek8ʵ��Test_21View ��Ϣ�������


void Cweek8ʵ��Test_21View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	a = point;
	flag = 1;
	
	CView::OnLButtonDown(nFlags, point);
}


void Cweek8ʵ��Test_21View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (flag == 1)
	{
		b = point;
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}


void Cweek8ʵ��Test_21View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	b = point;
	flag = 0;
	Invalidate();
	CView::OnLButtonUp(nFlags, point);
}
