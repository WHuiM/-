
// 0303����ʵ��.4View.cpp : CMy0303����ʵ��4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0303����ʵ��.4.h"
#endif

#include "0303����ʵ��.4Doc.h"
#include "0303����ʵ��.4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0303����ʵ��4View

IMPLEMENT_DYNCREATE(CMy0303����ʵ��4View, CView)

BEGIN_MESSAGE_MAP(CMy0303����ʵ��4View, CView)
END_MESSAGE_MAP()

// CMy0303����ʵ��4View ����/����

CMy0303����ʵ��4View::CMy0303����ʵ��4View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0303����ʵ��4View::~CMy0303����ʵ��4View()
{
}

BOOL CMy0303����ʵ��4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0303����ʵ��4View ����

void CMy0303����ʵ��4View::OnDraw(CDC* pDC)
{
	CMy0303����ʵ��4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CRect cr;
	this->GetClientRect(&cr);
	pDC->Ellipse(cr);
	CBrush  newpen(RGB(200, 150, 200));
	CBrush *oldpen = pDC->SelectObject(&newpen);
	pDC->Ellipse(cr);
	pDC->SelectObject(oldpen);

}


// CMy0303����ʵ��4View ���

#ifdef _DEBUG
void CMy0303����ʵ��4View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0303����ʵ��4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0303����ʵ��4Doc* CMy0303����ʵ��4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0303����ʵ��4Doc)));
	return (CMy0303����ʵ��4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0303����ʵ��4View ��Ϣ�������
