
// week7_4View.h : Cweek7_4View ��Ľӿ�
//

#pragma once


class Cweek7_4View : public CView
{
protected: // �������л�����
	Cweek7_4View();
	DECLARE_DYNCREATE(Cweek7_4View)

// ����
public:
	Cweek7_4Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek7_4View();
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

#ifndef _DEBUG  // week7_4View.cpp �еĵ��԰汾
inline Cweek7_4Doc* Cweek7_4View::GetDocument() const
   { return reinterpret_cast<Cweek7_4Doc*>(m_pDocument); }
#endif

