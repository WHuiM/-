
// week8����ʵ�� _2View.cpp : Cweek8����ʵ��_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week8����ʵ�� _2.h"
#endif

#include "week8����ʵ�� _2Doc.h"
#include "week8����ʵ�� _2View.h"
#include "mydialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek8����ʵ��_2View

IMPLEMENT_DYNCREATE(Cweek8����ʵ��_2View, CView)

BEGIN_MESSAGE_MAP(Cweek8����ʵ��_2View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_POPOUT, &Cweek8����ʵ��_2View::OnPopout)
END_MESSAGE_MAP()

// Cweek8����ʵ��_2View ����/����

Cweek8����ʵ��_2View::Cweek8����ʵ��_2View()
{
	// TODO: �ڴ˴���ӹ������
	s = " ";
}

Cweek8����ʵ��_2View::~Cweek8����ʵ��_2View()
{
}

BOOL Cweek8����ʵ��_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek8����ʵ��_2View ����

void Cweek8����ʵ��_2View::OnDraw(CDC* /*pDC*/)
{
	Cweek8����ʵ��_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek8����ʵ��_2View ���

#ifdef _DEBUG
void Cweek8����ʵ��_2View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek8����ʵ��_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek8����ʵ��_2Doc* Cweek8����ʵ��_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek8����ʵ��_2Doc)));
	return (Cweek8����ʵ��_2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek8����ʵ��_2View ��Ϣ�������


void Cweek8����ʵ��_2View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		s = cfd.GetFileName();
		GetDC()->TextOutW(200, 200, s);
	}
	CView::OnLButtonDblClk(nFlags, point);
}


void Cweek8����ʵ��_2View::OnPopout()
{
	// TODO: �ڴ���������������
	mydialog *P = new mydialog;
	P->ss = s;
	P->Create(IDD_DIALOG1);
	P->ShowWindow(1);
}
