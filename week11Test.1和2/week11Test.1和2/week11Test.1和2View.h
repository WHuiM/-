
// week11Test.1��2View.h : Cweek11Test1��2View ��Ľӿ�
//

#pragma once

class Cweek11Test1��2Set;

class Cweek11Test1��2View : public CRecordView
{
protected: // �������л�����
	Cweek11Test1��2View();
	DECLARE_DYNCREATE(Cweek11Test1��2View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK11TEST12_FORM };
#endif
	Cweek11Test1��2Set* m_pSet;

// ����
public:
	Cweek11Test1��2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~Cweek11Test1��2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	long id;
	CString name;
	CString number;
	CString age;
	CString phonenumber;
	afx_msg void OnBnClickedButton1();
	void Cweek11Test1��2View::foo(CImage &img, int &sx, int &sy, int &w, int &h);
};

#ifndef _DEBUG  // week11Test.1��2View.cpp �еĵ��԰汾
inline Cweek11Test1��2Doc* Cweek11Test1��2View::GetDocument() const
   { return reinterpret_cast<Cweek11Test1��2Doc*>(m_pDocument); }
#endif

