
// week8ʵ��Test_2.1View.h : Cweek8ʵ��Test_21View ��Ľӿ�
//

#pragma once


class Cweek8ʵ��Test_21View : public CView
{
protected: // �������л�����
	Cweek8ʵ��Test_21View();
	DECLARE_DYNCREATE(Cweek8ʵ��Test_21View)

// ����
public:
	Cweek8ʵ��Test_21Doc* GetDocument() const;

// ����
public:
	CPoint a, b;
	int flag;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek8ʵ��Test_21View();
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
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // week8ʵ��Test_2.1View.cpp �еĵ��԰汾
inline Cweek8ʵ��Test_21Doc* Cweek8ʵ��Test_21View::GetDocument() const
   { return reinterpret_cast<Cweek8ʵ��Test_21Doc*>(m_pDocument); }
#endif

