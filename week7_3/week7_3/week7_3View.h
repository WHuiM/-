
// week7_3View.h : Cweek7_3View ��Ľӿ�
//

#pragma once


class Cweek7_3View : public CView
{
protected: // �������л�����
	Cweek7_3View();
	DECLARE_DYNCREATE(Cweek7_3View)

// ����
public:
	Cweek7_3Doc* GetDocument() const;

// ����
public:
	CRect cr;
	int flag,sw;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek7_3View();
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
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // week7_3View.cpp �еĵ��԰汾
inline Cweek7_3Doc* Cweek7_3View::GetDocument() const
   { return reinterpret_cast<Cweek7_3Doc*>(m_pDocument); }
#endif

