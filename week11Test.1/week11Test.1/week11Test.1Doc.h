
// week11Test.1Doc.h : Cweek11Test1Doc ��Ľӿ�
//


#pragma once
#include "week11Test.1Set.h"


class Cweek11Test1Doc : public CDocument
{
protected: // �������л�����
	Cweek11Test1Doc();
	DECLARE_DYNCREATE(Cweek11Test1Doc)

// ����
public:
	Cweek11Test1Set m_week11Test1Set;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~Cweek11Test1Doc();
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
