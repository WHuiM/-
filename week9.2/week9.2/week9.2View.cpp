
// week9.2View.cpp : Cweek92View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week9.2.h"
#endif

#include "week9.2Doc.h"
#include "week9.2View.h"
#include"MYDIALOG.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek92View

IMPLEMENT_DYNCREATE(Cweek92View, CView)

BEGIN_MESSAGE_MAP(Cweek92View, CView)
	ON_COMMAND(ID_POP_DIALOG, &Cweek92View::OnPopDialog)
END_MESSAGE_MAP()

// Cweek92View ����/����

Cweek92View::Cweek92View()
{
	// TODO: �ڴ˴���ӹ������

}

Cweek92View::~Cweek92View()
{
}

BOOL Cweek92View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek92View ����

void Cweek92View::OnDraw(CDC* /*pDC*/)
{
	Cweek92Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek92View ���

#ifdef _DEBUG
void Cweek92View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek92View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek92Doc* Cweek92View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek92Doc)));
	return (Cweek92Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek92View ��Ϣ�������


void Cweek92View::OnPopDialog()
{
	// TODO: �ڴ���������������
	MYDIALOG cfd;
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		
	}	
}
