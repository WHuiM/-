
// 0317ʵ��Test_3View.cpp : CMy0317ʵ��Test_3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0317ʵ��Test_3.h"
#endif

#include "0317ʵ��Test_3Doc.h"
#include "0317ʵ��Test_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0317ʵ��Test_3View

IMPLEMENT_DYNCREATE(CMy0317ʵ��Test_3View, CView)

BEGIN_MESSAGE_MAP(CMy0317ʵ��Test_3View, CView)
END_MESSAGE_MAP()

// CMy0317ʵ��Test_3View ����/����

CMy0317ʵ��Test_3View::CMy0317ʵ��Test_3View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0317ʵ��Test_3View::~CMy0317ʵ��Test_3View()
{
}

BOOL CMy0317ʵ��Test_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0317ʵ��Test_3View ����

void CMy0317ʵ��Test_3View::OnDraw(CDC* /*pDC*/)
{
	CMy0317ʵ��Test_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy0317ʵ��Test_3View ���

#ifdef _DEBUG
void CMy0317ʵ��Test_3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0317ʵ��Test_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0317ʵ��Test_3Doc* CMy0317ʵ��Test_3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0317ʵ��Test_3Doc)));
	return (CMy0317ʵ��Test_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0317ʵ��Test_3View ��Ϣ�������
