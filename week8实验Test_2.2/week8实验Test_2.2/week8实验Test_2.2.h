
// week8ʵ��Test_2.2.h : week8ʵ��Test_2.2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cweek8ʵ��Test_22App:
// �йش����ʵ�֣������ week8ʵ��Test_2.2.cpp
//

class Cweek8ʵ��Test_22App : public CWinApp
{
public:
	Cweek8ʵ��Test_22App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cweek8ʵ��Test_22App theApp;
