
// week9.1View.cpp : Cweek91View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week9.1.h"
#endif

#include "week9.1Doc.h"
#include "week9.1View.h"
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek91View

IMPLEMENT_DYNCREATE(Cweek91View, CView)

BEGIN_MESSAGE_MAP(Cweek91View, CView)
	ON_COMMAND(ID_POP_DIALOG, &Cweek91View::OnPopDialog)
END_MESSAGE_MAP()

// Cweek91View ����/����

Cweek91View::Cweek91View()
{
	// TODO: �ڴ˴���ӹ������

}

Cweek91View::~Cweek91View()
{
}

BOOL Cweek91View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek91View ����

void Cweek91View::OnDraw(CDC* pDC)
{
	Cweek91Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek91View ���

#ifdef _DEBUG
void Cweek91View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek91View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek91Doc* Cweek91View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek91Doc)));
	return (Cweek91Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek91View ��Ϣ�������


void Cweek91View::OnPopDialog()
{
	// TODO: �ڴ���������������
	Cweek91Doc* pDoc = GetDocument();
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		ofstream out;
		out.open(_T("abc.txt"), std::ios::out | std::ios::app);
		out <<CT2A( cfd.GetPathName().GetString()) << endl;
		
		
	}
}
