
// week8ʵ��Test_2.2View.h : Cweek8ʵ��Test_22View ��Ľӿ�
//

#pragma once


class Cweek8ʵ��Test_22View : public CView
{
protected: // �������л�����
	Cweek8ʵ��Test_22View();
	DECLARE_DYNCREATE(Cweek8ʵ��Test_22View)

// ����
public:
	Cweek8ʵ��Test_22Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek8ʵ��Test_22View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopDialog();
};

#ifndef _DEBUG  // week8ʵ��Test_2.2View.cpp �еĵ��԰汾
inline Cweek8ʵ��Test_22Doc* Cweek8ʵ��Test_22View::GetDocument() const
   { return reinterpret_cast<Cweek8ʵ��Test_22Doc*>(m_pDocument); }
#endif

