
// week10Test.h : week10Test Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cweek10TestApp:
// �йش����ʵ�֣������ week10Test.cpp
//

class Cweek10TestApp : public CWinApp
{
public:
	Cweek10TestApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cweek10TestApp theApp;
