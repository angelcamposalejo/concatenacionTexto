#include "stdafx.h"  //________________________________________ TextConcentration.cpp
#include "TextConcentration.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	TextConcentration app;
	return app.BeginDialog(IDI_TextConcentration, hInstance);
}

void TextConcentration::Window_Open(Win::Event& e)
{
}

void TextConcentration::btCrear_Click(Win::Event& e)
{
}

