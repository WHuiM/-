
// week11Test.1和2Set.cpp : Cweek11Test1和2Set 类的实现
//

#include "stdafx.h"
#include "week11Test.1和2.h"
#include "week11Test.1和2Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek11Test1和2Set 实现

// 代码生成在 2020年5月5日, 21:21

IMPLEMENT_DYNAMIC(Cweek11Test1和2Set, CRecordset)

Cweek11Test1和2Set::Cweek11Test1和2Set(CDatabase* pdb)
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
//#error 安全问题: 连接字符串可能包含密码。
// 此连接字符串中可能包含明文密码和/或其他重要
// 信息。请在查看完此连接字符串并找到所有与安全
// 有关的问题后移除 #error。可能需要将此密码存
// 储为其他格式或使用其他的用户身份验证。
CString Cweek11Test1和2Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x5b66\x751f\x57fa\x672c\x4fe1\x606f;DBQ=C:\\Users\\14330\\Documents\\Database2.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString Cweek11Test1和2Set::GetDefaultSQL()
{
	return _T("[学生基本信息]");
}

void Cweek11Test1和2Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[字段1]"), m_1);
	RFX_Double(pFX, _T("[字段2]"), m_2);
	RFX_Long(pFX, _T("[字段3]"), m_3);
	RFX_Double(pFX, _T("[字段4]"), m_4);
	RFX_Text(pFX, _T("[字段5]"), m_5);

}
/////////////////////////////////////////////////////////////////////////////
// Cweek11Test1和2Set 诊断

#ifdef _DEBUG
void Cweek11Test1和2Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void Cweek11Test1和2Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

