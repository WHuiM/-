
// 0225Test.1View.cpp : CMy0225Test1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0225Test.1.h"
#endif

#include "0225Test.1Doc.h"
#include "0225Test.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0225Test1View

IMPLEMENT_DYNCREATE(CMy0225Test1View, CView)

BEGIN_MESSAGE_MAP(CMy0225Test1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy0225Test1View ����/����

CMy0225Test1View::CMy0225Test1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0225Test1View::~CMy0225Test1View()
{
}

BOOL CMy0225Test1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0225Test1View ����

void CMy0225Test1View::OnDraw(CDC* pDC)
{
	CMy0225Test1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	
}


// CMy0225Test1View ���

#ifdef _DEBUG
void CMy0225Test1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0225Test1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0225Test1Doc* CMy0225Test1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0225Test1Doc)));
	return (CMy0225Test1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0225Test1View ��Ϣ�������


void CMy0225Test1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy0225Test1Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString s = pDoc->ca.GetAt(0);
	dc.TextOutW(200, 200, s);
	CView::OnLButtonDown(nFlags, point);
}
