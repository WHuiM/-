
// usingdllView.cpp : CusingdllView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "usingdll.h"
#endif
#include"week10Test.3.h"
#include "usingdllDoc.h"
#include "usingdllView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CusingdllView

IMPLEMENT_DYNCREATE(CusingdllView, CView)

BEGIN_MESSAGE_MAP(CusingdllView, CView)
END_MESSAGE_MAP()

// CusingdllView ����/����

CusingdllView::CusingdllView()
{
	// TODO: �ڴ˴���ӹ������

}

CusingdllView::~CusingdllView()
{
}

BOOL CusingdllView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CusingdllView ����

void CusingdllView::OnDraw(CDC* pDC)
{
	CusingdllDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString ss;
	FAC f;
	ss.Format(_T("%f"), f.convert(30.0));
	pDC->TextOutW(200, 200, ss);
	CString s;
	s.Format(_T("%d"), factorial(5));
	pDC->TextOutW(200, 230, s);
}


// CusingdllView ���

#ifdef _DEBUG
void CusingdllView::AssertValid() const
{
	CView::AssertValid();
}

void CusingdllView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CusingdllDoc* CusingdllView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CusingdllDoc)));
	return (CusingdllDoc*)m_pDocument;
}
#endif //_DEBUG


// CusingdllView ��Ϣ�������
