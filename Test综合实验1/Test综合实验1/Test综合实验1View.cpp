
// Test综合实验1View.cpp : CTest综合实验1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Test综合实验1.h"
#endif

#include "Test综合实验1Set.h"
#include "Test综合实验1Doc.h"
#include "Test综合实验1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTest综合实验1View

IMPLEMENT_DYNCREATE(CTest综合实验1View, CRecordView)

BEGIN_MESSAGE_MAP(CTest综合实验1View, CRecordView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
	ON_EN_CHANGE(IDC_EDIT2, &CTest综合实验1View::OnEnChangeEdit2)
	ON_COMMAND(ID_RECORD_FIRST, &CTest综合实验1View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CTest综合实验1View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CTest综合实验1View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CTest综合实验1View::OnRecordLast)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CTest综合实验1View 构造/析构

CTest综合实验1View::CTest综合实验1View()
	: CRecordView(IDD_TEST1_FORM)
	, name(_T(""))
	, number(_T(""))
	, gender(_T(""))
	, picname(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码
	filepath = _T("C:\\Users\\14330\\Pictures\\Saved Pictures\\");
	cr.bottom = cr.left = cr.right = cr.top = 0;
}

CTest综合实验1View::~CTest综合实验1View()
{
}

void CTest综合实验1View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_4);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_8);
}

BOOL CTest综合实验1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CTest综合实验1View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Test综合实验1Set;
	CRecordView::OnInitialUpdate();

}


// CTest综合实验1View 打印

BOOL CTest综合实验1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CTest综合实验1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CTest综合实验1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CTest综合实验1View 诊断

#ifdef _DEBUG
void CTest综合实验1View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CTest综合实验1View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CTest综合实验1Doc* CTest综合实验1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTest综合实验1Doc)));
	return (CTest综合实验1Doc*)m_pDocument;
}
#endif //_DEBUG


// CTest综合实验1View 数据库支持
CRecordset* CTest综合实验1View::OnGetRecordset()
{
	return m_pSet;
}
void CTest综合实验1View::Draw(CString filename)
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


// CTest综合实验1View 消息处理程序
void CTest综合实验1View::foo(CImage &img, int &sx, int &sy, int &w, int &h)
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

	

void CTest综合实验1View::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CRecordView::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CTest综合实验1View::OnRecordFirst()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveFirst();
	UpdateData(false);

	Invalidate();
}


void CTest综合实验1View::OnRecordPrev()
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


void CTest综合实验1View::OnRecordNext()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
	{
		m_pSet->MoveLast();
	}
	UpdateData(false);
	
	Invalidate();
}


void CTest综合实验1View::OnRecordLast()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveLast();
	UpdateData(false);
	
	Invalidate();
}


void CTest综合实验1View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
	CString s = filepath+m_pSet->m_8;
	Draw(s);
}
