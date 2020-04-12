
// 0330课堂实验_1View.cpp : CMy0330课堂实验_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0330课堂实验_1.h"
#endif

#include "0330课堂实验_1Doc.h"
#include "0330课堂实验_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0330课堂实验_1View

IMPLEMENT_DYNCREATE(CMy0330课堂实验_1View, CView)

BEGIN_MESSAGE_MAP(CMy0330课堂实验_1View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMy0330课堂实验_1View::OnFileOpen)
END_MESSAGE_MAP()

// CMy0330课堂实验_1View 构造/析构

CMy0330课堂实验_1View::CMy0330课堂实验_1View()
{
	// TODO: 在此处添加构造代码
	a.x = 0; a.y = 0;
}

CMy0330课堂实验_1View::~CMy0330课堂实验_1View()
{
}

BOOL CMy0330课堂实验_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0330课堂实验_1View 绘制

void CMy0330课堂实验_1View::OnDraw(CDC* /*pDC*/)
{
	CMy0330课堂实验_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy0330课堂实验_1View 诊断

#ifdef _DEBUG
void CMy0330课堂实验_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0330课堂实验_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0330课堂实验_1Doc* CMy0330课堂实验_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0330课堂实验_1Doc)));
	return (CMy0330课堂实验_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0330课堂实验_1View 消息处理程序


void CMy0330课堂实验_1View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
	
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		CString filename;
		filename = cfd.GetPathName();
		CImage img;
		img.Load(filename);
		
		{
			CRect cr;
			this->GetClientRect(&cr);
			a.x = (cr.right -cr.left)/2;
			a.y = (cr.bottom - cr.top) / 2 ; //确定客户区的中心位
			
		}
		
		img.Draw(dc.m_hDC, a.x-img.GetWidth()/2, a.y-img.GetHeight()/2,  img.GetHeight() ,  img.GetHeight());
	}
	
}
