
// 0313ʵ����_1View.h : CMy0313ʵ����_1View ��Ľӿ�
//

#pragma once


class CMy0313ʵ����_1View : public CView
{
protected: // �������л�����
	CMy0313ʵ����_1View();
	DECLARE_DYNCREATE(CMy0313ʵ����_1View)

// ����
public:
	CMy0313ʵ����_1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0313ʵ����_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 0313ʵ����_1View.cpp �еĵ��԰汾
inline CMy0313ʵ����_1Doc* CMy0313ʵ����_1View::GetDocument() const
   { return reinterpret_cast<CMy0313ʵ����_1Doc*>(m_pDocument); }
#endif

