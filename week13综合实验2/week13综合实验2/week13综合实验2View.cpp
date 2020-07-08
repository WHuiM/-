
// week13综合实验2View.cpp : Cweek13综合实验2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week13综合实验2.h"
#endif

#include "week13综合实验2Set.h"
#include "week13综合实验2Doc.h"
#include "week13综合实验2View.h"
#include"mydialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek13综合实验2View

IMPLEMENT_DYNCREATE(Cweek13综合实验2View, CRecordView)

BEGIN_MESSAGE_MAP(Cweek13综合实验2View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &Cweek13综合实验2View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &Cweek13综合实验2View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &Cweek13综合实验2View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &Cweek13综合实验2View::OnRecordLast)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON1, &Cweek13综合实验2View::OnBnClickedButton1)
END_MESSAGE_MAP()

// Cweek13综合实验2View 构造/析构

Cweek13综合实验2View::Cweek13综合实验2View()
	: CRecordView(IDD_WEEK132_FORM)
	, picname(_T(""))
	, name(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码
	file = _T("C:\\Users\\14330\\Pictures\\Saved Pictures\\");
	cr.right = cr.left = cr.top = cr.bottom = 0;
	
	s = " ";
}

Cweek13综合实验2View::~Cweek13综合实验2View()
{
}

void Cweek13综合实验2View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_8);
	DDX_Text(pDX, IDC_EDIT2,m_pSet->m_1);
}

BOOL Cweek13综合实验2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void Cweek13综合实验2View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_week13综合实验2Set;
	CRecordView::OnInitialUpdate();

}


// Cweek13综合实验2View 诊断

#ifdef _DEBUG
void Cweek13综合实验2View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cweek13综合实验2View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cweek13综合实验2Doc* Cweek13综合实验2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek13综合实验2Doc)));
	return (Cweek13综合实验2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek13综合实验2View 数据库支持
CRecordset* Cweek13综合实验2View::OnGetRecordset()
{
	return m_pSet;
}



// Cweek13综合实验2View 消息处理程序
void Cweek13综合实验2View::foo(CImage &img, int &sx, int &sy, int &w, int &h)
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

void Cweek13综合实验2View::Draw(CString filename)
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


void Cweek13综合实验2View::OnRecordFirst()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveFirst();
	UpdateData(false);
	Invalidate();
}


void Cweek13综合实验2View::OnRecordPrev()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
	{
		m_pSet->MoveFirst();
	}
	UpdateData(false);
	Invalidate();
}


void Cweek13综合实验2View::OnRecordNext()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
	{
		m_pSet->MoveFirst();
	}
	UpdateData(false);
	Invalidate();
}


void Cweek13综合实验2View::OnRecordLast()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveLast();
	UpdateData(false);
	Invalidate();
}


void Cweek13综合实验2View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CRecordView::OnPaint()
	 s = file + m_pSet->m_8;
	Draw(s);
	
}


void Cweek13综合实验2View::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	mydialog my;
	my.filename= file + m_pSet->m_8;
	my.ShowWindow(1);

}
