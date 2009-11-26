#pragma once

#include "Part.h"

class Timer;
class Entity;

class NtwPart : public Part
{
public:
	NtwPart(void);
	~NtwPart(void);

	void Enter(Timer * timer, Entity* owner);
	void Update();
	void Exit();
};
