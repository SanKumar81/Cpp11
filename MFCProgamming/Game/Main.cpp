#include "resource.h"
#include <afxwin.h>
class Game_Form :public CDialog
{
public:
	Game_Form(CWnd* parent = nullptr):CDialog(INTERFACE1, parent) {}
	enum {IDD=INTERFACE1};
	virtual BOOL OnInitDialog()
	{
		CDialog::OnInitDialog();
		return true;
	}
public:
	DECLARE_MESSAGE_MAP();
};

class TheGame :public CWinApp
{
public:
	TheGame() {}
	virtual BOOL InitApplication()
	{
		CWinApp::InitApplication();
		Game_Form gameDialog;
		m_pMainWnd = &gameDialog;
		gameDialog.DoModal();
		return false;
	}
};

BEGIN_MESSAGE_MAP(Game_Form,CDialog)
END_MESSAGE_MAP()

TheGame theGame;
