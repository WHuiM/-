
// Test综合实验1.h : Test综合实验1 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CTest综合实验1App:
// 有关此类的实现，请参阅 Test综合实验1.cpp
//

class CTest综合实验1App : public CWinApp
{
public:
	CTest综合实验1App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CTest综合实验1App theApp;
