
// 0313ʵ����_3View.h : CMy0313ʵ����_3View ��Ľӿ�
//

#pragma once


class CMy0313ʵ����_3View : public CView
{
protected: // �������л�����
	CMy0313ʵ����_3View();
	DECLARE_DYNCREATE(CMy0313ʵ����_3View)

// ����
public:
	CMy0313ʵ����_3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0313ʵ����_3View();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 0313ʵ����_3View.cpp �еĵ��԰汾
inline CMy0313ʵ����_3Doc* CMy0313ʵ����_3View::GetDocument() const
   { return reinterpret_cast<CMy0313ʵ����_3Doc*>(m_pDocument); }
#endif

