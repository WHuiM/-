
// 0323����ʵ��_2View.h : CMy0323����ʵ��_2View ��Ľӿ�
//

#pragma once


class CMy0323����ʵ��_2View : public CView
{
protected: // �������л�����
	CMy0323����ʵ��_2View();
	DECLARE_DYNCREATE(CMy0323����ʵ��_2View)

// ����
public:
	CMy0323����ʵ��_2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0323����ʵ��_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDifferentcolor();
};

#ifndef _DEBUG  // 0323����ʵ��_2View.cpp �еĵ��԰汾
inline CMy0323����ʵ��_2Doc* CMy0323����ʵ��_2View::GetDocument() const
   { return reinterpret_cast<CMy0323����ʵ��_2Doc*>(m_pDocument); }
#endif

