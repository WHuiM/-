
// 0317ʵ��Test.h : 0317ʵ��Test Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy0317ʵ��TestApp:
// �йش����ʵ�֣������ 0317ʵ��Test.cpp
//

class CMy0317ʵ��TestApp : public CWinApp
{
public:
	CMy0317ʵ��TestApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy0317ʵ��TestApp theApp;
