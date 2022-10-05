#include "pch.h"
#include "AppMain.h"

using namespace winrt::Windows::Storage;

void AppMain::DrawObjects()
{
	m_textureTest.BindAsPixelShaderResource(0);
	m_modelTest.Draw();
}