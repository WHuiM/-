
// MFCApplication31.h : MFCApplication31 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCApplication31App:
// �йش����ʵ�֣������ MFCApplication31.cpp
//

class CMFCApplication31App : public CWinApp
{
public:
	CMFCApplication31App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication31App theApp;
