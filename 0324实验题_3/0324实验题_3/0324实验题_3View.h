
// 0324ʵ����_3View.h : CMy0324ʵ����_3View ��Ľӿ�
//

#pragma once


class CMy0324ʵ����_3View : public CView
{
protected: // �������л�����
	CMy0324ʵ����_3View();
	DECLARE_DYNCREATE(CMy0324ʵ����_3View)

// ����
public:
	CMy0324ʵ����_3Doc* GetDocument() const;

// ����
public:
	POINT a, b;
	int flag;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0324ʵ����_3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDrawline();
//	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnDrawrect();
	afx_msg void OnDrawcircle();
};

#ifndef _DEBUG  // 0324ʵ����_3View.cpp �еĵ��԰汾
inline CMy0324ʵ����_3Doc* CMy0324ʵ����_3View::GetDocument() const
   { return reinterpret_cast<CMy0324ʵ����_3Doc*>(m_pDocument); }
#endif

