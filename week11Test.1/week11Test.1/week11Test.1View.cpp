
// week11Test.1View.cpp : Cweek11Test1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week11Test.1.h"
#endif

#include "week11Test.1Set.h"
#include "week11Test.1Doc.h"
#include "week11Test.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek11Test1View

IMPLEMENT_DYNCREATE(Cweek11Test1View, CRecordView)

BEGIN_MESSAGE_MAP(Cweek11Test1View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &Cweek11Test1View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &Cweek11Test1View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &Cweek11Test1View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &Cweek11Test1View::OnRecordLast)
END_MESSAGE_MAP()

// Cweek11Test1View 构造/析构

Cweek11Test1View::Cweek11Test1View()
	: CRecordView(IDD_WEEK11TEST1_FORM)
	, ID(0)
	, name(_T(""))
	, number(_T(""))
	, age(_T(""))
	, phonenumber(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码
	picRect.top = picRect.bottom = picRect.right = picRect.left = 0;
}

Cweek11Test1View::~Cweek11Test1View()
{
}

void Cweek11Test1View::DoDataExchange(CDataExchange* pDX)
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

BOOL Cweek11Test1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void Cweek11Test1View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_week11Test1Set;
	CRecordView::OnInitialUpdate();

}


// Cweek11Test1View 诊断

#ifdef _DEBUG
void Cweek11Test1View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cweek11Test1View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cweek11Test1Doc* Cweek11Test1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek11Test1Doc)));
	return (Cweek11Test1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek11Test1View 数据库支持
CRecordset* Cweek11Test1View::OnGetRecordset()
{
	return m_pSet;
}



// Cweek11Test1View 消息处理程序

void Cweek11Test1View::foo(CImage &img, int &sx, int &sy, int &w, int &h)
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
void Cweek11Test1View::Draw(CString filename)
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
void Cweek11Test1View::OnRecordFirst()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveFirst();
	UpdateData(false);
	CString filename;
	filename = m_pSet->m_5;
	Draw(filename);
	InvalidateRect(picRect);
}


void Cweek11Test1View::OnRecordPrev()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
	{
		m_pSet->MoveFirst();
	}
	UpdateData(false);
	CString filename;
	filename = m_pSet->m_5;
	Draw(filename);
	InvalidateRect(picRect);
}


void Cweek11Test1View::OnRecordNext()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
	{
		m_pSet->MoveLast();
	}
	UpdateData(false);
	CString filename;
	filename = m_pSet->m_5;
	Draw(filename);
	InvalidateRect(picRect);
}


void Cweek11Test1View::OnRecordLast()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveLast();
	UpdateData(false);
	CString filename;
	filename = m_pSet->m_5;
	Draw(filename);
	InvalidateRect(picRect);
}
