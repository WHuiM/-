
// week8ʵ��Test_1.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// Cweek8ʵ��Test_1App: 
// �йش����ʵ�֣������ week8ʵ��Test_1.cpp
//

class Cweek8ʵ��Test_1App : public CWinApp
{
public:
	Cweek8ʵ��Test_1App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Cweek8ʵ��Test_1App theApp;