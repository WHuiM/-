
// MFCApplication31View.h : CMFCApplication31View ��Ľӿ�
//

#pragma once

class CMFCApplication31Set;

class CMFCApplication31View : public CRecordView
{
protected: // �������л�����
	CMFCApplication31View();
	DECLARE_DYNCREATE(CMFCApplication31View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MFCAPPLICATION31_FORM };
#endif
	CMFCApplication31Set* m_pSet;

// ����
public:
	CMFCApplication31Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CMFCApplication31View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	long num;
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};

#ifndef _DEBUG  // MFCApplication31View.cpp �еĵ��԰汾
inline CMFCApplication31Doc* CMFCApplication31View::GetDocument() const
   { return reinterpret_cast<CMFCApplication31Doc*>(m_pDocument); }
#endif

