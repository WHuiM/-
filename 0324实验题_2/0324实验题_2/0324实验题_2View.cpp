
// 0324ʵ����_2View.cpp : CMy0324ʵ����_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0324ʵ����_2.h"
#endif

#include "0324ʵ����_2Doc.h"
#include "0324ʵ����_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0324ʵ����_2View

IMPLEMENT_DYNCREATE(CMy0324ʵ����_2View, CView)

BEGIN_MESSAGE_MAP(CMy0324ʵ����_2View, CView)
END_MESSAGE_MAP()

// CMy0324ʵ����_2View ����/����

CMy0324ʵ����_2View::CMy0324ʵ����_2View()
{
	// TODO: �ڴ˴���ӹ������
	BITMAP BM;
	m_Bitmap.LoadBitmapW(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;
}

CMy0324ʵ����_2View::~CMy0324ʵ����_2View()
{
}

BOOL CMy0324ʵ����_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0324ʵ����_2View ����

void CMy0324ʵ����_2View::OnDraw(CDC* pDC)
{
	CMy0324ʵ����_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight,&MemDC,0,0,SRCCOPY);
}


// CMy0324ʵ����_2View ���

#ifdef _DEBUG
void CMy0324ʵ����_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0324ʵ����_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0324ʵ����_2Doc* CMy0324ʵ����_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0324ʵ����_2Doc)));
	return (CMy0324ʵ����_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0324ʵ����_2View ��Ϣ�������
