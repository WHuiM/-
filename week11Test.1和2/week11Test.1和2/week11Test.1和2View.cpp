
// week11Test.1��2View.cpp : Cweek11Test1��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week11Test.1��2.h"
#endif

#include "week11Test.1��2Set.h"
#include "week11Test.1��2Doc.h"
#include "week11Test.1��2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek11Test1��2View

IMPLEMENT_DYNCREATE(Cweek11Test1��2View, CRecordView)

BEGIN_MESSAGE_MAP(Cweek11Test1��2View, CRecordView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
	ON_BN_CLICKED(IDC_BUTTON1, &Cweek11Test1��2View::OnBnClickedButton1)
END_MESSAGE_MAP()

// Cweek11Test1��2View ����/����

Cweek11Test1��2View::Cweek11Test1��2View()
	: CRecordView(IDD_WEEK11TEST12_FORM)
	, id(0)
	, name(_T(""))
	, number(_T(""))
	, age(_T(""))
	, phonenumber(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

Cweek11Test1��2View::~Cweek11Test1��2View()
{
}

void Cweek11Test1��2View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_4);
}

BOOL Cweek11Test1��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void Cweek11Test1��2View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_week11Test1��2Set;
	CRecordView::OnInitialUpdate();

}


// Cweek11Test1��2View ��ӡ

BOOL Cweek11Test1��2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void Cweek11Test1��2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void Cweek11Test1��2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// Cweek11Test1��2View ���

#ifdef _DEBUG
void Cweek11Test1��2View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cweek11Test1��2View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cweek11Test1��2Doc* Cweek11Test1��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek11Test1��2Doc)));
	return (Cweek11Test1��2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek11Test1��2View ���ݿ�֧��
CRecordset* Cweek11Test1��2View::OnGetRecordset()
{
	return m_pSet;
}

void Cweek11Test1��2View::foo(CImage &img, int &sx, int &sy, int &w, int &h)
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

// Cweek11Test1��2View ��Ϣ�������


void Cweek11Test1��2View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString filename;
	filename = m_pSet->m_5;
	CImage img;
	
	img.Load(filename);
	int sx, sy, w, h;
	foo(img,sx, sy, w, h);
	CDC *pDC = GetDlgItem(IDC_STATIC)->GetDC();
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(pDC->m_hDC,sx,sy,w,h);

}
