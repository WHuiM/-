
// 0331ʵ����_1View.h : CMy0331ʵ����_1View ��Ľӿ�
//

#pragma once


class CMy0331ʵ����_1View : public CView
{
protected: // �������л�����
	CMy0331ʵ����_1View();
	DECLARE_DYNCREATE(CMy0331ʵ����_1View)

// ����
public:
	CMy0331ʵ����_1Doc* GetDocument() const;

// ����
	 
public:
	CString m_strLine;
	CPoint m_ptorigin;
	CRect cr;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0331ʵ����_1View();
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
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // 0331ʵ����_1View.cpp �еĵ��԰汾
inline CMy0331ʵ����_1Doc* CMy0331ʵ����_1View::GetDocument() const
   { return reinterpret_cast<CMy0331ʵ����_1Doc*>(m_pDocument); }
#endif

