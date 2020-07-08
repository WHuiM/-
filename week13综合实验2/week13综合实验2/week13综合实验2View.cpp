
// week13�ۺ�ʵ��2View.cpp : Cweek13�ۺ�ʵ��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week13�ۺ�ʵ��2.h"
#endif

#include "week13�ۺ�ʵ��2Set.h"
#include "week13�ۺ�ʵ��2Doc.h"
#include "week13�ۺ�ʵ��2View.h"
#include"mydialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek13�ۺ�ʵ��2View

IMPLEMENT_DYNCREATE(Cweek13�ۺ�ʵ��2View, CRecordView)

BEGIN_MESSAGE_MAP(Cweek13�ۺ�ʵ��2View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &Cweek13�ۺ�ʵ��2View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &Cweek13�ۺ�ʵ��2View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &Cweek13�ۺ�ʵ��2View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &Cweek13�ۺ�ʵ��2View::OnRecordLast)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON1, &Cweek13�ۺ�ʵ��2View::OnBnClickedButton1)
END_MESSAGE_MAP()

// Cweek13�ۺ�ʵ��2View ����/����

Cweek13�ۺ�ʵ��2View::Cweek13�ۺ�ʵ��2View()
	: CRecordView(IDD_WEEK132_FORM)
	, picname(_T(""))
	, name(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������
	file = _T("C:\\Users\\14330\\Pictures\\Saved Pictures\\");
	cr.right = cr.left = cr.top = cr.bottom = 0;
	
	s = " ";
}

Cweek13�ۺ�ʵ��2View::~Cweek13�ۺ�ʵ��2View()
{
}

void Cweek13�ۺ�ʵ��2View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_8);
	DDX_Text(pDX, IDC_EDIT2,m_pSet->m_1);
}

BOOL Cweek13�ۺ�ʵ��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void Cweek13�ۺ�ʵ��2View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_week13�ۺ�ʵ��2Set;
	CRecordView::OnInitialUpdate();

}


// Cweek13�ۺ�ʵ��2View ���

#ifdef _DEBUG
void Cweek13�ۺ�ʵ��2View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cweek13�ۺ�ʵ��2View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cweek13�ۺ�ʵ��2Doc* Cweek13�ۺ�ʵ��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek13�ۺ�ʵ��2Doc)));
	return (Cweek13�ۺ�ʵ��2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek13�ۺ�ʵ��2View ���ݿ�֧��
CRecordset* Cweek13�ۺ�ʵ��2View::OnGetRecordset()
{
	return m_pSet;
}



// Cweek13�ۺ�ʵ��2View ��Ϣ�������
void Cweek13�ۺ�ʵ��2View::foo(CImage &img, int &sx, int &sy, int &w, int &h)
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

void Cweek13�ۺ�ʵ��2View::Draw(CString filename)
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


void Cweek13�ۺ�ʵ��2View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
	Invalidate();
}


void Cweek13�ۺ�ʵ��2View::OnRecordPrev()
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


void Cweek13�ۺ�ʵ��2View::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
	{
		m_pSet->MoveFirst();
	}
	UpdateData(false);
	Invalidate();
}


void Cweek13�ۺ�ʵ��2View::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
	Invalidate();
}


void Cweek13�ۺ�ʵ��2View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CRecordView::OnPaint()
	 s = file + m_pSet->m_8;
	Draw(s);
	
}


void Cweek13�ۺ�ʵ��2View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	mydialog my;
	my.filename= file + m_pSet->m_8;
	my.ShowWindow(1);

}
