
// week9Test9.2Doc.h : Cweek9Test92Doc ��Ľӿ�
//


#pragma once


class Cweek9Test92Doc : public CDocument
{
protected: // �������л�����
	Cweek9Test92Doc();
	DECLARE_DYNCREATE(Cweek9Test92Doc)

// ����
public:

// ����
public:
	CArray <CRect, CRect> ca;
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
	virtual ~Cweek9Test92Doc();
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
