
// week11_DBView.h : Cweek11_DBView ��Ľӿ�
//

#pragma once

class Cweek11_DBSet;

class Cweek11_DBView : public CRecordView
{
protected: // �������л�����
	Cweek11_DBView();
	DECLARE_DYNCREATE(Cweek11_DBView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK11_DB_FORM };
#endif
	Cweek11_DBSet* m_pSet;

// ����
public:
	Cweek11_DBDoc* GetDocument() const;

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
	virtual ~Cweek11_DBView();
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
	CString phonenum;
};

#ifndef _DEBUG  // week11_DBView.cpp �еĵ��԰汾
inline Cweek11_DBDoc* Cweek11_DBView::GetDocument() const
   { return reinterpret_cast<Cweek11_DBDoc*>(m_pDocument); }
#endif

