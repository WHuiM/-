
// 0324ʵ����_2View.h : CMy0324ʵ����_2View ��Ľӿ�
//

#pragma once


class CMy0324ʵ����_2View : public CView
{
protected: // �������л�����
	CMy0324ʵ����_2View();
	DECLARE_DYNCREATE(CMy0324ʵ����_2View)

// ����
public:
	CMy0324ʵ����_2Doc* GetDocument() const;

// ����
public:
	CBitmap m_Bitmap;
	int m_nWidth;
	int m_nHeight;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0324ʵ����_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 0324ʵ����_2View.cpp �еĵ��԰汾
inline CMy0324ʵ����_2Doc* CMy0324ʵ����_2View::GetDocument() const
   { return reinterpret_cast<CMy0324ʵ����_2Doc*>(m_pDocument); }
#endif

