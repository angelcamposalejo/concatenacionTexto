#pragma once  //______________________________________ TextConcentration.h  
#include "Resource.h"
class TextConcentration : public Win::Dialog
{
public:
	TextConcentration()
	{
	}
	~TextConcentration()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Textbox tbxName;
	Win::Label lb1;
	Win::Textbox tbxVerb;
	Win::Button btCrear;
	Win::Textbox tbxConcentrado;
	Win::Label lb2;
	Win::Label lb3;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(445);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(103);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"TextConcentration";
		tbxName.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 28, 25, 108, 25, hWnd, 1000);
		lb1.Create(NULL, L"likes", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 151, 23, 66, 25, hWnd, 1001);
		tbxVerb.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 237, 24, 99, 25, hWnd, 1002);
		btCrear.Create(NULL, L"Crear", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 361, 28, 77, 28, hWnd, 1003);
		tbxConcentrado.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 28, 71, 308, 25, hWnd, 1004);
		lb2.Create(NULL, L"Nombre", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 38, 3, 63, 18, hWnd, 1005);
		lb3.Create(NULL, L"Verbo", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 246, 1, 77, 19, hWnd, 1006);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		tbxName.Font = fontArial014A;
		lb1.Font = fontArial014A;
		tbxVerb.Font = fontArial014A;
		btCrear.Font = fontArial014A;
		tbxConcentrado.Font = fontArial014A;
		lb2.Font = fontArial014A;
		lb3.Font = fontArial014A;
	}
	//_________________________________________________
	void btCrear_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btCrear.IsEvent(e, BN_CLICKED)) { btCrear_Click(e); return true; }
		return false;
	}
};
