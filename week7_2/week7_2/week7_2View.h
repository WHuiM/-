
// week7_2View.h : Cweek7_2View ��Ľӿ�
//

#pragma once


class Cweek7_2View : public CView
{
protected: // �������л�����
	Cweek7_2View();
	DECLARE_DYNCREATE(Cweek7_2View)

// ����
public:
	Cweek7_2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek7_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopout();
};

#ifndef _DEBUG  // week7_2View.cpp �еĵ��԰汾
inline Cweek7_2Doc* Cweek7_2View::GetDocument() const
   { return reinterpret_cast<Cweek7_2Doc*>(m_pDocument); }
#endif

