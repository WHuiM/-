
// week11Test.1��2Doc.h : Cweek11Test1��2Doc ��Ľӿ�
//


#pragma once
#include "week11Test.1��2Set.h"


class Cweek11Test1��2Doc : public CDocument
{
protected: // �������л�����
	Cweek11Test1��2Doc();
	DECLARE_DYNCREATE(Cweek11Test1��2Doc)

// ����
public:
	Cweek11Test1��2Set m_week11Test1��2Set;

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
	virtual ~Cweek11Test1��2Doc();
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
