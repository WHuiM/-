
// 0310Test_3View.cpp : CMy0310Test_3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0310Test_3.h"
#endif

#include "0310Test_3Doc.h"
#include "0310Test_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0310Test_3View

IMPLEMENT_DYNCREATE(CMy0310Test_3View, CView)

BEGIN_MESSAGE_MAP(CMy0310Test_3View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy0310Test_3View ����/����

CMy0310Test_3View::CMy0310Test_3View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0310Test_3View::~CMy0310Test_3View()
{
}

BOOL CMy0310Test_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0310Test_3View ����

void CMy0310Test_3View::OnDraw(CDC* /*pDC*/)
{
	CMy0310Test_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy0310Test_3View ���

#ifdef _DEBUG
void CMy0310Test_3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0310Test_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0310Test_3Doc* CMy0310Test_3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0310Test_3Doc)));
	return (CMy0310Test_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0310Test_3View ��Ϣ�������


void CMy0310Test_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy0310Test_3Doc* pDoc = GetDocument();
	CString s,s1;
	CClientDC dc(this);
	s = _T("A+B=");
	s1.Format(_T("%d"), pDoc->A + pDoc->B);
	dc.TextOutW(200, 200, s+s1);
	CView::OnLButtonDown(nFlags, point);
}
