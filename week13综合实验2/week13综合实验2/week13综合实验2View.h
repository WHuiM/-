
// week13�ۺ�ʵ��2View.h : Cweek13�ۺ�ʵ��2View ��Ľӿ�
//

#pragma once

class Cweek13�ۺ�ʵ��2Set;

class Cweek13�ۺ�ʵ��2View : public CRecordView
{
protected: // �������л�����
	Cweek13�ۺ�ʵ��2View();
	DECLARE_DYNCREATE(Cweek13�ۺ�ʵ��2View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK132_FORM };
#endif
	Cweek13�ۺ�ʵ��2Set* m_pSet;

// ����
public:
	Cweek13�ۺ�ʵ��2Doc* GetDocument() const;

// ����
public:
	CString file,s;
	CRect cr;
// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~Cweek13�ۺ�ʵ��2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString picname;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	void Cweek13�ۺ�ʵ��2View::Draw(CString filename);
	void Cweek13�ۺ�ʵ��2View::foo(CImage &img, int &sx, int &sy, int &w, int &h);
	afx_msg void OnPaint();
	CString name;
	afx_msg void OnBnClickedButton1();
	
};

#ifndef _DEBUG  // week13�ۺ�ʵ��2View.cpp �еĵ��԰汾
inline Cweek13�ۺ�ʵ��2Doc* Cweek13�ۺ�ʵ��2View::GetDocument() const
   { return reinterpret_cast<Cweek13�ۺ�ʵ��2Doc*>(m_pDocument); }
#endif

