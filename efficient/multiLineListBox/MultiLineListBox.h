#if !defined(AFX_MULITLINELISTBOX_H__D705CB99_9FD0_424E_BD71_027547449AE5__INCLUDED_)
#define AFX_MULITLINELISTBOX_H__D705CB99_9FD0_424E_BD71_027547449AE5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// MulitLineListBox.h : header file
//

#define MAX_ITEM_SHOW_IN_LIST 4096
/////////////////////////////////////////////////////////////////////////////
// CMulitLineListBox window
typedef struct _LISTBOX_COLOR_
{
	CString titleStr;
	CString subTitleStr;
	COLORREF fgColor;
	COLORREF bgColor;
	_LISTBOX_COLOR_()
	{
		titleStr.Empty();
		subTitleStr.Empty();
		fgColor = RGB(0, 0, 0);
		bgColor = RGB(255, 255, 255);
	}
}LISTBOX_COLOR, *PLISTBOX_COLOR;

class CMultiLineListBox : public CListBox
{
// Construction
public:
	CMultiLineListBox();

// Attributes
public:
	void AppendString(LPCSTR titleStr, LPCSTR subTitleStr, COLORREF fgColor, COLORREF bgColor);
// Operations
public:

	CFont m_titleFont;
	CFont m_subTitleFont;
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMulitLineListBox)
	public:
	virtual void MeasureItem(LPMEASUREITEMSTRUCT lpMeasureItemStruct);
	virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMultiLineListBox();

	// Generated message map functions
protected:
	//{{AFX_MSG(CMulitLineListBox)
	afx_msg void OnDestroy();
	CDC m_dc;
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MULITLINELISTBOX_H__D705CB99_9FD0_424E_BD71_027547449AE5__INCLUDED_)
