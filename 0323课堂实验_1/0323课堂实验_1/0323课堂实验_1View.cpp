
// 0323����ʵ��_1View.cpp : CMy0323����ʵ��_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0323����ʵ��_1.h"
#endif

#include "0323����ʵ��_1Doc.h"
#include "0323����ʵ��_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0323����ʵ��_1View

IMPLEMENT_DYNCREATE(CMy0323����ʵ��_1View, CView)

BEGIN_MESSAGE_MAP(CMy0323����ʵ��_1View, CView)
	ON_COMMAND(ID_ShowCircle, &CMy0323����ʵ��_1View::OnShowcircle)
END_MESSAGE_MAP()

// CMy0323����ʵ��_1View ����/����

CMy0323����ʵ��_1View::CMy0323����ʵ��_1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0323����ʵ��_1View::~CMy0323����ʵ��_1View()
{
}

BOOL CMy0323����ʵ��_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0323����ʵ��_1View ����

void CMy0323����ʵ��_1View::OnDraw(CDC* /*pDC*/)
{
	CMy0323����ʵ��_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy0323����ʵ��_1View ���

#ifdef _DEBUG
void CMy0323����ʵ��_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0323����ʵ��_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0323����ʵ��_1Doc* CMy0323����ʵ��_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0323����ʵ��_1Doc)));
	return (CMy0323����ʵ��_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0323����ʵ��_1View ��Ϣ�������


void CMy0323����ʵ��_1View::OnShowcircle()
{
	// TODO: �ڴ���������������
	int r, a, b;
	CClientDC dc(this);//��ʾ�뾶�����Բ
	CRect cr;
	this->GetClientRect(&cr);
	if (cr.bottom - cr.top > cr.right - cr.left)
		 r = (cr.right - cr.left) / 2;
	else
		 r = (cr.bottom + cr.top) / 2;
	 a = cr.right - cr.left;
	 b = cr.bottom - cr.top;
	for (int i = 0; i < 15; i++)
	{
		if (r > 0)
		{
			dc.Ellipse(a / 2 - r, b / 2 - r, a / 2 + r, b / 2 + r);
			r -= 20;
		}
		
	}
}
