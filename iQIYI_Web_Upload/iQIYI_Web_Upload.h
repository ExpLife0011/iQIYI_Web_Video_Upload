// iQIYI_Web_Upload.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CiQIYI_Web_UploadApp:
// �йش����ʵ�֣������ iQIYI_Web_Upload.cpp
//

class CiQIYI_Web_UploadApp : public CWinApp
{
public:
	CiQIYI_Web_UploadApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CiQIYI_Web_UploadApp theApp;