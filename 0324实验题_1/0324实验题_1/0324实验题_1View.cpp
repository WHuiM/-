
// 0324ʵ����_1View.cpp : CMy0324ʵ����_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0324ʵ����_1.h"
#endif

#include "0324ʵ����_1Doc.h"
#include "0324ʵ����_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0324ʵ����_1View

IMPLEMENT_DYNCREATE(CMy0324ʵ����_1View, CView)

BEGIN_MESSAGE_MAP(CMy0324ʵ����_1View, CView)
	ON_COMMAND(ID_SHOWNAME, &CMy0324ʵ����_1View::OnShowname)
END_MESSAGE_MAP()

// CMy0324ʵ����_1View ����/����

CMy0324ʵ����_1View::CMy0324ʵ����_1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0324ʵ����_1View::~CMy0324ʵ����_1View()
{
}

BOOL CMy0324ʵ����_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0324ʵ����_1View ����

void CMy0324ʵ����_1View::OnDraw(CDC* /*pDC*/)
{
	CMy0324ʵ����_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy0324ʵ����_1View ���

#ifdef _DEBUG
void CMy0324ʵ����_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0324ʵ����_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0324ʵ����_1Doc* CMy0324ʵ����_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0324ʵ����_1Doc)));
	return (CMy0324ʵ����_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0324ʵ����_1View ��Ϣ�������


void CMy0324ʵ����_1View::OnShowname()
{
	// TODO: �ڴ���������������
	CString s = _T("����Τ��÷");
	CClientDC dc(this);
	dc.TextOutW(200, 200, s);
}
