
// week9.1View.h : Cweek91View ��Ľӿ�
//

#pragma once


class Cweek91View : public CView
{
protected: // �������л�����
	Cweek91View();
	DECLARE_DYNCREATE(Cweek91View)

// ����
public:
	Cweek91Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek91View();
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

#ifndef _DEBUG  // week9.1View.cpp �еĵ��԰汾
inline Cweek91Doc* Cweek91View::GetDocument() const
   { return reinterpret_cast<Cweek91Doc*>(m_pDocument); }
#endif

