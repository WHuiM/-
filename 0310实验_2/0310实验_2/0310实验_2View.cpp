
// 0310ʵ��_2View.cpp : CMy0310ʵ��_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0310ʵ��_2.h"
#endif

#include "0310ʵ��_2Doc.h"
#include "0310ʵ��_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0310ʵ��_2View

IMPLEMENT_DYNCREATE(CMy0310ʵ��_2View, CView)

BEGIN_MESSAGE_MAP(CMy0310ʵ��_2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy0310ʵ��_2View ����/����

CMy0310ʵ��_2View::CMy0310ʵ��_2View()
{
	// TODO: �ڴ˴���ӹ������
	c.SetSize(256);
}

CMy0310ʵ��_2View::~CMy0310ʵ��_2View()
{
}

BOOL CMy0310ʵ��_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0310ʵ��_2View ����

void CMy0310ʵ��_2View::OnDraw(CDC* pDC)
{
	CMy0310ʵ��_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	for (int i = 0; i < c.GetSize(); i++)
	{
		pDC->Ellipse(c.GetAt(i));
	}
}


// CMy0310ʵ��_2View ���

#ifdef _DEBUG
void CMy0310ʵ��_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0310ʵ��_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0310ʵ��_2Doc* CMy0310ʵ��_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0310ʵ��_2Doc)));
	return (CMy0310ʵ��_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0310ʵ��_2View ��Ϣ�������


void CMy0310ʵ��_2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect cr(point.x - rand() % 75 + 10, point.y - rand() % 75 + 10, point.x + rand() % 75 + 10, point.y + rand() % 75 + 10);
	c.Add(cr);
	this->Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
