
// Test�ۺ�ʵ��1View.cpp : CTest�ۺ�ʵ��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Test�ۺ�ʵ��1.h"
#endif

#include "Test�ۺ�ʵ��1Set.h"
#include "Test�ۺ�ʵ��1Doc.h"
#include "Test�ۺ�ʵ��1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTest�ۺ�ʵ��1View

IMPLEMENT_DYNCREATE(CTest�ۺ�ʵ��1View, CRecordView)

BEGIN_MESSAGE_MAP(CTest�ۺ�ʵ��1View, CRecordView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
	ON_EN_CHANGE(IDC_EDIT2, &CTest�ۺ�ʵ��1View::OnEnChangeEdit2)
	ON_COMMAND(ID_RECORD_FIRST, &CTest�ۺ�ʵ��1View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CTest�ۺ�ʵ��1View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CTest�ۺ�ʵ��1View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CTest�ۺ�ʵ��1View::OnRecordLast)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CTest�ۺ�ʵ��1View ����/����

CTest�ۺ�ʵ��1View::CTest�ۺ�ʵ��1View()
	: CRecordView(IDD_TEST1_FORM)
	, name(_T(""))
	, number(_T(""))
	, gender(_T(""))
	, picname(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������
	filepath = _T("C:\\Users\\14330\\Pictures\\Saved Pictures\\");
	cr.bottom = cr.left = cr.right = cr.top = 0;
}

CTest�ۺ�ʵ��1View::~CTest�ۺ�ʵ��1View()
{
}

void CTest�ۺ�ʵ��1View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_4);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_8);
}

BOOL CTest�ۺ�ʵ��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CTest�ۺ�ʵ��1View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Test�ۺ�ʵ��1Set;
	CRecordView::OnInitialUpdate();

}


// CTest�ۺ�ʵ��1View ��ӡ

BOOL CTest�ۺ�ʵ��1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CTest�ۺ�ʵ��1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CTest�ۺ�ʵ��1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CTest�ۺ�ʵ��1View ���

#ifdef _DEBUG
void CTest�ۺ�ʵ��1View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CTest�ۺ�ʵ��1View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CTest�ۺ�ʵ��1Doc* CTest�ۺ�ʵ��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTest�ۺ�ʵ��1Doc)));
	return (CTest�ۺ�ʵ��1Doc*)m_pDocument;
}
#endif //_DEBUG


// CTest�ۺ�ʵ��1View ���ݿ�֧��
CRecordset* CTest�ۺ�ʵ��1View::OnGetRecordset()
{
	return m_pSet;
}
void CTest�ۺ�ʵ��1View::Draw(CString filename)
{
	CImage img;
	img.Load(filename);
	int sx, sy, w, h;
	foo(img, sx, sy, w, h);
	CDC *pDC = GetDlgItem(IDC_STATIC)->GetDC();
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	ReleaseDC(pDC);
}


// CTest�ۺ�ʵ��1View ��Ϣ�������
void CTest�ۺ�ʵ��1View::foo(CImage &img, int &sx, int &sy, int &w, int &h)
{
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);
	float rect_ratio = 1.0*rect.Width() / rect.Height();

	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
	if (rect_ratio > img_ratio)
	{
		h = rect.Height();
		w = img_ratio*h;
		sx = (rect.Width() - w) / 2;
		sy = 0;

	}
	else
	{
		w = rect.Width();
		h = w / img_ratio;
		sx = 0;
		sy = (rect.Height() - h) / 2;
	}

}

	

void CTest�ۺ�ʵ��1View::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CRecordView::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CTest�ۺ�ʵ��1View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);

	Invalidate();
}


void CTest�ۺ�ʵ��1View::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
	{
		m_pSet->MoveFirst();
	}
	UpdateData(false);
	
	Invalidate();
}


void CTest�ۺ�ʵ��1View::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
	{
		m_pSet->MoveLast();
	}
	UpdateData(false);
	
	Invalidate();
}


void CTest�ۺ�ʵ��1View::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
	
	Invalidate();
}


void CTest�ۺ�ʵ��1View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
	CString s = filepath+m_pSet->m_8;
	Draw(s);
}
