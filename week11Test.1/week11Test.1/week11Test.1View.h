
// week11Test.1View.h : Cweek11Test1View ��Ľӿ�
//

#pragma once

class Cweek11Test1Set;

class Cweek11Test1View : public CRecordView
{
protected: // �������л�����
	Cweek11Test1View();
	DECLARE_DYNCREATE(Cweek11Test1View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK11TEST1_FORM };
#endif
	Cweek11Test1Set* m_pSet;

// ����
public:
	Cweek11Test1Doc* GetDocument() const;

// ����
public:
	CRect picRect;
// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~Cweek11Test1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	void Cweek11Test1View::foo(CImage &img, int &sx, int &sy, int &w, int &h);
	void Cweek11Test1View::Draw(CString filename);
	long ID;
	CString name;
	CString number;
	CString age;
	CString phonenumber;
};

#ifndef _DEBUG  // week11Test.1View.cpp �еĵ��԰汾
inline Cweek11Test1Doc* Cweek11Test1View::GetDocument() const
   { return reinterpret_cast<Cweek11Test1Doc*>(m_pDocument); }
#endif

