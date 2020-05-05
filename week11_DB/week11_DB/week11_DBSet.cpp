
// week11_DBSet.cpp : Cweek11_DBSet ���ʵ��
//

#include "stdafx.h"
#include "week11_DB.h"
#include "week11_DBSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek11_DBSet ʵ��

// ���������� 2020��5��5��, 20:36

IMPLEMENT_DYNAMIC(Cweek11_DBSet, CRecordset)

Cweek11_DBSet::Cweek11_DBSet(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = 0;
	m_3 = 0;
	m_4 = 0.0;
	m_nFields = 5;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString Cweek11_DBSet::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x5b66\x751f\x4fe1\x606f;DBQ=C:\\Users\\14330\\Documents\\Database1.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString Cweek11_DBSet::GetDefaultSQL()
{
	return _T("[ѧ����Ϣ]");
}

void Cweek11_DBSet::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);
	RFX_Long(pFX, _T("[�ֶ�2]"), m_2);
	RFX_Long(pFX, _T("[�ֶ�3]"), m_3);
	RFX_Double(pFX, _T("[�ֶ�4]"), m_4);

}
/////////////////////////////////////////////////////////////////////////////
// Cweek11_DBSet ���

#ifdef _DEBUG
void Cweek11_DBSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void Cweek11_DBSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

