
// week7_2View.cpp : Cweek7_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week7_2.h"
#endif

#include "week7_2Doc.h"
#include "week7_2View.h"
#include"MYDialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek7_2View

IMPLEMENT_DYNCREATE(Cweek7_2View, CView)

BEGIN_MESSAGE_MAP(Cweek7_2View, CView)
	ON_COMMAND(ID_POPOUT, &Cweek7_2View::OnPopout)
END_MESSAGE_MAP()

// Cweek7_2View ����/����

Cweek7_2View::Cweek7_2View()
{
	// TODO: �ڴ˴���ӹ������

}

Cweek7_2View::~Cweek7_2View()
{
}

BOOL Cweek7_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek7_2View ����

void Cweek7_2View::OnDraw(CDC* /*pDC*/)
{
	Cweek7_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek7_2View ���

#ifdef _DEBUG
void Cweek7_2View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek7_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek7_2Doc* Cweek7_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek7_2Doc)));
	return (Cweek7_2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek7_2View ��Ϣ�������


void Cweek7_2View::OnPopout()
{
	// TODO: �ڴ���������������
	MYDialog dlg = new MYDialog();
	int r = dlg.DoModal();
	
}
