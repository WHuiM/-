
// week9.2View.h : Cweek92View ��Ľӿ�
//

#pragma once


class Cweek92View : public CView
{
protected: // �������л�����
	Cweek92View();
	DECLARE_DYNCREATE(Cweek92View)

// ����
public:
	Cweek92Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek92View();
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

#ifndef _DEBUG  // week9.2View.cpp �еĵ��԰汾
inline Cweek92Doc* Cweek92View::GetDocument() const
   { return reinterpret_cast<Cweek92Doc*>(m_pDocument); }
#endif

