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


void AppMain::DrawObjects()
{
	m_textureTest.BindAsPixelShaderResource(0);
	m_modelTest.Draw();
}


void AppMain::Render()
{
	if (m_mixedReality.IsEnabled())
	{
		DrawCall::vLights[0].vLightPosW = m_mixedReality.GetHeadPosition() + XMVectorSet(0.0f, 1.0f, 0.0f, 0.f);

		for (size_t cameraPoseIndex = 0; cameraPoseIndex < m_mixedReality.GetCameraPoseCount(); ++cameraPoseIndex)
		{
			Microsoft::WRL::ComPtr<ID3D11Texture2D> d3dBackBuffer = m_mixedReality.GetBackBuffer(cameraPoseIndex);
			D3D11_VIEWPORT d3dViewport = m_mixedReality.GetViewport(cameraPoseIndex);
			DrawCall::SetBackBuffer(d3dBackBuffer.Get(), d3dViewport);

			// Default clip planes are 0.1 and 20
			static XMMATRIX leftView, rightView, leftProj, rightProj;
			m_mixedReality.GetViewMatrices(cameraPoseIndex, leftView, rightView);
			m_mixedReality.GetProjMatrices(cameraPoseIndex, leftProj, rightProj);
			DrawCall::PushView(leftView, rightView);
			DrawCall::PushProj(leftProj, rightProj);

			DrawCall::GetBackBuffer()->Clear(0.f, 0.f, 0.f, 0.f);

			DrawCall::PushRenderPass(0, DrawCall::GetBackBuffer());
			DrawObjects();
			DrawCall::PopRenderPass();

			if (!DrawCall::IsSinglePassSteroEnabled())
			{
				DrawCall::PushRightEyePass(0, DrawCall::GetBackBuffer());
				DrawObjects();
				DrawCall::PopRightEyePass();
			}

			DrawCall::PopView();
			DrawCall::PopProj();

			m_mixedReality.CommitDepthBuffer(cameraPoseIndex, DrawCall::GetBackBuffer()->GetD3DDepthStencilTexture());
		}

		m_mixedReality.PresentAndWait();
	}
	else
	{
		DrawCall::PushView(
			XMVectorSet(0.0f, 0.0f, 5.0f, 1.0f),
			XMVectorSet(0.0f, 0.0f, 0.0f, 1.0f),
			XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f));
		//DrawCall::PushView(XMVectorSet(1.0f, 1.0f, 1.0f, 1.0f), XMVectorSet(0.0f, 0.0f, 0.0f, 1.0f), XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f));
		DrawCall::PushProj(XM_PIDIV4,
			DrawCall::GetCurrentRenderTarget()->GetWidth() / (float)DrawCall::GetCurrentRenderTarget()->GetHeight(),
			0.01f, 20.0f);

		DrawCall::PushRenderPass(0, DrawCall::GetBackBuffer());

		DrawCall::GetBackBuffer()->Clear(0.f, 0.f, 0.f, 0.f);
		DrawObjects();

		DrawCall::PopView();
		DrawCall::PopProj();
		DrawCall::PopRenderPass();

		DrawCall::GetD3DSwapChain()->Present(1, 0);
	}
}

void AppMain::init()
{
	m_mixedReality.EnableMixedReality();
	m_mixedReality.EnableSurfaceMapping();
	m_mixedReality.EnableQRCodeTracking();
}