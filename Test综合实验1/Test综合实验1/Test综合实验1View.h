
// Test�ۺ�ʵ��1View.h : CTest�ۺ�ʵ��1View ��Ľӿ�
//

#pragma once

class CTest�ۺ�ʵ��1Set;

class CTest�ۺ�ʵ��1View : public CRecordView
{
protected: // �������л�����
	CTest�ۺ�ʵ��1View();
	DECLARE_DYNCREATE(CTest�ۺ�ʵ��1View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_TEST1_FORM };
#endif
	CTest�ۺ�ʵ��1Set* m_pSet;

// ����
public:
	CTest�ۺ�ʵ��1Doc* GetDocument() const;

// ����
public:
	CString filepath;
	CRect cr;
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
	virtual ~CTest�ۺ�ʵ��1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit2();
	CString name;
	CString number;
	CString gender;
	CString picname;
	void CTest�ۺ�ʵ��1View::foo(CImage &img, int &sx, int &sy, int &w, int &h);
	void CTest�ۺ�ʵ��1View::Draw(CString filename);
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void OnPaint();
};

#ifndef _DEBUG  // Test�ۺ�ʵ��1View.cpp �еĵ��԰汾
inline CTest�ۺ�ʵ��1Doc* CTest�ۺ�ʵ��1View::GetDocument() const
   { return reinterpret_cast<CTest�ۺ�ʵ��1Doc*>(m_pDocument); }
#endif

