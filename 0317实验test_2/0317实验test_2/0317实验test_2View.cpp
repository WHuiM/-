
// 0317ʵ��test_2View.cpp : CMy0317ʵ��test_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0317ʵ��test_2.h"
#endif

#include "0317ʵ��test_2Doc.h"
#include "0317ʵ��test_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0317ʵ��test_2View

IMPLEMENT_DYNCREATE(CMy0317ʵ��test_2View, CView)

BEGIN_MESSAGE_MAP(CMy0317ʵ��test_2View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// CMy0317ʵ��test_2View ����/����

CMy0317ʵ��test_2View::CMy0317ʵ��test_2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0317ʵ��test_2View::~CMy0317ʵ��test_2View()
{
}

BOOL CMy0317ʵ��test_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0317ʵ��test_2View ����

void CMy0317ʵ��test_2View::OnDraw(CDC* pDC)
{
	CMy0317ʵ��test_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(pDoc->cr);
}


// CMy0317ʵ��test_2View ���

#ifdef _DEBUG
void CMy0317ʵ��test_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0317ʵ��test_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0317ʵ��test_2Doc* CMy0317ʵ��test_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0317ʵ��test_2Doc)));
	return (CMy0317ʵ��test_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0317ʵ��test_2View ��Ϣ�������


void CMy0317ʵ��test_2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy0317ʵ��test_2Doc* pDoc = GetDocument();
	pDoc->cr.left = 400; pDoc->cr.top = 200;
	pDoc->cr.right = 700; pDoc->cr.bottom = 500;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}


void CMy0317ʵ��test_2View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect cc;
	CClientDC dc(this);
	this->GetClientRect(&cc);
	CMy0317ʵ��test_2Doc* pDoc = GetDocument();
	switch (nChar)
	{
	case VK_LEFT:
		if (pDoc->cr.left > 0)
		{
			pDoc->cr.left -= 10;
			pDoc->cr.right -= 10;
		}
		break;
	case VK_RIGHT:
		if (pDoc->cr.right <= (cc.right - cc.left))
		{
			pDoc->cr.left += 10;
			pDoc->cr.right += 10;
		}
	break;
	case VK_UP:
		if (pDoc->cr.top > 0)
		{
			pDoc->cr.top -= 10;
			pDoc->cr.bottom -= 10;
		}
	break;
	case VK_DOWN:
		if (pDoc->cr.bottom <= (cc.bottom - cc.top))
		{
			pDoc->cr.top += 10;
			pDoc->cr.bottom += 10;
		}
		break;
	case  VK_HOME:
		if (pDoc->cr.top > 0 && (pDoc->cr.left > 0))
		{
			pDoc->cr.top -= 10;
			pDoc->cr.left -= 10;
		}
	break;
	case  VK_END:
		if (pDoc->cr.bottom>pDoc->cr.top&&(pDoc->cr.right>pDoc->cr.left))
		{
			pDoc->cr.top += 10;
			pDoc->cr.left += 10;
		}
		break;
	}
	InvalidateRect(NULL,TRUE);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
