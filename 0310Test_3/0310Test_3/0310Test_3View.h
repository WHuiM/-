
// 0310Test_3View.h : CMy0310Test_3View ��Ľӿ�
//

#pragma once


class CMy0310Test_3View : public CView
{
protected: // �������л�����
	CMy0310Test_3View();
	DECLARE_DYNCREATE(CMy0310Test_3View)

// ����
public:
	CMy0310Test_3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0310Test_3View();
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

#ifndef _DEBUG  // 0310Test_3View.cpp �еĵ��԰汾
inline CMy0310Test_3Doc* CMy0310Test_3View::GetDocument() const
   { return reinterpret_cast<CMy0310Test_3Doc*>(m_pDocument); }
#endif

