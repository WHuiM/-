
// week10TestView.h : Cweek10TestView ��Ľӿ�
//

#pragma once


class Cweek10TestView : public CView
{
protected: // �������л�����
	Cweek10TestView();
	DECLARE_DYNCREATE(Cweek10TestView)

// ����
public:
	Cweek10TestDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek10TestView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // week10TestView.cpp �еĵ��԰汾
inline Cweek10TestDoc* Cweek10TestView::GetDocument() const
   { return reinterpret_cast<Cweek10TestDoc*>(m_pDocument); }
#endif

