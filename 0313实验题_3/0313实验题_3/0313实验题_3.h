
// 0313实验题_3.h : 0313实验题_3 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CMy0313实验题_3App:
// 有关此类的实现，请参阅 0313实验题_3.cpp
//

class CMy0313实验题_3App : public CWinApp
{
public:
	CMy0313实验题_3App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy0313实验题_3App theApp;
