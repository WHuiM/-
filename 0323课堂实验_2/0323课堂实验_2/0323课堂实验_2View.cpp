
// 0323����ʵ��_2View.cpp : CMy0323����ʵ��_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0323����ʵ��_2.h"
#endif

#include "0323����ʵ��_2Doc.h"
#include "0323����ʵ��_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0323����ʵ��_2View

IMPLEMENT_DYNCREATE(CMy0323����ʵ��_2View, CView)

BEGIN_MESSAGE_MAP(CMy0323����ʵ��_2View, CView)
	ON_COMMAND(ID_DIFFERENTCOLOR, &CMy0323����ʵ��_2View::OnDifferentcolor)
END_MESSAGE_MAP()

// CMy0323����ʵ��_2View ����/����

CMy0323����ʵ��_2View::CMy0323����ʵ��_2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0323����ʵ��_2View::~CMy0323����ʵ��_2View()
{
}

BOOL CMy0323����ʵ��_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0323����ʵ��_2View ����

void CMy0323����ʵ��_2View::OnDraw(CDC* /*pDC*/)
{
	CMy0323����ʵ��_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy0323����ʵ��_2View ���

#ifdef _DEBUG
void CMy0323����ʵ��_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0323����ʵ��_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0323����ʵ��_2Doc* CMy0323����ʵ��_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0323����ʵ��_2Doc)));
	return (CMy0323����ʵ��_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0323����ʵ��_2View ��Ϣ�������


void CMy0323����ʵ��_2View::OnDifferentcolor()
{
	// TODO: �ڴ���������������
	int r, a, b,l,m,n;
	l = 200; m = 256; n = 256;
	CClientDC dc(this);//��ʾ�뾶�����Բ
	CRect cr;
	this->GetClientRect(&cr);
	if (cr.bottom - cr.top > cr.right - cr.left)
		r = (cr.right - cr.left) / 2;
	else
		r = (cr.bottom + cr.top) / 2;
	a = cr.right - cr.left;
	b = cr.bottom - cr.top;
	for (int i = 0; i < 15; i++)
	{
		if (r > 0)
		{
			CPen NewPen(PS_SOLID, 2, RGB(l, m, n)), *p01dPen;
			p01dPen = dc.SelectObject(&NewPen);
			dc.Ellipse(a / 2 - r, b / 2 - r, a / 2 + r, b / 2 + r);
			dc.SelectObject(p01dPen);
			NewPen.DeleteObject();
			r -= 20;
			l -= 20;
			m -= 20;
			n -= 20;
			
			

		}

	}
}
