
// week9Test9.2View.h : Cweek9Test92View ��Ľӿ�
//

#pragma once


class Cweek9Test92View : public CView
{
protected: // �������л�����
	Cweek9Test92View();
	DECLARE_DYNCREATE(Cweek9Test92View)

// ����
public:
	Cweek9Test92Doc* GetDocument() const;

// ����
public:
	
	CRect cr;
	CPoint a;
	int flag;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek9Test92View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // week9Test9.2View.cpp �еĵ��԰汾
inline Cweek9Test92Doc* Cweek9Test92View::GetDocument() const
   { return reinterpret_cast<Cweek9Test92Doc*>(m_pDocument); }
#endif

