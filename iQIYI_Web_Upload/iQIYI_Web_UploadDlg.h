// iQIYI_Web_UploadDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CiQIYI_Web_UploadDlg �Ի���
class CiQIYI_Web_UploadDlg : public CDialog
{
// ����
public:
	CiQIYI_Web_UploadDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_IQIYI_WEB_UPLOAD_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnServer();
	afx_msg void OnBnClickedBtnUpload();
	afx_msg void OnBnClickedBtnFinish();
	afx_msg void OnBnClickedBtnSave();
	CEdit m_pEditPath;
	afx_msg void OnBnClickedBtnDel();
};
