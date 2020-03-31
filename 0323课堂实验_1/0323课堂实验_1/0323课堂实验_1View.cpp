
// 0323课堂实验_1View.cpp : CMy0323课堂实验_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0323课堂实验_1.h"
#endif

#include "0323课堂实验_1Doc.h"
#include "0323课堂实验_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0323课堂实验_1View

IMPLEMENT_DYNCREATE(CMy0323课堂实验_1View, CView)

BEGIN_MESSAGE_MAP(CMy0323课堂实验_1View, CView)
	ON_COMMAND(ID_ShowCircle, &CMy0323课堂实验_1View::OnShowcircle)
END_MESSAGE_MAP()

// CMy0323课堂实验_1View 构造/析构

CMy0323课堂实验_1View::CMy0323课堂实验_1View()
{
	// TODO: 在此处添加构造代码

}

CMy0323课堂实验_1View::~CMy0323课堂实验_1View()
{
}

BOOL CMy0323课堂实验_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0323课堂实验_1View 绘制

void CMy0323课堂实验_1View::OnDraw(CDC* /*pDC*/)
{
	CMy0323课堂实验_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy0323课堂实验_1View 诊断

#ifdef _DEBUG
void CMy0323课堂实验_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0323课堂实验_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0323课堂实验_1Doc* CMy0323课堂实验_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0323课堂实验_1Doc)));
	return (CMy0323课堂实验_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0323课堂实验_1View 消息处理程序


void CMy0323课堂实验_1View::OnShowcircle()
{
	// TODO: 在此添加命令处理程序代码
	int r, a, b;
	CClientDC dc(this);//显示半径渐变的圆
	CRect cr;
	this->GetClientRect(&cr);
	if (cr.bottom - cr.top > cr.right - cr.left)
		 r = (cr.right - cr.left) / 2;
	else
		 r = (cr.bottom + cr.top) / 2;
	 a = cr.right - cr.left;
	 b = cr.bottom - cr.top;
	for (int i = 0; i < 15; i++)
	{
		if (r > 0)
		{
			dc.Ellipse(a / 2 - r, b / 2 - r, a / 2 + r, b / 2 + r);
			r -= 20;
		}
		
	}
}
