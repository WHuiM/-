
// 0317ʵ��TestDoc.h : CMy0317ʵ��TestDoc ��Ľӿ�
//


#pragma once


class CMy0317ʵ��TestDoc : public CDocument
{
protected: // �������л�����
	CMy0317ʵ��TestDoc();
	DECLARE_DYNCREATE(CMy0317ʵ��TestDoc)

// ����
public:

// ����
public:
	int a;
	POINT x1, x2;
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
	virtual ~CMy0317ʵ��TestDoc();
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
