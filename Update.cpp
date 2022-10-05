#include"pch.h" //pch.h�K�{
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


	//QR�R�[�h��ɕ\��
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

		XMVECTOR RtipsPos = F_hands.GetJoint(1, HandJointIndex::IndexTip);//�l�����w��̍��W
		XMVECTOR RthumTipPos = F_hands.GetJoint(1, HandJointIndex::ThumbTip);//�e�w�̐�
		XMVECTOR RdisPos = F_hands.GetJoint(1, HandJointIndex::IndexDistal);//�l�����w���֐�
		//���ݏ��
		bool RIsGrasp = false;

#if 0

		const XMVECTOR headPosition = m_mixedReality.GetHeadPosition();
		//����̐�̍��W
		const XMVECTOR tips_pos = F_hands.GetJoint(0, HandJointIndex::IndexTip);
		const XMVECTOR dis_pos = F_hands.GetJoint(0, HandJointIndex::IndexDistal);
		auto fing_vec = tips_pos - dis_pos;
		//1m�̒P�ʃx�N�g��
		auto fing_vec_e = XMVector3Normalize(fing_vec);
		// �w����Tcm ��ɕ\���@�\
		auto rotate = XMMatrixRotationY(90 * M_PI / 180);
		m_transformTest = rotate * XMMatrixTranslationFromVector(tips_pos + (0.05 * fing_vec_e));

#endif

#if 1
		//�e�w�Ɛl�����w�̋���
		auto diS = distance(RtipsPos, RthumTipPos);
		//auto rotate = XMMatrixRotationY(90 * M_PI / 180);
		if (diS <= 0.01f)//1cm�ȉ��Ȃ���ݔ���
		{
			RIsGrasp = true;
			auto Rfing = RtipsPos - RdisPos;
			//�@�͂񂾈ʒu����̋���
			double disBetprePos = double(distance(RtipsPos, RprevPos));
			//�@���݈ʒu�ōX�V
			RprevPos = RtipsPos;
			// scale UPDATE
			scale = 1 + disBetprePos * 10;
			auto Rfing_vec_e = XMVector3Normalize(Rfing);
			m_transformTest = rotate * modelPos;
		}
		else
		{
			RIsGrasp = false;
			//�@�������ʒu�̍��W���L�^
			// const XMVECTOR releasePosition = F_hands.GetJoint(1, HandJointIndex::IndexTip);
		}
#endif

	}
	// ����
	if (F_hands.IsHandTracked(0))
	{
		XMVECTOR LtipsPos = F_hands.GetJoint(1, HandJointIndex::IndexTip);//�l�����w��̍��W
		XMVECTOR LthumTipPos = F_hands.GetJoint(1, HandJointIndex::ThumbTip);//�e�w�̐�
		XMVECTOR LdisPos = F_hands.GetJoint(1, HandJointIndex::IndexDistal);//�l�����w���֐�

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