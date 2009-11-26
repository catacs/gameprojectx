#pragma once

#include "Part.h"

class Perception;
class Brain;
class UnitLocation;
class Timer;

class AIPart : public Part
{
private:
	Perception *	m_Perception;
	Brain *			m_Brain;
	UnitLocation *	m_UnitLocation;

public:
	AIPart(void);
	~AIPart(void);

	void Enter(Timer * timer);
	void Update();
	void Exit();
};
