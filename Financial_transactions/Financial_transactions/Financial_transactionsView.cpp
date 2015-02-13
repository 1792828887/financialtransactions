
// Financial_transactionsView.cpp : CFinancial_transactionsView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Financial_transactions.h"
#endif

#include "Financial_transactionsDoc.h"
#include "Financial_transactionsView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CFinancial_transactionsView

IMPLEMENT_DYNCREATE(CFinancial_transactionsView, CView)

BEGIN_MESSAGE_MAP(CFinancial_transactionsView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CFinancial_transactionsView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CFinancial_transactionsView ����/����

CFinancial_transactionsView::CFinancial_transactionsView()
{
	// TODO:  �ڴ˴���ӹ������

}

CFinancial_transactionsView::~CFinancial_transactionsView()
{
}

BOOL CFinancial_transactionsView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CFinancial_transactionsView ����

void CFinancial_transactionsView::OnDraw(CDC* /*pDC*/)
{
	CFinancial_transactionsDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CFinancial_transactionsView ��ӡ


void CFinancial_transactionsView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CFinancial_transactionsView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CFinancial_transactionsView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CFinancial_transactionsView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}

void CFinancial_transactionsView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CFinancial_transactionsView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CFinancial_transactionsView ���

#ifdef _DEBUG
void CFinancial_transactionsView::AssertValid() const
{
	CView::AssertValid();
}

void CFinancial_transactionsView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CFinancial_transactionsDoc* CFinancial_transactionsView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CFinancial_transactionsDoc)));
	return (CFinancial_transactionsDoc*)m_pDocument;
}
#endif //_DEBUG


// CFinancial_transactionsView ��Ϣ�������
