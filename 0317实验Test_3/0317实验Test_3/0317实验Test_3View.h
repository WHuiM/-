
// 0317ʵ��Test_3View.h : CMy0317ʵ��Test_3View ��Ľӿ�
//

#pragma once


class CMy0317ʵ��Test_3View : public CView
{
protected: // �������л�����
	CMy0317ʵ��Test_3View();
	DECLARE_DYNCREATE(CMy0317ʵ��Test_3View)

// ����
public:
	CMy0317ʵ��Test_3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0317ʵ��Test_3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 0317ʵ��Test_3View.cpp �еĵ��԰汾
inline CMy0317ʵ��Test_3Doc* CMy0317ʵ��Test_3View::GetDocument() const
   { return reinterpret_cast<CMy0317ʵ��Test_3Doc*>(m_pDocument); }
#endif

