#pragma once
#include "pch.h"

#include "Cannon/DrawCall.h"
#include "Cannon/FloatingSlate.h"
#include "Cannon/FloatingText.h"
#include "Cannon/MixedReality.h"
#include "Cannon/Common/Timer.h"
#include "Cannon/TrackedHands.h"

#define ONLY_ONE

class AppMain
{
public:
	AppMain();

	bool Update();
	void DrawObjects();
	void Render();
	void init();

private:
	MixedReality m_mixedReality;
#ifdef ONLY_ONE
	Texture2D m_textureTest;
	DrawCall m_modelTest;
#endif // ONLY_ONE
	DirectX::XMMATRIX m_transformTest;
	Timer F_frameDeltaTimer;
	TrackedHands F_hands;
};