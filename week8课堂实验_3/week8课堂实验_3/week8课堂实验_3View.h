
// week8����ʵ��_3View.h : Cweek8����ʵ��_3View ��Ľӿ�
//

#pragma once


class Cweek8����ʵ��_3View : public CView
{
protected: // �������л�����
	Cweek8����ʵ��_3View();
	DECLARE_DYNCREATE(Cweek8����ʵ��_3View)

// ����
public:
	Cweek8����ʵ��_3Doc* GetDocument() const;
	CString s;
// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek8����ʵ��_3View();
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
	afx_msg void OnPopDialog();
};

#ifndef _DEBUG  // week8����ʵ��_3View.cpp �еĵ��԰汾
inline Cweek8����ʵ��_3Doc* Cweek8����ʵ��_3View::GetDocument() const
   { return reinterpret_cast<Cweek8����ʵ��_3Doc*>(m_pDocument); }
#endif

