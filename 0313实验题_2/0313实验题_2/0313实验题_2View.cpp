
// 0313ʵ����_2View.cpp : CMy0313ʵ����_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0313ʵ����_2.h"
#endif

#include "0313ʵ����_2Doc.h"
#include "0313ʵ����_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0313ʵ����_2View

IMPLEMENT_DYNCREATE(CMy0313ʵ����_2View, CView)

BEGIN_MESSAGE_MAP(CMy0313ʵ����_2View, CView)
END_MESSAGE_MAP()

// CMy0313ʵ����_2View ����/����

CMy0313ʵ����_2View::CMy0313ʵ����_2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0313ʵ����_2View::~CMy0313ʵ����_2View()
{
}

BOOL CMy0313ʵ����_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0313ʵ����_2View ����

void CMy0313ʵ����_2View::OnDraw(CDC* pDC)
{
	CMy0313ʵ����_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->TextOutW(200, 200, pDoc->s);
	pDoc->s.Format(_T("%d"), pDoc->A);
	pDC->TextOutW(200, 250, pDoc->s);
}


// CMy0313ʵ����_2View ���

#ifdef _DEBUG
void CMy0313ʵ����_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0313ʵ����_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0313ʵ����_2Doc* CMy0313ʵ����_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0313ʵ����_2Doc)));
	return (CMy0313ʵ����_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0313ʵ����_2View ��Ϣ�������
