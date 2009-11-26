#pragma once

#include "Part.h"

class Timer;
class Entity;

class SndPart : public Part
{
public:
	SndPart(void);
	~SndPart(void);

	void Enter(Timer * timer, Entity* owner);
	void Update();
	void Exit();

};
