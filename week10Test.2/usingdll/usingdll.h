
// usingdll.h : usingdll Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CusingdllApp:
// �йش����ʵ�֣������ usingdll.cpp
//

class CusingdllApp : public CWinApp
{
public:
	CusingdllApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CusingdllApp theApp;
