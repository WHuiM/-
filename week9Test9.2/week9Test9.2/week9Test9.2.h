
// week9Test9.2.h : week9Test9.2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cweek9Test92App:
// �йش����ʵ�֣������ week9Test9.2.cpp
//

class Cweek9Test92App : public CWinApp
{
public:
	Cweek9Test92App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cweek9Test92App theApp;
