
// week8����ʵ��_3View.cpp : Cweek8����ʵ��_3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week8����ʵ��_3.h"
#endif

#include "week8����ʵ��_3Doc.h"
#include "week8����ʵ��_3View.h"
#include "mydialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek8����ʵ��_3View

IMPLEMENT_DYNCREATE(Cweek8����ʵ��_3View, CView)

BEGIN_MESSAGE_MAP(Cweek8����ʵ��_3View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_POP_DIALOG, &Cweek8����ʵ��_3View::OnPopDialog)
END_MESSAGE_MAP()

// Cweek8����ʵ��_3View ����/����

Cweek8����ʵ��_3View::Cweek8����ʵ��_3View()
{
	// TODO: �ڴ˴���ӹ������
	s = " ";
}

Cweek8����ʵ��_3View::~Cweek8����ʵ��_3View()
{
}

BOOL Cweek8����ʵ��_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek8����ʵ��_3View ����

void Cweek8����ʵ��_3View::OnDraw(CDC* /*pDC*/)
{
	Cweek8����ʵ��_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek8����ʵ��_3View ���

#ifdef _DEBUG
void Cweek8����ʵ��_3View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek8����ʵ��_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek8����ʵ��_3Doc* Cweek8����ʵ��_3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek8����ʵ��_3Doc)));
	return (Cweek8����ʵ��_3Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek8����ʵ��_3View ��Ϣ�������


void Cweek8����ʵ��_3View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		s = cfd.GetFileName();
		GetDC()->TextOutW(200, 100, s);
	}
	CView::OnLButtonDblClk(nFlags, point);
}


void Cweek8����ʵ��_3View::OnPopDialog()
{
	// TODO: �ڴ���������������
	mydialog * cd = new mydialog;
	cd->Create(IDD_DIALOG1);
	cd->ShowWindow(1);
	cd->lbox.AddString(s);
}
