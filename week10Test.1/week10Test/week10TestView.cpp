
// week10TestView.cpp : Cweek10TestView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week10Test.h"
#endif

#include "week10TestDoc.h"
#include "week10TestView.h"
#include"w32.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek10TestView

IMPLEMENT_DYNCREATE(Cweek10TestView, CView)

BEGIN_MESSAGE_MAP(Cweek10TestView, CView)
END_MESSAGE_MAP()

// Cweek10TestView ����/����

Cweek10TestView::Cweek10TestView()
{
	// TODO: �ڴ˴���ӹ������

}

Cweek10TestView::~Cweek10TestView()
{
}

BOOL Cweek10TestView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek10TestView ����

void Cweek10TestView::OnDraw(CDC* pDC)
{
	Cweek10TestDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s;
	T cc;
	s.Format(_T("%d"), cc.factorial(5));
	pDC->TextOutW(200, 200, s);
}


// Cweek10TestView ���

#ifdef _DEBUG
void Cweek10TestView::AssertValid() const
{
	CView::AssertValid();
}

void Cweek10TestView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek10TestDoc* Cweek10TestView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek10TestDoc)));
	return (Cweek10TestDoc*)m_pDocument;
}
#endif //_DEBUG


// Cweek10TestView ��Ϣ�������
