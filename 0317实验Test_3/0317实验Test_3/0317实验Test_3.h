
// 0317ʵ��Test_3.h : 0317ʵ��Test_3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy0317ʵ��Test_3App:
// �йش����ʵ�֣������ 0317ʵ��Test_3.cpp
//

class CMy0317ʵ��Test_3App : public CWinApp
{
public:
	CMy0317ʵ��Test_3App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy0317ʵ��Test_3App theApp;
