
// week8����ʵ�� _2View.h : Cweek8����ʵ��_2View ��Ľӿ�
//

#pragma once


class Cweek8����ʵ��_2View : public CView
{
protected: // �������л�����
	Cweek8����ʵ��_2View();
	DECLARE_DYNCREATE(Cweek8����ʵ��_2View)

// ����
public:
	Cweek8����ʵ��_2Doc*  GetDocument() const;

// ����
public:
	CString s;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek8����ʵ��_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnPopout();
};

#ifndef _DEBUG  // week8����ʵ�� _2View.cpp �еĵ��԰汾
inline Cweek8����ʵ��_2Doc* Cweek8����ʵ��_2View::GetDocument() const
   { return reinterpret_cast<Cweek8����ʵ��_2Doc*>(m_pDocument); }
#endif

