
// Financial_transactionsView.h : CFinancial_transactionsView ��Ľӿ�
//

#pragma once


class CFinancial_transactionsView : public CView
{
protected: // �������л�����
	CFinancial_transactionsView();
	DECLARE_DYNCREATE(CFinancial_transactionsView)

// ����
public:
	CFinancial_transactionsDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CFinancial_transactionsView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Financial_transactionsView.cpp �еĵ��԰汾
inline CFinancial_transactionsDoc* CFinancial_transactionsView::GetDocument() const
   { return reinterpret_cast<CFinancial_transactionsDoc*>(m_pDocument); }
#endif

