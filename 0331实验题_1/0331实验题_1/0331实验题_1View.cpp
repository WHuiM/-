
// 0331ʵ����_1View.cpp : CMy0331ʵ����_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0331ʵ����_1.h"
#endif

#include "0331ʵ����_1Doc.h"
#include "0331ʵ����_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0331ʵ����_1View

IMPLEMENT_DYNCREATE(CMy0331ʵ����_1View, CView)

BEGIN_MESSAGE_MAP(CMy0331ʵ����_1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_CHAR()
END_MESSAGE_MAP()

// CMy0331ʵ����_1View ����/����

CMy0331ʵ����_1View::CMy0331ʵ����_1View()
{
	// TODO: �ڴ˴���ӹ������
	i = 1;
	x = 0; y = 0;
}

CMy0331ʵ����_1View::~CMy0331ʵ����_1View()
{
}

BOOL CMy0331ʵ����_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0331ʵ����_1View ����
CRect cr(200, 200, 500, 220);
CRect cr1(190, 190, 510, 350);
void CMy0331ʵ����_1View::OnDraw(CDC* pDC)
{
	CMy0331ʵ����_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	
	pDC->Rectangle(cr1);
	
}


// CMy0331ʵ����_1View ���

#ifdef _DEBUG
void CMy0331ʵ����_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0331ʵ����_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0331ʵ����_1Doc* CMy0331ʵ����_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0331ʵ����_1Doc)));
	return (CMy0331ʵ����_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0331ʵ����_1View ��Ϣ�������


void CMy0331ʵ����_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	/*SetCaretPos(point);
	m_strLine.Empty();
	if (cr.PtInRect(point))
	{
		m_ptorigin.x = point.x;
		m_ptorigin.y = point.y;
	}*/
	
	CView::OnLButtonDown(nFlags, point);
}


void CMy0331ʵ����_1View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CString ch;
	
	int postion;
	int flag;
	ch.Format(_T("%c"), nChar);
	if (x > 200 && y > 200)
	{
		postion = (x - 200) / 10 + (y - 200) / 20 * 30;
		s.Insert(postion, nChar);
	}
	else
	{
		s.Append(ch);
	}
	dc.DrawText(s, cr, DT_LEFT | DT_WORDBREAK | DT_EDITCONTROL);
	
	CView::OnChar(nChar, nRepCnt, nFlags);
}
