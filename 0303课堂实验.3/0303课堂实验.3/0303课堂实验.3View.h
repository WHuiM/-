
// 0303����ʵ��.3View.h : CMy0303����ʵ��3View ��Ľӿ�
//

#pragma once


class CMy0303����ʵ��3View : public CView
{
protected: // �������л�����
	CMy0303����ʵ��3View();
	DECLARE_DYNCREATE(CMy0303����ʵ��3View)

// ����
public:
	CMy0303����ʵ��3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0303����ʵ��3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 0303����ʵ��.3View.cpp �еĵ��԰汾
inline CMy0303����ʵ��3Doc* CMy0303����ʵ��3View::GetDocument() const
   { return reinterpret_cast<CMy0303����ʵ��3Doc*>(m_pDocument); }
#endif

