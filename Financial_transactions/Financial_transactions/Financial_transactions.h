
// Financial_transactions.h : Financial_transactions Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CFinancial_transactionsApp:
// �йش����ʵ�֣������ Financial_transactions.cpp
//

class CFinancial_transactionsApp : public CWinAppEx
{
public:
	CFinancial_transactionsApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CFinancial_transactionsApp theApp;
