#include "pch.h"
#include "numbers"
#include "AppMain.h"
#include "sstream"

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace DirectX;
using namespace winrt::Windows::Storage;

AppMain::AppMain() : m_textureTest("poly.jpg"), m_transformTest(XMMatrixIdentity())
{
	//m_transformTest(XMMatrixIdentity());
	DrawCall::vAmbient = XMVectorSet(1.f, 1.f, 1.f, 1.f);
	DrawCall::vLights[0].vLightPosW = XMVectorSet(0.0f, 1.0f, 0.0f, 0.f);
	DrawCall::PushBackfaceCullingState(false);

	m_modelTest.LoadMesh("Lit_VS.cso", "LitTexture_PS.cso", std::make_shared<Mesh>("poly.obj"));

#ifdef _MANY_MODEL
	m_model[0].LoadMesh("Lit_VS.cso", "LitTexture_PS.cso", std::make_shared<Mesh>("poly.obj"));
	m_model[1].LoadMesh("Lit_VS.cso", "LitTexture_PS.cso", std::make_shared<Mesh>("0.8LF2.obj"));
	m_model[2].LoadMesh("Lit_VS.cso", "LitTexture_PS.cso", std::make_shared<Mesh>("kadowaki2.obj"));
	m_model[3].LoadMesh("Lit_VS.cso", "LitTexture_PS.cso", std::make_shared<Mesh>("BaseLink.obj"));

	const float rootMenuHeight = 0.10f;
	float btn_sp = 0.005f;
	float btn_sz = 0.03f;
	float btn_w = btn_sp * 9 + btn_sz * 7;
	float btn_h = btn_sp * 3 + btn_sz * 2;
	float btn_w2 = btn_w * 0.5f;
	float btn_h2 = btn_h * 0.5f;
	XMVECTOR mainButtonSize = XMVectorSet(btn_sz, btn_sz, 0.015f, 0.0f);

	F_menu.HideTitleBar();
	F_menu.SetSize(XMVectorSet(btn_w, btn_h, 0.005f, 1.0f));

	auto fx = [btn_w2, btn_sp, btn_sz](int x) -> float {return -btn_w2 + btn_sp + (btn_sp + btn_sz) * x + btn_sz * 0.5f; };
	auto fy = [btn_h2, btn_sp, btn_sz](int y) -> float {return -btn_h2 + btn_sp + (btn_sp + btn_sz) * y + btn_sz * 0.5f; };

	F_menu.AddButton(make_shared<FloatingSlateButton>(XMVectorSet(fx(0), fy(0), 0.0f, 1.0f), mainButtonSize, XMVectorSet(0.0f, 0.5f, 0.7f, 1.0f), (unsigned)ButtonID::MODEL_0, this, "MODEL1"));
	F_menu.AddButton(make_shared<FloatingSlateButton>(XMVectorSet(fx(0), fy(1), 0.0f, 1.0f), mainButtonSize, XMVectorSet(0.0f, 0.5f, 0.7f, 1.0f), (unsigned)ButtonID::MODEL_1, this, "MODEL2"));
	F_menu.AddButton(make_shared<FloatingSlateButton>(XMVectorSet(fx(1), fy(0), 0.0f, 1.0f), mainButtonSize, XMVectorSet(0.0f, 0.5f, 0.7f, 1.0f), (unsigned)ButtonID::MODEL_2, this, "MODEL3"));
	F_menu.AddButton(make_shared<FloatingSlateButton>(XMVectorSet(fx(1), fy(1), 0.0f, 1.0f), mainButtonSize, XMVectorSet(0.0f, 0.5f, 0.7f, 1.0f), (unsigned)ButtonID::SHOW_MODEL, this, "Show Model"));

#endif // _MANY_MODEL
}

void AppMain::init()
{
	m_mixedReality.EnableMixedReality();
	m_mixedReality.EnableSurfaceMapping();
	m_mixedReality.EnableQRCodeTracking();
}