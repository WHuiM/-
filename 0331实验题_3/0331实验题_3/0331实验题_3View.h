
// 0331ʵ����_3View.h : CMy0331ʵ����_3View ��Ľӿ�
//

#pragma once


class CMy0331ʵ����_3View : public CView
{
protected: // �������л�����
	CMy0331ʵ����_3View();
	DECLARE_DYNCREATE(CMy0331ʵ����_3View)

// ����
public:
	CMy0331ʵ����_3Doc* GetDocument() const;

// ����
public:
	int i; CString s;
	int x, y;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0331ʵ����_3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // 0331ʵ����_3View.cpp �еĵ��԰汾
inline CMy0331ʵ����_3Doc* CMy0331ʵ����_3View::GetDocument() const
   { return reinterpret_cast<CMy0331ʵ����_3Doc*>(m_pDocument); }
#endif

