
// week8ʵ��Test_2.4View.cpp : Cweek8ʵ��Test_24View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week8ʵ��Test_2.4.h"
#endif

#include "week8ʵ��Test_2.4Doc.h"
#include "week8ʵ��Test_2.4View.h"
#include "MYDIALOG.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek8ʵ��Test_24View

IMPLEMENT_DYNCREATE(Cweek8ʵ��Test_24View, CView)

BEGIN_MESSAGE_MAP(Cweek8ʵ��Test_24View, CView)
	ON_COMMAND(ID_POP_DIALOG, &Cweek8ʵ��Test_24View::OnPopDialog)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cweek8ʵ��Test_24View ����/����

Cweek8ʵ��Test_24View::Cweek8ʵ��Test_24View()
{
	// TODO: �ڴ˴���ӹ������
	cr.SetRect(300, 200, 650, 300);
	cr1.SetRect(600, 400, 850, 500);
	r = g = b = 0;
	
}

Cweek8ʵ��Test_24View::~Cweek8ʵ��Test_24View()
{
}

BOOL Cweek8ʵ��Test_24View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek8ʵ��Test_24View ����

void Cweek8ʵ��Test_24View::OnDraw(CDC* pDC)
{
	Cweek8ʵ��Test_24Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Ellipse(cr);
	pDC->Ellipse(cr1);
}


// Cweek8ʵ��Test_24View ���

#ifdef _DEBUG
void Cweek8ʵ��Test_24View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek8ʵ��Test_24View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek8ʵ��Test_24Doc* Cweek8ʵ��Test_24View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek8ʵ��Test_24Doc)));
	return (Cweek8ʵ��Test_24Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek8ʵ��Test_24View ��Ϣ�������


void Cweek8ʵ��Test_24View::OnPopDialog()
{
	// TODO: �ڴ���������������
	MYDIALOG dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		UpdateData(true);
		r = dlg.r;
		g = dlg.g;
		b = dlg.b;
		
	}
}


void Cweek8ʵ��Test_24View::OnLButtonDown(UINT nFlags, CPoint point)
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
		CBrush newp(RGB(r, g, b));
		CBrush *oldp = dc.SelectObject(&newp);
		dc.Ellipse(cr);
		dc.SelectObject(oldp);
	}
	if (cr1.PtInRect(point))
	{
		CPen newpen(PS_DASH, 1, RGB(0, 0, 0));
		CPen *oldpen = dc.SelectObject(&newpen);
		dc.Rectangle(cr1);
		dc.SelectObject(oldpen);
		dc.Ellipse(cr1);
		CBrush newp(RGB(r, g, b));
		CBrush *oldp = dc.SelectObject(&newp);
		dc.Ellipse(cr1);
		dc.SelectObject(oldp);
	}
	CView::OnLButtonDown(nFlags, point);
}
