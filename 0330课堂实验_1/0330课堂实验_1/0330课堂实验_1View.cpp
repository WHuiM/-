
// 0330����ʵ��_1View.cpp : CMy0330����ʵ��_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0330����ʵ��_1.h"
#endif

#include "0330����ʵ��_1Doc.h"
#include "0330����ʵ��_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0330����ʵ��_1View

IMPLEMENT_DYNCREATE(CMy0330����ʵ��_1View, CView)

BEGIN_MESSAGE_MAP(CMy0330����ʵ��_1View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMy0330����ʵ��_1View::OnFileOpen)
END_MESSAGE_MAP()

// CMy0330����ʵ��_1View ����/����

CMy0330����ʵ��_1View::CMy0330����ʵ��_1View()
{
	// TODO: �ڴ˴���ӹ������
	a.x = 0; a.y = 0;
}

CMy0330����ʵ��_1View::~CMy0330����ʵ��_1View()
{
}

BOOL CMy0330����ʵ��_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0330����ʵ��_1View ����

void CMy0330����ʵ��_1View::OnDraw(CDC* /*pDC*/)
{
	CMy0330����ʵ��_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy0330����ʵ��_1View ���

#ifdef _DEBUG
void CMy0330����ʵ��_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0330����ʵ��_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0330����ʵ��_1Doc* CMy0330����ʵ��_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0330����ʵ��_1Doc)));
	return (CMy0330����ʵ��_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0330����ʵ��_1View ��Ϣ�������


void CMy0330����ʵ��_1View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		CString filename;
		filename = cfd.GetPathName();
		CImage img;
		img.Load(filename);
		
		{
			CRect cr;
			this->GetClientRect(&cr);
			a.x = (cr.right -cr.left)/2;
			a.y = (cr.bottom - cr.top) / 2 ; //ȷ���ͻ���������λ
			
		}
		
		img.Draw(dc.m_hDC, a.x-img.GetWidth()/2, a.y-img.GetHeight()/2,  img.GetHeight() ,  img.GetHeight());
	}
	
}
