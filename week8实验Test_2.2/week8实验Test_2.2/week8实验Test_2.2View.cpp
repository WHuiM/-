
// week8ʵ��Test_2.2View.cpp : Cweek8ʵ��Test_22View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week8ʵ��Test_2.2.h"
#endif

#include "week8ʵ��Test_2.2Doc.h"
#include "week8ʵ��Test_2.2View.h"
#include"MYDIALOG.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek8ʵ��Test_22View

IMPLEMENT_DYNCREATE(Cweek8ʵ��Test_22View, CView)

BEGIN_MESSAGE_MAP(Cweek8ʵ��Test_22View, CView)
	ON_COMMAND(ID_POP_DIALOG, &Cweek8ʵ��Test_22View::OnPopDialog)
END_MESSAGE_MAP()

// Cweek8ʵ��Test_22View ����/����

Cweek8ʵ��Test_22View::Cweek8ʵ��Test_22View()
{
	// TODO: �ڴ˴���ӹ������

}

Cweek8ʵ��Test_22View::~Cweek8ʵ��Test_22View()
{
}

BOOL Cweek8ʵ��Test_22View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek8ʵ��Test_22View ����

void Cweek8ʵ��Test_22View::OnDraw(CDC* /*pDC*/)
{
	Cweek8ʵ��Test_22Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek8ʵ��Test_22View ���

#ifdef _DEBUG
void Cweek8ʵ��Test_22View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek8ʵ��Test_22View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek8ʵ��Test_22Doc* Cweek8ʵ��Test_22View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek8ʵ��Test_22Doc)));
	return (Cweek8ʵ��Test_22Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek8ʵ��Test_22View ��Ϣ�������


void Cweek8ʵ��Test_22View::OnPopDialog()
{
	// TODO: �ڴ���������������
	MYDIALOG dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		GetDC()->Ellipse(dlg.x, dlg.y, dlg.a, dlg.b);
	}

}
