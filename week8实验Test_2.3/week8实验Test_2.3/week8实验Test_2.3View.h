
// week8ʵ��Test_2.3View.h : Cweek8ʵ��Test_23View ��Ľӿ�
//

#pragma once


class Cweek8ʵ��Test_23View : public CView
{
protected: // �������л�����
	Cweek8ʵ��Test_23View();
	DECLARE_DYNCREATE(Cweek8ʵ��Test_23View)

// ����
public:
	Cweek8ʵ��Test_23Doc* GetDocument() const;

// ����
public:
	CRect cr;
		CRect cr1;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek8ʵ��Test_23View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // week8ʵ��Test_2.3View.cpp �еĵ��԰汾
inline Cweek8ʵ��Test_23Doc* Cweek8ʵ��Test_23View::GetDocument() const
   { return reinterpret_cast<Cweek8ʵ��Test_23Doc*>(m_pDocument); }
#endif

