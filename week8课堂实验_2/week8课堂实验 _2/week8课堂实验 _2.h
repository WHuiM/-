
// week8����ʵ�� _2.h : week8����ʵ�� _2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cweek8����ʵ��_2App:
// �йش����ʵ�֣������ week8����ʵ�� _2.cpp
//

class Cweek8����ʵ��_2App : public CWinApp
{
public:
	Cweek8����ʵ��_2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cweek8����ʵ��_2App theApp;
