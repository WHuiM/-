
// 0310Test_3Doc.h : CMy0310Test_3Doc ��Ľӿ�
//


#pragma once


class CMy0310Test_3Doc : public CDocument
{
protected: // �������л�����
	CMy0310Test_3Doc();
	DECLARE_DYNCREATE(CMy0310Test_3Doc)

// ����
public:

// ����
public:
	int A, B;
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
	virtual ~CMy0310Test_3Doc();
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
