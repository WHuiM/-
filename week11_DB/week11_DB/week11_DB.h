
// week11_DB.h : week11_DB Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cweek11_DBApp:
// �йش����ʵ�֣������ week11_DB.cpp
//

class Cweek11_DBApp : public CWinApp
{
public:
	Cweek11_DBApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cweek11_DBApp theApp;
