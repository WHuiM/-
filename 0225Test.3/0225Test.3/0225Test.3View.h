
// 0225Test.3View.h : CMy0225Test3View ��Ľӿ�
//

#pragma once


class CMy0225Test3View : public CView
{
protected: // �������л�����
	CMy0225Test3View();
	DECLARE_DYNCREATE(CMy0225Test3View)

// ����
public:
	CMy0225Test3Doc* GetDocument() const;
	CString ss;
// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0225Test3View();
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

#ifndef _DEBUG  // 0225Test.3View.cpp �еĵ��԰汾
inline CMy0225Test3Doc* CMy0225Test3View::GetDocument() const
   { return reinterpret_cast<CMy0225Test3Doc*>(m_pDocument); }
#endif

