
// 0310Test_2View.cpp : CMy0310Test_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0310Test_2.h"
#endif

#include "0310Test_2Doc.h"
#include "0310Test_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0310Test_2View

IMPLEMENT_DYNCREATE(CMy0310Test_2View, CView)

BEGIN_MESSAGE_MAP(CMy0310Test_2View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMy0310Test_2View ����/����

CMy0310Test_2View::CMy0310Test_2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0310Test_2View::~CMy0310Test_2View()
{
}

BOOL CMy0310Test_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0310Test_2View ����

void CMy0310Test_2View::OnDraw(CDC* /*pDC*/)
{
	CMy0310Test_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy0310Test_2View ���

#ifdef _DEBUG
void CMy0310Test_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0310Test_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0310Test_2Doc* CMy0310Test_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0310Test_2Doc)));
	return (CMy0310Test_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0310Test_2View ��Ϣ�������


void CMy0310Test_2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s = _T("�����������");
	CClientDC dc(this);
	dc.TextOutW(200, 200, s);
	CView::OnLButtonDown(nFlags, point);
}


void CMy0310Test_2View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s = _T("�������̧��");
	CClientDC dc(this);
	dc.TextOutW(200, 400, s);
	CView::OnLButtonUp(nFlags, point);
	CView::OnLButtonUp(nFlags, point);
}
