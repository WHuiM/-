
// week8����ʵ��_1.h : week8����ʵ��_1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cweek8����ʵ��_1App:
// �йش����ʵ�֣������ week8����ʵ��_1.cpp
//

class Cweek8����ʵ��_1App : public CWinApp
{
public:
	Cweek8����ʵ��_1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cweek8����ʵ��_1App theApp;
