
// week11_DBView.cpp : Cweek11_DBView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
END_MESSAGE_MAP()

// Cweek11_DBView 构造/析构

Cweek11_DBView::Cweek11_DBView()
	: CRecordView(IDD_WEEK11_DB_FORM)
	, id(0)
	, name(_T(""))
	, number(_T(""))
	, age(_T(""))
	, phonenum(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

Cweek11_DBView::~Cweek11_DBView()
{
}

void Cweek11_DBView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_4);
}

BOOL Cweek11_DBView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void Cweek11_DBView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_week11_DBSet;
	CRecordView::OnInitialUpdate();

}


// Cweek11_DBView 打印

BOOL Cweek11_DBView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void Cweek11_DBView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void Cweek11_DBView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// Cweek11_DBView 诊断

#ifdef _DEBUG
void Cweek11_DBView::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cweek11_DBView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cweek11_DBDoc* Cweek11_DBView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek11_DBDoc)));
	return (Cweek11_DBDoc*)m_pDocument;
}
#endif //_DEBUG


// Cweek11_DBView 数据库支持
CRecordset* Cweek11_DBView::OnGetRecordset()
{
	return m_pSet;
}



// Cweek11_DBView 消息处理程序
