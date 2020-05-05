
// week10Test.h : week10Test 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// Cweek10TestApp:
// 有关此类的实现，请参阅 week10Test.cpp
//

class Cweek10TestApp : public CWinApp
{
public:
	Cweek10TestApp();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cweek10TestApp theApp;
