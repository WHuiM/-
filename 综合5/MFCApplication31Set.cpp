
// MFCApplication31Set.cpp : CMFCApplication31Set ���ʵ��
//

#include "stdafx.h"
#include "MFCApplication31.h"
#include "MFCApplication31Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication31Set ʵ��

// ���������� 2020��5��19��, 19:51

IMPLEMENT_DYNAMIC(CMFCApplication31Set, CRecordset)

CMFCApplication31Set::CMFCApplication31Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_num = 0;
	m_nFields = 2;
	m_nDefaultType = dynaset;
}
// #error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CMFCApplication31Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x5b66\x751f\x4fe1\x606f;UID=sa;PWD=123456;APP=Microsoft\x00ae Visual Studio\x00ae 2015;WSID=DESKTOP-HKNCPI4;DATABASE=mfcdb");
}

CString CMFCApplication31Set::GetDefaultSQL()
{
	return _T("[dbo].[Table_4]");
}

void CMFCApplication31Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Long(pFX, _T("[num]"), m_num);

}
/////////////////////////////////////////////////////////////////////////////
// CMFCApplication31Set ���

#ifdef _DEBUG
void CMFCApplication31Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CMFCApplication31Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

