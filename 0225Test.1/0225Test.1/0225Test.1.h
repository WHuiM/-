
// 0225Test.1.h : 0225Test.1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy0225Test1App:
// �йش����ʵ�֣������ 0225Test.1.cpp
//

class CMy0225Test1App : public CWinApp
{
public:
	CMy0225Test1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy0225Test1App theApp;
