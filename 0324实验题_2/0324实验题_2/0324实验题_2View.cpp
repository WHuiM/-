
// 0324实验题_2View.cpp : CMy0324实验题_2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0324实验题_2.h"
#endif

#include "0324实验题_2Doc.h"
#include "0324实验题_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0324实验题_2View

IMPLEMENT_DYNCREATE(CMy0324实验题_2View, CView)

BEGIN_MESSAGE_MAP(CMy0324实验题_2View, CView)
END_MESSAGE_MAP()

// CMy0324实验题_2View 构造/析构

CMy0324实验题_2View::CMy0324实验题_2View()
{
	// TODO: 在此处添加构造代码
	BITMAP BM;
	m_Bitmap.LoadBitmapW(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;
}

CMy0324实验题_2View::~CMy0324实验题_2View()
{
}

BOOL CMy0324实验题_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0324实验题_2View 绘制

void CMy0324实验题_2View::OnDraw(CDC* pDC)
{
	CMy0324实验题_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight,&MemDC,0,0,SRCCOPY);
}


// CMy0324实验题_2View 诊断

#ifdef _DEBUG
void CMy0324实验题_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0324实验题_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0324实验题_2Doc* CMy0324实验题_2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0324实验题_2Doc)));
	return (CMy0324实验题_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0324实验题_2View 消息处理程序
