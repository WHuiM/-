
// 0317实验Test.h : 0317实验Test 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CMy0317实验TestApp:
// 有关此类的实现，请参阅 0317实验Test.cpp
//

class CMy0317实验TestApp : public CWinApp
{
public:
	CMy0317实验TestApp();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy0317实验TestApp theApp;
