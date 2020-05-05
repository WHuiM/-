
// week11_DBView.cpp : Cweek11_DBView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week11_DB.h"
#endif

#include "week11_DBSet.h"
#include "week11_DBDoc.h"
#include "week11_DBView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek11_DBView

IMPLEMENT_DYNCREATE(Cweek11_DBView, CRecordView)

BEGIN_MESSAGE_MAP(Cweek11_DBView, CRecordView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
END_MESSAGE_MAP()

// Cweek11_DBView ����/����

Cweek11_DBView::Cweek11_DBView()
	: CRecordView(IDD_WEEK11_DB_FORM)
	, id(0)
	, name(_T(""))
	, number(_T(""))
	, age(_T(""))
	, phonenum(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

Cweek11_DBView::~Cweek11_DBView()
{
}

void Cweek11_DBView::DoDataExchange(CDataExchange* pDX)
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

BOOL Cweek11_DBView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void Cweek11_DBView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_week11_DBSet;
	CRecordView::OnInitialUpdate();

}


// Cweek11_DBView ��ӡ

BOOL Cweek11_DBView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void Cweek11_DBView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void Cweek11_DBView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// Cweek11_DBView ���

#ifdef _DEBUG
void Cweek11_DBView::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cweek11_DBView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cweek11_DBDoc* Cweek11_DBView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek11_DBDoc)));
	return (Cweek11_DBDoc*)m_pDocument;
}
#endif //_DEBUG


// Cweek11_DBView ���ݿ�֧��
CRecordset* Cweek11_DBView::OnGetRecordset()
{
	return m_pSet;
}



// Cweek11_DBView ��Ϣ�������
