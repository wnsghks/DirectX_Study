#pragma once

#include "SampleUI.h"
// UI_Form 대화 상자
/* CDialogEx -> CFormView */
class UI_Form : public CFormView
{
	DECLARE_DYNAMIC(UI_Form)
public:
	static UI_Form* CreateOne(CWnd* pParent);
public:
	UI_Form(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~UI_Form();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_UI_Form };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBtnClickCreatePlane();
	afx_msg void OnEnChangeMfceditbrowse1();
	afx_msg void OnEnChangeEdit6();
	CString m_strParentName;
	CString m_ScaleX;
	CString m_ScaleY;
	CString m_ScaleZ;
	CString m_RotateAngle;
	CString m_TransZ;
	CString m_TransX;
	CString m_TransY;
	CString m_NodeName;
	CString m_TextureName;
};
