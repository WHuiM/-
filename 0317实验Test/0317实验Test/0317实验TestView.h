
// 0317ʵ��TestView.h : CMy0317ʵ��TestView ��Ľӿ�
//

#pragma once


class CMy0317ʵ��TestView : public CView
{
protected: // �������л�����
	CMy0317ʵ��TestView();
	DECLARE_DYNCREATE(CMy0317ʵ��TestView)

// ����
public:
	CMy0317ʵ��TestDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0317ʵ��TestView();
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

#ifndef _DEBUG  // 0317ʵ��TestView.cpp �еĵ��԰汾
inline CMy0317ʵ��TestDoc* CMy0317ʵ��TestView::GetDocument() const
   { return reinterpret_cast<CMy0317ʵ��TestDoc*>(m_pDocument); }
#endif

