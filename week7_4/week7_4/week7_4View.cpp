
// week7_4View.cpp : Cweek7_4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week7_4.h"
#endif

#include "week7_4Doc.h"
#include "week7_4View.h"
#include "MYDIALOG.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek7_4View

IMPLEMENT_DYNCREATE(Cweek7_4View, CView)

BEGIN_MESSAGE_MAP(Cweek7_4View, CView)
	ON_COMMAND(ID_POPOUT, &Cweek7_4View::OnPopout)
END_MESSAGE_MAP()

// Cweek7_4View ����/����

Cweek7_4View::Cweek7_4View()
{
	// TODO: �ڴ˴���ӹ������

}

Cweek7_4View::~Cweek7_4View()
{
}

BOOL Cweek7_4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek7_4View ����

void Cweek7_4View::OnDraw(CDC* /*pDC*/)
{
	Cweek7_4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek7_4View ���

#ifdef _DEBUG
void Cweek7_4View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek7_4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek7_4Doc* Cweek7_4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek7_4Doc)));
	return (Cweek7_4Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek7_4View ��Ϣ�������


void Cweek7_4View::OnPopout()
{
	// TODO: �ڴ���������������
	MYDIALOG dlg = new MYDIALOG;
	int r = dlg.DoModal();
}
