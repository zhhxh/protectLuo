#pragma once
#include "T_Menu.h"

class MyMenu :public T_Menu {
	T_Graph BtnDIB1;									// ²Ëµ¥Í¼Æ¬1
	public :
		MyMenu();
		virtual ~MyMenu();
		void DrawMenu(HDC hdc, float ratio=1,BYTE btnTrans = 255, bool startState = true);
		void SetBtnBmpT(wstring img_path, wstring img_path1,int btnWidth, int btnHeight);
		void DrawTMenu(HDC hdc, float ratio = 1, BYTE btnTrans = 255, bool startState = true);
};