
// 0225Test.1View.h : CMy0225Test1View ��Ľӿ�
//

#pragma once


class CMy0225Test1View : public CView
{
protected: // �������л�����
	CMy0225Test1View();
	DECLARE_DYNCREATE(CMy0225Test1View)

// ����
public:
	CMy0225Test1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0225Test1View();
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

#ifndef _DEBUG  // 0225Test.1View.cpp �еĵ��԰汾
inline CMy0225Test1Doc* CMy0225Test1View::GetDocument() const
   { return reinterpret_cast<CMy0225Test1Doc*>(m_pDocument); }
#endif

