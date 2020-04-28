
// week9.1View.cpp : Cweek91View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week9.1.h"
#endif

#include "week9.1Doc.h"
#include "week9.1View.h"
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek91View

IMPLEMENT_DYNCREATE(Cweek91View, CView)

BEGIN_MESSAGE_MAP(Cweek91View, CView)
	ON_COMMAND(ID_POP_DIALOG, &Cweek91View::OnPopDialog)
END_MESSAGE_MAP()

// Cweek91View 构造/析构

Cweek91View::Cweek91View()
{
	// TODO: 在此处添加构造代码

}

Cweek91View::~Cweek91View()
{
}

BOOL Cweek91View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek91View 绘制

void Cweek91View::OnDraw(CDC* pDC)
{
	Cweek91Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek91View 诊断

#ifdef _DEBUG
void Cweek91View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek91View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek91Doc* Cweek91View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek91Doc)));
	return (Cweek91Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek91View 消息处理程序


void Cweek91View::OnPopDialog()
{
	// TODO: 在此添加命令处理程序代码
	Cweek91Doc* pDoc = GetDocument();
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		ofstream out;
		out.open(_T("abc.txt"), std::ios::out | std::ios::app);
		out <<CT2A( cfd.GetPathName().GetString()) << endl;
		
		
	}
}
