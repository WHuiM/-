
// week9Test.1.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// Cweek9Test1App: 
// �йش����ʵ�֣������ week9Test.1.cpp
//

class Cweek9Test1App : public CWinApp
{
public:
	Cweek9Test1App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Cweek9Test1App theApp;