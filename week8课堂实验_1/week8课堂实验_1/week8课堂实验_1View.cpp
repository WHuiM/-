
// week8����ʵ��_1View.cpp : Cweek8����ʵ��_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week8����ʵ��_1.h"
#endif

#include "week8����ʵ��_1Doc.h"
#include "week8����ʵ��_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek8����ʵ��_1View

IMPLEMENT_DYNCREATE(Cweek8����ʵ��_1View, CView)

BEGIN_MESSAGE_MAP(Cweek8����ʵ��_1View, CView)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// Cweek8����ʵ��_1View ����/����

Cweek8����ʵ��_1View::Cweek8����ʵ��_1View()
{
	// TODO: �ڴ˴���ӹ������

}

Cweek8����ʵ��_1View::~Cweek8����ʵ��_1View()
{
}

BOOL Cweek8����ʵ��_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek8����ʵ��_1View ����

void Cweek8����ʵ��_1View::OnDraw(CDC* /*pDC*/)
{
	Cweek8����ʵ��_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek8����ʵ��_1View ���

#ifdef _DEBUG
void Cweek8����ʵ��_1View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek8����ʵ��_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek8����ʵ��_1Doc* Cweek8����ʵ��_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek8����ʵ��_1Doc)));
	return (Cweek8����ʵ��_1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek8����ʵ��_1View ��Ϣ�������


void Cweek8����ʵ��_1View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		CString s = cfd.GetFileName();
		GetDC()->TextOutW(200, 200, s);
	}
	CView::OnLButtonDblClk(nFlags, point);
}
