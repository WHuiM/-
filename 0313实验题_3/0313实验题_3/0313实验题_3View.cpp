
// 0313ʵ����_3View.cpp : CMy0313ʵ����_3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0313ʵ����_3.h"
#endif

#include "0313ʵ����_3Doc.h"
#include "0313ʵ����_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0313ʵ����_3View

IMPLEMENT_DYNCREATE(CMy0313ʵ����_3View, CView)

BEGIN_MESSAGE_MAP(CMy0313ʵ����_3View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMy0313ʵ����_3View ����/����

CMy0313ʵ����_3View::CMy0313ʵ����_3View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0313ʵ����_3View::~CMy0313ʵ����_3View()
{
}

BOOL CMy0313ʵ����_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0313ʵ����_3View ����

void CMy0313ʵ����_3View::OnDraw(CDC* /*pDC*/)
{
	CMy0313ʵ����_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy0313ʵ����_3View ���

#ifdef _DEBUG
void CMy0313ʵ����_3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0313ʵ����_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0313ʵ����_3Doc* CMy0313ʵ����_3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0313ʵ����_3Doc)));
	return (CMy0313ʵ����_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0313ʵ����_3View ��Ϣ�������


void CMy0313ʵ����_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy0313ʵ����_3Doc* pDoc = GetDocument();
	pDoc->count += 1;
	CView::OnLButtonDown(nFlags, point);
}


void CMy0313ʵ����_3View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy0313ʵ����_3Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString s;
	s.Format(_T("%d"), pDoc->count);
	dc.TextOutW(200, 200, s);
	CView::OnRButtonDown(nFlags, point);
}
