
// week7_1View.h : Cweek7_1View ��Ľӿ�
//

#pragma once


class Cweek7_1View : public CView
{
protected: // �������л�����
	Cweek7_1View();
	DECLARE_DYNCREATE(Cweek7_1View)

// ����
public:
	Cweek7_1Doc* GetDocument() const;

// ����
public:
	CPoint a,b;
	int x1,x2, y1,y2,flag;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek7_1View();
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

#ifndef _DEBUG  // week7_1View.cpp �еĵ��԰汾
inline Cweek7_1Doc* Cweek7_1View::GetDocument() const
   { return reinterpret_cast<Cweek7_1Doc*>(m_pDocument); }
#endif

