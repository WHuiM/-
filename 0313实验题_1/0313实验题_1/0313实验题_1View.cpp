
// 0313ʵ����_1View.cpp : CMy0313ʵ����_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0313ʵ����_1.h"
#endif

#include "0313ʵ����_1Doc.h"
#include "0313ʵ����_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0313ʵ����_1View

IMPLEMENT_DYNCREATE(CMy0313ʵ����_1View, CView)

BEGIN_MESSAGE_MAP(CMy0313ʵ����_1View, CView)
END_MESSAGE_MAP()

// CMy0313ʵ����_1View ����/����

CMy0313ʵ����_1View::CMy0313ʵ����_1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0313ʵ����_1View::~CMy0313ʵ����_1View()
{
}

BOOL CMy0313ʵ����_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0313ʵ����_1View ����

void CMy0313ʵ����_1View::OnDraw(CDC* pDC)
{
	CMy0313ʵ����_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s=_T("����Τ��÷");
	pDC->TextOutW(200, 200, s);
	int a = 2020;
	s.Format(_T("%d"), a);
	pDC->TextOutW(200, 300, s);

}


// CMy0313ʵ����_1View ���

#ifdef _DEBUG
void CMy0313ʵ����_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0313ʵ����_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0313ʵ����_1Doc* CMy0313ʵ����_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0313ʵ����_1Doc)));
	return (CMy0313ʵ����_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0313ʵ����_1View ��Ϣ�������
