
// MFCApplication31Doc.h : CMFCApplication31Doc ��Ľӿ�
//


#pragma once
#include "MFCApplication31Set.h"


class CMFCApplication31Doc : public CDocument
{
protected: // �������л�����
	CMFCApplication31Doc();
	DECLARE_DYNCREATE(CMFCApplication31Doc)

// ����
public:
	CMFCApplication31Set m_MFCApplication31Set;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CMFCApplication31Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
