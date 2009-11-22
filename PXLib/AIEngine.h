#pragma once

#include "System.h"

class CentralizedPerception;
class Timer;
class Regulator;
class AIPart;

class AIEngine: public System
{
public:
	enum AIModeType {ClientMode, ServerMode};

	AIEngine();
	~AIEngine();
	void Enter();
	void Update();
	void Exit();

	int GetGameMode();
	void ChangeMode(AIModeType mode);

	AIPart * GeneratePart();

private:
	AIModeType m_GameMode;

	CentralizedPerception m_perception;
	Regulator * regulator;

};