
// 0406����ʵ��_2.h : 0406����ʵ��_2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy0406����ʵ��_2App:
// �йش����ʵ�֣������ 0406����ʵ��_2.cpp
//

class CMy0406����ʵ��_2App : public CWinApp
{
public:
	CMy0406����ʵ��_2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy0406����ʵ��_2App theApp;
