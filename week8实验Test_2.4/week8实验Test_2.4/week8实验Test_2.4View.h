
// week8ʵ��Test_2.4View.h : Cweek8ʵ��Test_24View ��Ľӿ�
//

#pragma once


class Cweek8ʵ��Test_24View : public CView
{
protected: // �������л�����
	Cweek8ʵ��Test_24View();
	DECLARE_DYNCREATE(Cweek8ʵ��Test_24View)

// ����
public:
	Cweek8ʵ��Test_24Doc* GetDocument() const;

// ����
public:
	CRect cr;
	CRect cr1;
	int r, g, b;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek8ʵ��Test_24View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopDialog();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // week8ʵ��Test_2.4View.cpp �еĵ��԰汾
inline Cweek8ʵ��Test_24Doc* Cweek8ʵ��Test_24View::GetDocument() const
   { return reinterpret_cast<Cweek8ʵ��Test_24Doc*>(m_pDocument); }
#endif

