
// 0303����ʵ��.3View.cpp : CMy0303����ʵ��3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0303����ʵ��.3.h"
#endif

#include "0303����ʵ��.3Doc.h"
#include "0303����ʵ��.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0303����ʵ��3View

IMPLEMENT_DYNCREATE(CMy0303����ʵ��3View, CView)

BEGIN_MESSAGE_MAP(CMy0303����ʵ��3View, CView)
END_MESSAGE_MAP()

// CMy0303����ʵ��3View ����/����

CMy0303����ʵ��3View::CMy0303����ʵ��3View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0303����ʵ��3View::~CMy0303����ʵ��3View()
{
}

BOOL CMy0303����ʵ��3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0303����ʵ��3View ����

void CMy0303����ʵ��3View::OnDraw(CDC* pDC)
{
	CMy0303����ʵ��3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CRect cr;
	this->GetClientRect(&cr);
	pDC->Ellipse(cr);
	
}


// CMy0303����ʵ��3View ���

#ifdef _DEBUG
void CMy0303����ʵ��3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0303����ʵ��3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0303����ʵ��3Doc* CMy0303����ʵ��3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0303����ʵ��3Doc)));
	return (CMy0303����ʵ��3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0303����ʵ��3View ��Ϣ�������
