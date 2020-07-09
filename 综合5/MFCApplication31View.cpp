
// MFCApplication31View.cpp : CMFCApplication31View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication31.h"
#endif

#include "MFCApplication31Set.h"
#include "MFCApplication31Doc.h"
#include "MFCApplication31View.h"
#include "AddDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication31View

IMPLEMENT_DYNCREATE(CMFCApplication31View, CRecordView)

BEGIN_MESSAGE_MAP(CMFCApplication31View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON3, &CMFCApplication31View::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON1, &CMFCApplication31View::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMFCApplication31View::OnBnClickedButton2)
END_MESSAGE_MAP()

// CMFCApplication31View ����/����

CMFCApplication31View::CMFCApplication31View()
	: CRecordView(IDD_MFCAPPLICATION31_FORM)
	, num(0)
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication31View::~CMFCApplication31View()
{
}

void CMFCApplication31View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_num);
}

BOOL CMFCApplication31View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CMFCApplication31View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_MFCApplication31Set;
	CRecordView::OnInitialUpdate();

}


// CMFCApplication31View ���

#ifdef _DEBUG
void CMFCApplication31View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMFCApplication31View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMFCApplication31Doc* CMFCApplication31View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication31Doc)));
	return (CMFCApplication31Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication31View ���ݿ�֧��
CRecordset* CMFCApplication31View::OnGetRecordset()
{
	return m_pSet;
}



// CMFCApplication31View ��Ϣ�������

void CMFCApplication31View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	AddDlg adddlg;

	if (adddlg.DoModal() == IDOK) {
		long num = adddlg.i;

		m_pSet->AddNew();
		m_pSet->m_num = num;
		m_pSet->Update();
	}
	UpdateData(false);

}

void CMFCApplication31View::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������

	AddDlg adddlg;

	adddlg.i = m_pSet->m_num;

	if (adddlg.DoModal() == IDOK) {
		long num = adddlg.i;

		m_pSet->Edit();
		m_pSet->m_num = num;
		m_pSet->Update();
	}
	UpdateData(false);

}

void CMFCApplication31View::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF()) {
		m_pSet->MoveFirst();
	}
	UpdateData(false);
}

