
// week11Test.1Set.cpp : Cweek11Test1Set ���ʵ��
//

#include "stdafx.h"
#include "week11Test.1.h"
#include "week11Test.1Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek11Test1Set ʵ��

// ���������� 2020��5��12��, 20:31

IMPLEMENT_DYNAMIC(Cweek11Test1Set, CRecordset)

Cweek11Test1Set::Cweek11Test1Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = 0.0;
	m_3 = 0;
	m_4 = 0.0;
	m_5 = L"";
	m_nFields = 6;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString Cweek11Test1Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x5b66\x751f\x57fa\x672c\x4fe1\x606f;DBQ=C:\\Users\\14330\\Documents\\Database2.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString Cweek11Test1Set::GetDefaultSQL()
{
	return _T("[ѧ��������Ϣ]");
}

void Cweek11Test1Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);
	RFX_Double(pFX, _T("[�ֶ�2]"), m_2);
	RFX_Long(pFX, _T("[�ֶ�3]"), m_3);
	RFX_Double(pFX, _T("[�ֶ�4]"), m_4);
	RFX_Text(pFX, _T("[�ֶ�5]"), m_5);

}
/////////////////////////////////////////////////////////////////////////////
// Cweek11Test1Set ���

#ifdef _DEBUG
void Cweek11Test1Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void Cweek11Test1Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

