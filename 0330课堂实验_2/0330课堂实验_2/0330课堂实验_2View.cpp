
// 0330����ʵ��_2View.cpp : CMy0330����ʵ��_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0330����ʵ��_2.h"
#endif

#include "0330����ʵ��_2Doc.h"
#include "0330����ʵ��_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0330����ʵ��_2View

IMPLEMENT_DYNCREATE(CMy0330����ʵ��_2View, CView)

BEGIN_MESSAGE_MAP(CMy0330����ʵ��_2View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMy0330����ʵ��_2View::OnFileOpen)
END_MESSAGE_MAP()

// CMy0330����ʵ��_2View ����/����

CMy0330����ʵ��_2View::CMy0330����ʵ��_2View()
{
	// TODO: �ڴ˴���ӹ������
	a.x = 0; a.y = 0;
	cr.top = cr.bottom = cr.right = cr.left = 0;
	flag = 0;
}

CMy0330����ʵ��_2View::~CMy0330����ʵ��_2View()
{
}

BOOL CMy0330����ʵ��_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0330����ʵ��_2View ����

void CMy0330����ʵ��_2View::OnDraw(CDC* pDC)
{
	CMy0330����ʵ��_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
		this->GetClientRect(&cr);
		a.x = (cr.right - cr.left) / 2;
		a.y = (cr.bottom - cr.top) / 2;
		if (flag == 1)
		{
			img.Draw(pDC->m_hDC, a.x - img.GetWidth ()/ 2, a.y - img.GetHeight() / 2, img.GetWidth(), img.GetHeight());

		}
}


// CMy0330����ʵ��_2View ���

#ifdef _DEBUG
void CMy0330����ʵ��_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0330����ʵ��_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0330����ʵ��_2Doc* CMy0330����ʵ��_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0330����ʵ��_2Doc)));
	return (CMy0330����ʵ��_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0330����ʵ��_2View ��Ϣ�������


void CMy0330����ʵ��_2View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		CString filename;
		filename = cfd.GetPathName();
		img.Load(filename); 
		flag = 1;
	}
	Invalidate();
	
}
