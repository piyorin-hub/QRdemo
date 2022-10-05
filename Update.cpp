#include"pch.h" //pch.h必須
#include "AppMain.h"

#define _USE_MATH_DEFINES
#include <math.h>

using namespace DirectX;

float distance(const XMVECTOR& vector1, const XMVECTOR& vector2);
XMVECTOR RprevPos, LprevPos;


bool AppMain::Update()
{

	double scale = 1;
	auto pose = XMMatrixRotationX(0);
	auto rotate = XMMatrixRotationX(90.0f * M_PI / 180.0f);
	DirectX::XMMATRIX modelPos = XMMatrixIdentity();

	m_mixedReality.Update();
	F_hands.UpdateFromMixedReality(m_mixedReality);


	float frameDelta = F_frameDeltaTimer.GetTime();
	if (frameDelta >= 3.6)
	{
		F_frameDeltaTimer.Reset();
	}


	//QRコード状に表示
	auto qr = m_mixedReality.GetTrackedQRCodeList();
	if (!qr.empty())
	{
		OutputDebugStringA(("QR code : " + std::to_string(qr.size()) + " , " + qr[0].value + "\n").c_str());

		modelPos = XMMatrixTranslationFromVector(XMVectorSet(qr[0].length / 2, qr[0].length / 2, 0.0f, 0.0f)) * qr[0].worldTransform;

		modelPos.r[3].n128_f32[0] /= scale;
		modelPos.r[3].n128_f32[1] /= scale;
		modelPos.r[3].n128_f32[2] /= scale;

		modelPos.r[3].n128_f32[1] += 0.1f / scale;

		auto rot = XMMatrixRotationX(-90.0f / 180.0f * 3.14f);

		auto rad = (frameDelta * 100.0f) / 180.0f * 3.14f;

		auto pose = XMMatrixRotationY(0);
		auto pose1 = XMMatrixRotationY(-rad);


		m_transformTest = rot * modelPos;
		//m_transformTest = pose1 * m_transformTest;
		//m_modelTest.SetWorldTransform(XMMatrixMultiply(XMMatrixMultiply(trans, XMMatrixScaling(scale, scale, scale)), pose));
	}
	else
	{
		m_transformTest = XMMatrixTranslationFromVector(XMVectorSet(0.0f, 0.0f, 0.5f, 0.0f));
		m_modelTest.SetWorldTransform(XMMatrixMultiply(XMMatrixMultiply(m_transformTest, XMMatrixScaling(scale, scale, scale)), pose));
	}

	if (F_hands.IsHandTracked(1))
	{

		XMVECTOR RtipsPos = F_hands.GetJoint(1, HandJointIndex::IndexTip);//人差し指先の座標
		XMVECTOR RthumTipPos = F_hands.GetJoint(1, HandJointIndex::ThumbTip);//親指の先
		XMVECTOR RdisPos = F_hands.GetJoint(1, HandJointIndex::IndexDistal);//人差し指第一関節
		//つかみ状態
		bool RIsGrasp = false;

#if 0

		const XMVECTOR headPosition = m_mixedReality.GetHeadPosition();
		//左手の先の座標
		const XMVECTOR tips_pos = F_hands.GetJoint(0, HandJointIndex::IndexTip);
		const XMVECTOR dis_pos = F_hands.GetJoint(0, HandJointIndex::IndexDistal);
		auto fing_vec = tips_pos - dis_pos;
		//1mの単位ベクトル
		auto fing_vec_e = XMVector3Normalize(fing_vec);
		// 指先より５cm 先に表示機能
		auto rotate = XMMatrixRotationY(90 * M_PI / 180);
		m_transformTest = rotate * XMMatrixTranslationFromVector(tips_pos + (0.05 * fing_vec_e));

#endif

#if 1
		//親指と人差し指の距離
		auto diS = distance(RtipsPos, RthumTipPos);
		//auto rotate = XMMatrixRotationY(90 * M_PI / 180);
		if (diS <= 0.01f)//1cm以下ならつかみ判定
		{
			RIsGrasp = true;
			auto Rfing = RtipsPos - RdisPos;
			//　掴んだ位置からの距離
			double disBetprePos = double(distance(RtipsPos, RprevPos));
			//　現在位置で更新
			RprevPos = RtipsPos;
			// scale UPDATE
			scale = 1 + disBetprePos * 10;
			auto Rfing_vec_e = XMVector3Normalize(Rfing);
			m_transformTest = rotate * modelPos;
		}
		else
		{
			RIsGrasp = false;
			//　離した位置の座標を記録
			// const XMVECTOR releasePosition = F_hands.GetJoint(1, HandJointIndex::IndexTip);
		}
#endif

	}
	// 左手
	if (F_hands.IsHandTracked(0))
	{
		XMVECTOR LtipsPos = F_hands.GetJoint(1, HandJointIndex::IndexTip);//人差し指先の座標
		XMVECTOR LthumTipPos = F_hands.GetJoint(1, HandJointIndex::ThumbTip);//親指の先
		XMVECTOR LdisPos = F_hands.GetJoint(1, HandJointIndex::IndexDistal);//人差し指第一関節

		bool LisGrab = false;

		auto diff = distance(LtipsPos, LthumTipPos);
		if (diff <= 0.1f)
		{
			LisGrab = true;
			float rot = distance(LtipsPos, LprevPos);
			LprevPos = LtipsPos;
			auto rad = (rot * 10.0f) / 180.0f * M_PI;
			auto pose1 = XMMatrixRotationY(-rad);

			m_transformTest = rotate * modelPos;
			m_transformTest = pose1 * m_transformTest;
		}
		else
		{
			LisGrab = false;
		}

	}


#ifdef _ONLY_ONE
	m_modelTest.SetWorldTransform(XMMatrixMultiply(XMMatrixMultiply(m_transformTest, XMMatrixScaling(scale, scale, scale)), pose));
#endif // _ONLY_ONE

#ifdef _MANY_MODEL
	ChosenOne.SetWorldTransform(XMMatrixMultiply(XMMatrixMultiply(m_transformTest, XMMatrixScaling(scale, scale, scale)), pose));
#endif // 
	return false;
}

float distance(const XMVECTOR& vector1, const XMVECTOR& vector2)
{
	XMVECTOR vectorSub = XMVectorSubtract(vector1, vector2);
	XMVECTOR length = XMVector3Length(vectorSub);

	float distance = 0.0f;
	XMStoreFloat(&distance, length);
	return distance;
}