
// usingdllView.h : CusingdllView ��Ľӿ�
//

#pragma once


class CusingdllView : public CView
{
protected: // �������л�����
	CusingdllView();
	DECLARE_DYNCREATE(CusingdllView)

// ����
public:
	CusingdllDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CusingdllView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // usingdllView.cpp �еĵ��԰汾
inline CusingdllDoc* CusingdllView::GetDocument() const
   { return reinterpret_cast<CusingdllDoc*>(m_pDocument); }
#endif

