
// 0310ʵ��_2View.h : CMy0310ʵ��_2View ��Ľӿ�
//

#pragma once


class CMy0310ʵ��_2View : public CView
{
protected: // �������л�����
	CMy0310ʵ��_2View();
	DECLARE_DYNCREATE(CMy0310ʵ��_2View)

// ����
public:
	CMy0310ʵ��_2Doc* GetDocument() const;

// ����
public:
	CArray <CRect, CRect&> c;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0310ʵ��_2View();
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

#ifndef _DEBUG  // 0310ʵ��_2View.cpp �еĵ��԰汾
inline CMy0310ʵ��_2Doc* CMy0310ʵ��_2View::GetDocument() const
   { return reinterpret_cast<CMy0310ʵ��_2Doc*>(m_pDocument); }
#endif

