
// 0225Test.3View.cpp : CMy0225Test3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0225Test.3.h"
#endif

#include "0225Test.3Doc.h"
#include "0225Test.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0225Test3View

IMPLEMENT_DYNCREATE(CMy0225Test3View, CView)

BEGIN_MESSAGE_MAP(CMy0225Test3View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy0225Test3View ����/����

CMy0225Test3View::CMy0225Test3View()
{
	// TODO: �ڴ˴���ӹ������
	ss = _T("Τ��÷��ѧ���ǣ�");
}

CMy0225Test3View::~CMy0225Test3View()
{
}

BOOL CMy0225Test3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0225Test3View ����

void CMy0225Test3View::OnDraw(CDC* /*pDC*/)
{
	CMy0225Test3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy0225Test3View ���

#ifdef _DEBUG
void CMy0225Test3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0225Test3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0225Test3Doc* CMy0225Test3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0225Test3Doc)));
	return (CMy0225Test3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0225Test3View ��Ϣ�������


void CMy0225Test3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy0225Test3Doc* pDoc = GetDocument();
	CString s1;
	s1 = ss + pDoc->s;
	CClientDC dc(this);
	dc.TextOutW(200, 200, s1);
	CView::OnLButtonDown(nFlags, point);
}
