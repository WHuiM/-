
// Test�ۺ�ʵ��1Doc.cpp : CTest�ۺ�ʵ��1Doc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Test�ۺ�ʵ��1.h"
#endif

#include "Test�ۺ�ʵ��1Set.h"
#include "Test�ۺ�ʵ��1Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CTest�ۺ�ʵ��1Doc

IMPLEMENT_DYNCREATE(CTest�ۺ�ʵ��1Doc, CDocument)

BEGIN_MESSAGE_MAP(CTest�ۺ�ʵ��1Doc, CDocument)
END_MESSAGE_MAP()


// CTest�ۺ�ʵ��1Doc ����/����

CTest�ۺ�ʵ��1Doc::CTest�ۺ�ʵ��1Doc()
{
	// TODO: �ڴ����һ���Թ������

}

CTest�ۺ�ʵ��1Doc::~CTest�ۺ�ʵ��1Doc()
{
}

BOOL CTest�ۺ�ʵ��1Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CTest�ۺ�ʵ��1Doc ���л�

void CTest�ۺ�ʵ��1Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
	}
}

#ifdef SHARED_HANDLERS

// ����ͼ��֧��
void CTest�ۺ�ʵ��1Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// �޸Ĵ˴����Ի����ĵ�����
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// ������������֧��
void CTest�ۺ�ʵ��1Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CTest�ۺ�ʵ��1Doc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// CTest�ۺ�ʵ��1Doc ���

#ifdef _DEBUG
void CTest�ۺ�ʵ��1Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CTest�ۺ�ʵ��1Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CTest�ۺ�ʵ��1Doc ����
