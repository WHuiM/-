
// week11Test.1.h : week11Test.1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cweek11Test1App:
// �йش����ʵ�֣������ week11Test.1.cpp
//

class Cweek11Test1App : public CWinApp
{
public:
	Cweek11Test1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cweek11Test1App theApp;
