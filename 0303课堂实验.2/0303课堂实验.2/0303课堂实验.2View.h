
// 0303����ʵ��.2View.h : CMy0303����ʵ��2View ��Ľӿ�
//

#pragma once


class CMy0303����ʵ��2View : public CView
{
protected: // �������л�����
	CMy0303����ʵ��2View();
	DECLARE_DYNCREATE(CMy0303����ʵ��2View)

// ����
public:
	CMy0303����ʵ��2Doc* GetDocument() const;

// ����
public:
	CPoint pt;
	int r;
	CArray <CRect, CRect>ca;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0303����ʵ��2View();
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

#ifndef _DEBUG  // 0303����ʵ��.2View.cpp �еĵ��԰汾
inline CMy0303����ʵ��2Doc* CMy0303����ʵ��2View::GetDocument() const
   { return reinterpret_cast<CMy0303����ʵ��2Doc*>(m_pDocument); }
#endif

