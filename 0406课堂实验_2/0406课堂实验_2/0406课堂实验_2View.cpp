
// 0406����ʵ��_2View.cpp : CMy0406����ʵ��_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0406����ʵ��_2.h"
#endif

#include "0406����ʵ��_2Doc.h"
#include "0406����ʵ��_2View.h"
#include "MYDIALOG.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0406����ʵ��_2View

IMPLEMENT_DYNCREATE(CMy0406����ʵ��_2View, CView)

BEGIN_MESSAGE_MAP(CMy0406����ʵ��_2View, CView)
	ON_COMMAND(ID_POPOUT, &CMy0406����ʵ��_2View::OnPopout)
END_MESSAGE_MAP()

// CMy0406����ʵ��_2View ����/����

CMy0406����ʵ��_2View::CMy0406����ʵ��_2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0406����ʵ��_2View::~CMy0406����ʵ��_2View()
{
}

BOOL CMy0406����ʵ��_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0406����ʵ��_2View ����

void CMy0406����ʵ��_2View::OnDraw(CDC* /*pDC*/)
{
	CMy0406����ʵ��_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy0406����ʵ��_2View ���

#ifdef _DEBUG
void CMy0406����ʵ��_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0406����ʵ��_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0406����ʵ��_2Doc* CMy0406����ʵ��_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0406����ʵ��_2Doc)));
	return (CMy0406����ʵ��_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0406����ʵ��_2View ��Ϣ�������


void CMy0406����ʵ��_2View::OnPopout()
{
	// TODO: �ڴ���������������
	MYDIALOG *pD = new MYDIALOG();
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);
}
