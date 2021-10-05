#include "GraphTest.h"
#include "resource.h"

// WinMain����
int WINAPI WinMain(HINSTANCE h_instance, HINSTANCE hPrevInstance,
	PSTR szCmdLine, int iCmdShow)
{
	LPCTSTR WinTitle = L"�����ܲ�";
	GraphTest* mygame = new GraphTest(h_instance, WIN_CLASS, WinTitle,
		IDI_ICON1, IDI_ICON1, WIN_WIDTH, WIN_HEIGHT);
	T_Engine::pEngine = mygame;
	mygame->SetFrame(50);
	//mygame->SetFullScreen(TRUE);
	mygame->StartEngine();

	return TRUE;
}