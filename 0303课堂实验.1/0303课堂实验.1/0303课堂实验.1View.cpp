
// 0303����ʵ��.1View.cpp : CMy0303����ʵ��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0303����ʵ��.1.h"
#endif

#include "0303����ʵ��.1Doc.h"
#include "0303����ʵ��.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0303����ʵ��1View

IMPLEMENT_DYNCREATE(CMy0303����ʵ��1View, CView)

BEGIN_MESSAGE_MAP(CMy0303����ʵ��1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy0303����ʵ��1View ����/����

CMy0303����ʵ��1View::CMy0303����ʵ��1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0303����ʵ��1View::~CMy0303����ʵ��1View()
{
}

BOOL CMy0303����ʵ��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0303����ʵ��1View ����

void CMy0303����ʵ��1View::OnDraw(CDC* /*pDC*/)
{
	CMy0303����ʵ��1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy0303����ʵ��1View ���

#ifdef _DEBUG
void CMy0303����ʵ��1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0303����ʵ��1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0303����ʵ��1Doc* CMy0303����ʵ��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0303����ʵ��1Doc)));
	return (CMy0303����ʵ��1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0303����ʵ��1View ��Ϣ�������


void CMy0303����ʵ��1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	int r = rand() % (101 - 1) + 1;
	dc.Ellipse(point.x - r, point.y - r, point.x + r, point.y + r);
	CView::OnLButtonDown(nFlags, point);
}
