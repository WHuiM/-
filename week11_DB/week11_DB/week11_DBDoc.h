
// week11_DBDoc.h : Cweek11_DBDoc ��Ľӿ�
//


#pragma once
#include "week11_DBSet.h"


class Cweek11_DBDoc : public CDocument
{
protected: // �������л�����
	Cweek11_DBDoc();
	DECLARE_DYNCREATE(Cweek11_DBDoc)

// ����
public:
	Cweek11_DBSet m_week11_DBSet;

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
	virtual ~Cweek11_DBDoc();
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
